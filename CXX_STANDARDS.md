---
status: confirmed_in_use
last_updated: 2026-08-12
minimum_required: [C++11, C++14, C++17, C++20]
selective_bridge: C++23
tracked_extension: C++26
current_day: 2
---

# 现代 C++ 标准覆盖矩阵

本文件定义现代 C++ 学习主线的版本范围。用户已明确要求至少覆盖 C++11、C++14、C++17 和 C++20；C++23 作为从 C++20 过渡到后续标准的选择性阶段，C++26 在存在可靠资料和实际工具链支持时纳入。

“覆盖某个标准”不等于背诵该版本全部提案，也不等于看完一组视频。每个必学版本至少需要：

1. 了解与当前主线相关的核心语言变化；
2. 使用代表性标准库设施解决独立问题；
3. 说明生命周期、所有权、正确性、可移植性或性能边界；
4. 用对应标准模式编译并保留可复现证据；
5. 能区分“在哪个版本引入”“当前编译器是否支持”和“是否适合当前问题”。

## 版本范围

| 标准 | 必学核心语言 | 必学或重点标准库 | 当前主线中的作用 | 最低完成证据 |
| --- | --- | --- | --- | --- |
| C++11 | `auto`、`nullptr`、范围 `for`、强类型枚举、Lambda、右值引用、值类别、移动语义、`noexcept`、可变参数模板、基础 `constexpr`、内存模型 | 智能指针、`chrono`、`thread`/`mutex`/`atomic`/`future`、`type_traits`、`array`、无序容器 | 建立现代生命周期、所有权、并发和泛型基础 | 独立解释移动与所有权；完成资源类型、智能指针和基础并发实验 |
| C++14 | 泛型 Lambda、Lambda 初始化捕获、函数返回类型推导、变量模板、放宽的 `constexpr` | `make_unique`、`integer_sequence`、`shared_timed_mutex` 等代表性增量 | 补齐 C++11 的工程易用性，并为模板和编译期计算过渡 | 至少完成泛型 Lambda、`make_unique` 与一项编译期/模板小实验 |
| C++17 | 结构化绑定、带初始化的 `if`/`switch`、`if constexpr`、折叠表达式、内联变量、类模板参数推导 | `string_view`、`optional`、`variant`、`any`、`filesystem`、并行算法、`scoped_lock`、`pmr`（按性能阶段启用） | 形成当前常见工程代码的语言与库基线 | 独立完成 view 生命周期、代数数据类型、文件系统或泛型分派等代表性练习 |
| C++20 | Concepts/约束、三路比较、指定初始化、`consteval`/`constinit`、Modules、Coroutines | Ranges/Views、`span`、`format`、`source_location`、`jthread`/停止令牌、latch/barrier/semaphore、atomic wait/notify 与 `atomic_ref` | 建立现代泛型接口、范围处理、并发和大型工程能力 | Concepts、Ranges、`span` 必须有独立代码；Modules、Coroutines 至少能够解释，并在工具链支持时完成最小实验 |
| C++23 | 显式对象形参、`if consteval` 等相关语言增量 | `expected`、`mdspan`、`print` 及与主线直接相关的 ranges/容器增量 | 作为 C++20 与 C++26 之间的选择性桥梁，不跳过版本语境 | 选择至少两个与错误处理、线性代数/数据布局或工程效率相关的设施完成解释或实验 |
| C++26 | 只选择已经进入工作草案、资料可靠且与主线直接相关的语言特性；反射、契约等先按支持情况分级 | 优先跟踪 `linalg`、`simd`、`inplace_vector`；hazard pointer/RCU 等待并发前置；其他设施按需 | 连接线性代数、高性能数据布局、并发和未来标准库，但不追逐尚不能稳定使用的特性 | 先达到“1. 看过/2. 能够解释”；只有编译器和标准库实际支持时才要求独立实现 |

## 优先级与顺序

### 现在深入

