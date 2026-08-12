---
status: confirmed_in_use
last_updated: 2026-08-12
scope: current_30_learning_days
---

# 视频索引

本文件为 `SCHEDULE.md` 中当前 30 个学习日提供逐日视频入口。它不改变任务顺序，也不把“看完视频”视为完成；每个学习日仍以对应的解释、推导、代码、测试或实验产出为完成证据。

## 使用规则

- 视频用于建立直觉和降低入门阻力；权威文档、练习与实验用于校正规则和形成证据。
- 工作日优先选择短视频片段；需要连续推导和纸笔笔记的线性代数视频留在家中完成。
- 表中“无新增视频”表示当天应复习、实现或分析，不用为了覆盖率额外观看内容。
- Bilibili 合集可能调整分集标题或顺序，开始学习时按“分集名称”复核，不只依赖序号。
- 当前索引只覆盖已进入日程的 30 个学习日。尚未排入日程的并发进阶、模板元编程和 CUDA 后续主题列在文末，正式排期时再细化。

## 资源入口

### 线性代数

- `LA-V1`：[MIT 线性代数（Gilbert Strang，Bilibili 合集）](https://www.bilibili.com/video/BV13Y4y1q7ZE/)：当前主视频，适合安静环境下完整观看和记笔记。
- `LA-V2`：[3Blue1Brown：Essence of Linear Algebra](https://www.3blue1brown.com/topics/linear-algebra)：用于向量、线性组合、张成、矩阵变换等几何直觉，不替代推导和习题。
- `LA-R1`：[MIT OCW 18.06SC Linear Algebra](https://ocw.mit.edu/courses/18-06sc-linear-algebra-fall-2011/)：官方讲义、问题求解视频、习题与答案来源。

### 现代 C++

- `CPP-V1`：[一起来学 C++（短视频合集）](https://space.bilibili.com/80353385/channel/collectiondetail?sid=3849162)：用于工作日快速预习或复习；相关分集包括指针与引用、容器、智能指针、右值与移动、特殊成员函数、模板等。
- `CPP-V2`：[零基础 C++（长视频合集）](https://space.bilibili.com/271469206/channel/collectiondetail?sid=3703860)：用于需要较完整上下文的补充；本阶段主要使用“拷贝和移动控制”“模板基础”等分集。
- `CPP-R1`：[LearnCpp](https://www.learncpp.com/)：本阶段 C++ 系统讲解和练习主资料。
- `CPP-R2`：[C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)：所有权、资源管理和接口设计规则来源。
- `CPP-R3`：[cppreference](https://en.cppreference.com/w/)：标准库行为、失效规则和异常保证查证入口。
- `CPP-R4`：[现代 C++ 标准覆盖矩阵](CXX_STANDARDS.md)：C++11、14、17、20 的必学范围，以及 C++23/26 的采用边界；用于防止把某个视频合集误当作完整标准课程。

### 性能、缓存与数据布局

- `PERF-V1`：[AoS vs SoA 短视频演示](https://www.bilibili.com/video/BV1yYKWzzEYk/)：用于 Day 17 快速建立布局差异直觉，结论必须由自己的实验验证。
- `PERF-V2`：[MIT 6.172 Lecture 10: Measurement and Timing](https://ocw.mit.edu/courses/6-172-performance-engineering-of-software-systems-fall-2018/resources/lecture-10-measurement-and-timing/)：用于计时范围、测量误差与可信基准的权威补充；按当天主题选看片段，不要求一次看完。
- `PERF-V3`：[MIT 6.172 Lecture Videos](https://ocw.mit.edu/courses/6-172-performance-engineering-of-software-systems-fall-2018/resources/lecture-videos/)：Day 16、24 选择 Lecture 14 “Caching and Cache-Efficient Algorithms”的相关片段。
- `PERF-V4`：[CppCon 2014: Data-Oriented Design and C++](https://www.youtube.com/watch?v=rX0ItVEVjHc)：进阶选看，不作为 Day 17 的入门必看内容。

### CMake

- `CMAKE-R1`：[CMake 官方教程](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)：Day 11、12、19、22 的主资料。当前不设置必看视频，以实际配置、构建和测试为学习证据。
- `CMAKE-R2`：[CMake Getting Started](https://cmake.org/getting-started/)：安装、基本工作流和官方入口。

### CUDA

- `CUDA-V1`：[CUDA 编程基础入门系列](https://www.bilibili.com/video/BV1sM4y1x7of/)：Day 26 使用 1.1、2.1、2.2、2.3、2.4，覆盖 CUDA 简介、从 C++ 到 CUDA、核函数、线程模型和全局索引。
- `CUDA-R1`：[NVIDIA: An Even Easier Introduction to CUDA](https://developer.nvidia.com/blog/even-easier-introduction-cuda/)：用于核函数、数据移动和基本运行流程的官方校正。
- `CUDA-R2`：[NVIDIA CUDA Refresher: CUDA Programming Model](https://developer.nvidia.com/blog/cuda-refresher-cuda-programming-model/)：用于 grid、block、thread 与线程索引的官方校正。

## 30 个学习日逐日映射

| Day | 当天知识点 | 推荐视频 | 必须搭配的证据或资料 |
| --- | --- | --- | --- |
| 1 | 生命周期、作用域、悬空对象 | `CPP-V1`：“指针与引用”“类与对象”相关分集，只作预热 | `CPP-R1`；画生命周期时间线并解释悬空原因 |
| 2 | RAII、拥有与非拥有 | `CPP-V1`：智能指针相关分集的前半部分 | `CPP-R2`；完成所有权分类表和 RAII 小实验 |
| 3 | `unique_ptr`、`shared_ptr`、`weak_ptr`；C++11/14 版本语境 | `CPP-V1`：“unique_ptr”“shared_ptr 和 weak_ptr” | `CPP-R1`、`CPP-R3`、`CPP-R4`；解释控制块、循环引用、默认选择及 `make_unique` 的版本归属 |
| 4 | `std::string_view` | 当前不设置必看视频 | `CPP-R1`、`CPP-R3`；编写安全与悬空反例 |
| 5 | `vector` 容量、重分配与失效 | `CPP-V1`：“容器”相关分集，只作概览 | `CPP-R3`；用地址与迭代器实验验证 `reserve`、扩容和失效 |
| 6 | 标量、向量、坐标与基本运算 | `LA-V2`：Vectors 相关章节 | 纸笔定义、计算和二维/三维解释 |
| 7 | 线性方程的几何图像 | `LA-V1`：Lecture 1 前半 | 手算并画图；记录行图像与列图像的区别 |
| 8 | 特殊成员函数与 Rule of Zero | `CPP-V2`：“拷贝和移动控制”；`CPP-V1`：“特殊成员函数” | `CPP-R1`；独立判断哪些成员会被生成或抑制 |
| 9 | 复制、移动与 moved-from 状态 | `CPP-V1`：“右值引用和移动语义”相关分集；`CPP-V2`：“拷贝和移动控制” | 实现小型资源类型并验证复制、移动路径 |
| 10 | `noexcept`、异常保证与容器重分配选择 | `CPP-V2`：“拷贝和移动控制”中相关部分 | `CPP-R1`、`CPP-R3`；实验比较有无 `noexcept` 的迁移行为 |
| 11 | CMake configure/build、project、target | 无新增视频 | `CMAKE-R1` Step 1；从命令行完成配置和构建 |
| 12 | `add_library`、链接与 include 路径 | 无新增视频 | `CMAKE-R1` Step 1 的 Exercises 2–3；拆分库和可执行目标 |
| 13 | 线性组合、张成与矩阵向量乘法 | `LA-V2`：Linear combinations、span、matrices 相关章节 | 手算并用小程序验证矩阵向量乘法 |
| 14 | Lecture 1 完整复盘 | `LA-V1`：Lecture 1 完整观看或补完 | `LA-R1` 对应讲义与习题；写结构化总结 |
| 15 | `vector`、`list`、`map` 的失效规则 | `CPP-V1`：“容器”“map 和 set”相关分集 | `CPP-R3`；制作容器操作与失效规则表并验证代表场景 |
| 16 | 连续存储、链式存储与缓存局部性 | `PERF-V3`：Lecture 14 相关片段 | 画访问路径；提出可由实验检验的性能假设 |
| 17 | AoS 与 SoA | `PERF-V1`；理解稳定后可选 `PERF-V4` | 自建合成数据；先验证结果一致，再比较布局性能 |
| 18 | 可信基准：Release、预热、重复、计时范围 | `PERF-V2` 相关片段 | 写基准检查清单；保留编译配置和重复测量结果 |
| 19 | CMake `PUBLIC`、`PRIVATE`、`INTERFACE` 与 CTest | 无新增视频 | `CMAKE-R1` Steps 4–5 与 Step 8；让依赖传播和测试实际运行 |
| 20 | 消元与矩阵表示 | `LA-V1`：Lecture 2 | 跟随推导完成纸笔消元，不只抄结论 |
| 21 | 消元练习与错题复盘 | `LA-V1`：Lecture 2 难点回看 | `LA-R1` 对应习题或问题求解视频；整理错因 |
| 22 | 小型多目标 CMake 工程 | 无新增视频 | `CMAKE-R1` Step 1 与 Step 8；独立搭建库、可执行程序和测试目标 |
| 23 | 模板基础与 C++14/17/20 演进导航 | `CPP-V1`：“函数模板”“类模板”；`CPP-V2`：“模板基础” | 自写基础模板和最小 Concepts 示例；区分泛型 Lambda、`if constexpr`/折叠表达式、Concepts 的标准版本 |
| 24 | `vector` 与 `list` 遍历性能实验 | `PERF-V3`：Lecture 14 按需回看 | 先验证等价结果，再按 `SCHEDULE.md` 要求做基准 |
| 25 | 测量噪声、统计摘要与结论边界 | `PERF-V2` 按需回看 | 报告多次结果、波动和可支持/不可支持的结论 |
| 26 | CUDA host/device、kernel、grid/block/thread | `CUDA-V1`：1.1、2.1—2.4 | `CUDA-R1`、`CUDA-R2`；画执行层次并解释一维索引 |
| 27 | 矩阵乘法与逆矩阵直觉 | `LA-V1`：Lecture 3 | 纸笔计算并解释乘法顺序与可逆条件 |
| 28 | Lecture 3 练习与 C++ 设计复盘 | `LA-V1`：Lecture 3 难点回看 | `LA-R1` 习题；复盘所有权、移动和失效规则 |
| 29 | 综合回忆、薄弱点补测与版本归属 | 无新增视频 | 闭卷解释、短代码与纸笔题；用 `CPP-R4` 检查已学特性属于 C++11、14、17 还是 20 |
| 30 | 30 日复盘与下一阶段输入 | 无新增视频 | 汇总作品、实验、错题和未满足门禁，不靠观看时长判定完成 |

## 尚未进入当前 30 日程的后续视频

- C++11/14/17/20 的长期完整覆盖不依赖单一视频合集；后续周期按 `CPP-R4` 的覆盖矩阵选定短视频、权威资料和独立实验。C++23 选择性桥接，C++26 在工作草案与实现支持可核对时启用。
- 模板特化、折叠表达式、SFINAE 和模板元编程：继续使用 `CPP-V2` 中“模板特化”“模板折叠”“SFINAE”“模板元编程”分集；在模板基础稳定前不提前作为当前必学内容。
- 并发与多线程：`CPP-V1` 中线程、锁、条件变量、原子操作、线程池等分集可作预习；正式阶段仍需补充标准语义、硬件成本和独立实验。
- CUDA 内存、同步、错误检查和性能：继续沿 `CUDA-V1` 后续分集并以 NVIDIA 官方资料校正；完成 Day 26 门禁前不提前安排优化主题。

## 确认状态

- [x] 用户已确认“视频优先、文档校正、实验取证”的组合；
- [x] `std::string_view` 和 CMake 可在缺少合适必看视频时使用权威教程与动手实验；
- [x] 后续视频服从 [CXX_STANDARDS.md](CXX_STANDARDS.md) 的版本覆盖矩阵。
