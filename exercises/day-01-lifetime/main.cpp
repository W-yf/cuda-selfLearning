#include <iostream>
#include <string>

class Tracer {
public:
    explicit Tracer(std::string name) : name_(std::move(name))
    {
        std::cout << "construct: " << name_ << '\n';
    }

    ~Tracer()
    {
        std::cout << "destroy:   " << name_ << '\n';
    }

    const std::string& name() const
    {
        return name_;
    }

private:
    std::string name_;
};

std::string make_value()
{
    std::string local{"returned safely by value"};
    return local;
}

int main()
{
    std::cout << "enter main\n";
    Tracer outer{"outer object"};

    {
        Tracer inner{"inner object"};
        const Tracer* observer = &inner;
        std::cout << "observe while alive: " << observer->name() << '\n';
    }

    std::cout << "inner scope ended; no observer is used after this point\n";

    const std::string result = make_value();
    std::cout << result << '\n';

    const auto safe_reader = [value = 42] { return value; };
    std::cout << "safe value capture: " << safe_reader() << '\n';

    std::cout << "leave main\n";
}