- C++11 的生命周期、移动、智能指针、异常规格和并发语义基础；
- C++14 的泛型 Lambda、初始化捕获、`make_unique` 和编译期基础；
- C++17 的 `string_view`、结构化绑定、`if constexpr`、折叠表达式和常用词汇类型；
- C++20 的 Concepts、Ranges/Views、`span` 和 `jthread` 基础。

### 半年内学习

- C++17 `filesystem`、并行算法、`pmr`；
- C++20 Modules、Coroutines、同步原语、`atomic_ref`、格式化与源码位置信息；
- C++23 中与错误处理、矩阵/多维视图和工程表达力直接相关的内容；
- C++26 中 `linalg`、`simd`、`inplace_vector` 等与本主线高度重合的设施，在实现可用后做小型实验。

### 只需了解或暂缓

- 每个标准的冷门特性和与主线无关的完整提案清单，只需知道如何查证；
- C++26 反射、契约、hazard pointer、RCU 等大型主题，在模板、正确性或并发前置尚未满足时不提前深入；
- 编译器尚未实现的 C++26 功能不作为“独立实现”门禁，也不把编译失败归因于学习者。

## 与当前 30 个学习日的关系

当前 `SCHEDULE.md` 是第一轮基础周期，不声称在 30 个学习日内学完四代标准：

- Day 1–10、15 已覆盖 C++11 生命周期/移动/智能指针基础和 C++17 `string_view`，Day 3 补入 C++14 `make_unique` 的版本语境；
- Day 23 在模板基础上增加 C++14 泛型 Lambda、C++17 `if constexpr`/折叠表达式和 C++20 Concepts 的演进导航，只要求建立差异地图和最小示例；
- Day 29 检查能否说清当前用到的设施分别来自哪个标准；
- 第一轮之后优先安排 C++14 补齐、C++17 常用设施和 C++20 Concepts/Ranges/`span`；之后再进入 C++20 Modules/Coroutines/并发增量和选择性的 C++23/C++26。

具体学习日仍根据上一周期的证据滚动生成，不提前伪造后续每日完成状态。

## C++26 资料与采用条件

截至 2026-08-12，C++26 有公开资料可供跟踪，但仍应按工作草案和实现支持对待：

- [WG21 2026 年论文与邮件列表](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2026/)：确认提案状态和最新工作草案入口；
- [WG21 N5054 工作草案（2026-07-16）](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2026/n5054.pdf)：规范查证来源，不作为从头阅读的教材；
- [cppreference C++26 页面与编译器支持矩阵](https://en.cppreference.com/w/cpp/26)：查找特性、提案编号和实现状态；
- [MSVC 语言与标准库一致性表](https://learn.microsoft.com/en-us/cpp/overview/visual-cpp-language-conformance)：在 Windows/Visual Studio 环境验证实际支持情况。

C++26 主题只有同时满足以下条件才进入正式实验：

1. 已进入对应工作草案，而不是只有早期提案；
2. 有 WG21、cppreference 或实现方文档可交叉核对；
3. 当前工具链明确支持，或可以用可控的独立环境验证；
4. 与线性代数、现代 C++、性能、并发或 CUDA 主线直接相关；
5. 不挤占 C++11–20 必修内容和当前能力断点。

## 版本门禁

- [ ] C++11 代表性核心语言、标准库和独立实验达到相应证据要求；
- [ ] C++14 代表性增量和独立实验达到相应证据要求；
- [ ] C++17 代表性核心语言、标准库和独立实验达到相应证据要求；
- [ ] C++20 Concepts、Ranges、`span` 及至少一个并发/工程主题达到相应证据要求；
- [ ] 能解释 C++11 → C++14 → C++17 → C++20 的主要演进关系和兼容边界；
- [ ] C++23 已按主线相关性完成选择性桥接，或记录暂缓原因；
- [ ] C++26 已根据工作草案和工具链支持完成一次重新评估，不把草案状态写成已发布标准。

这些门禁是长期能力门禁，不是第一轮 30 个学习日的完成条件。
