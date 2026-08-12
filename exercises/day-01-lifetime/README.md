# Day 1：对象生命周期与悬空观察者

## 状态

- 日期：2026-08-12
- 状态：`completed`
- 当前掌握层级：2. 能够解释
- 目标掌握层级：2. 能够解释

## 学习目标

- 观察自动存储期对象进入和离开块作用域时的构造、析构顺序；
- 区分按值返回与返回局部对象引用/指针；
- 识别引用、裸指针和按引用捕获 Lambda 的悬空风险；
- 不通过实际执行未定义行为来“验证”规则。

## 输入与公开边界

练习仅使用自行编写的代码和合成字符串/整数，不使用任何外部数据、公司代码或内部上下文。

## 构建与运行

在本目录执行：

```powershell
cmake -S . -B build
cmake --build build --config Debug
.\build\Debug\day_01_lifetime.exe
```

如果使用单配置生成器，可执行文件位置可能不同；以构建输出为准。

本次验证环境使用 Windows x64 与 MSVC 14.52 工具集。由于当前执行环境未能完成 CMake 构建树写入，本次先使用等价的直接编译命令验证源码：

```powershell
cl /nologo /std:c++17 /EHsc /W4 /permissive- main.cpp /Fe:build\day_01_lifetime.exe /Fo:build\day_01_lifetime.obj
```

CMake 配置与构建能力不在 Day 1 提升层级；将在 CMake 学习日独立验证。

## 运行前预测

先不要运行，写下预测：

1. `outer object` 和 `inner object` 谁先构造？
2. `inner object` 在哪条提示之前析构？
3. `outer object` 在哪条提示之后析构？
4. `make_value()` 返回的字符串为什么仍然安全？
5. `safe_reader` 为什么在 `main` 后续仍可使用捕获的值？

## 正确性验证

运行后检查：

- `inner object` 的析构发生在内部块结束时；
- `outer object` 的析构发生在 `main` 离开时；
- 指针只在 `inner` 仍存活时解引用；
- 返回值和按值捕获均可安全使用；
- 程序不包含悬空解引用或其他故意执行的未定义行为。

## 独立任务

完成 [Day 1 笔记](../../notes/day-01-lifetime.md) 末尾的四个问题。之后自行添加一个 `Tracer` 对象和一层嵌套作用域，在运行前预测析构顺序，再用输出核对。

## 当前结果

- 教学代码已创建；
- MSVC 编译成功，无编译错误；
- 程序退出码为 0，实际输出为：

```text
enter main
construct: outer object
construct: inner object
observe while alive: inner object
destroy:   inner object
inner scope ended; no observer is used after this point
returned safely by value
safe value capture: 42
leave main
destroy:   outer object
```

- 输出验证 `inner` 在内部块结束时析构，`outer` 在 `main` 退出时析构；
- 程序只在对象存活时使用观察指针，没有执行悬空访问；
- 用户已完成局部引用、逃逸指针、Lambda 引用捕获和按值捕获修复的独立解释；
- 新的 `std::string` Lambda 场景迁移判断通过，当前提高到“2. 能够解释”。
