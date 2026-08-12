# RESOURCES.md

```yaml
status: selected_user_confirmed
last_updated: 2026-08-12
knowledge_map: established
baseline_verification: completed
resource_selection: completed
learning_media_preference: video_first
study_environment_split: home_deep_study_workplace_cpp_microlearning
cpp_video_entry: bilibili_BV1YT2MYPE73_verified_targeted_use
cpp_template_video_supplement: bilibili_BV1ivFVe4Efv_verified_deferred_targeted_use
```

## 当前状态

Stage 1 已完成并获用户确认。以下组合依据真实基线选择，目标是用少量资源覆盖当前主线，而不是建立“收藏清单”。用户已于 2026-08-12 确认资源组合，当前已进入日程设计。

## 选择结果

### 1. 线性代数

- **主视频入口**：[Bilibili — MIT 线性代数 1080p 高清修复重制](https://www.bilibili.com/video/BV13Y4y1q7ZE/)；用户指定并确认符合视频优先习惯。页面为 Gilbert Strang 的 MIT 线性代数课程，共 35 讲，目录覆盖方程组、子空间、正交与最小二乘、特征值、正定矩阵、SVD 等主线。它可以作为日常观看入口，但属于第三方页面；课程结构、讲义、练习和许可信息以 MIT OCW 官方页面为准。
- **官方课程包**：[MIT OpenCourseWare 18.06SC Linear Algebra](https://ocw.mit.edu/courses/18-06sc-linear-algebra-fall-2011/)；英文，免费，适合独立学习，包含完整讲课视频、讲义、问题讲解、习题和答案。按零基础起点使用，但先补仓库内的标量、向量和记号导入，再进入课程的矩阵与方程组主线。
- **直觉辅助**：[3Blue1Brown — Essence of Linear Algebra](https://www.3blue1brown.com/topics/linear-algebra)；英文，免费。只用于建立向量、线性组合、线性变换、矩阵乘法、基和特征向量的视觉直觉，不能替代手算与习题。
- **学习闭环**：先观看对应主视频，再形成自己的概念笔记和独立解释，随后完成 18.06SC 对应 problem sets；关键概念再用自行编写的小规模 C++ 向量/矩阵计算交叉验证。只看完视频最多只能作为“1. 看过”的证据。
- **许可提醒**：MIT OCW 材料采用 CC BY-NC-SA 4.0；仓库只记录自己的笔记和解答，不复制整套课程内容。

### 2. 现代 C++ 生命周期与所有权

- **版本范围（用户已确认）**：C++11、C++14、C++17、C++20 为现代 C++ 必学版本；C++23 作为选择性桥梁；C++26 在工作草案、权威资料和工具链支持可核对且与主线相关时纳入。详细矩阵与门禁见 [CXX_STANDARDS.md](CXX_STANDARDS.md)。

- **公司学习主视频入口**：[Bilibili — 一起来学 C++](https://www.bilibili.com/video/BV1YT2MYPE73/)；中文，免费，共 69 个约 5–15 分钟的短视频，适合工作场所切片学习。当前定向使用第 13–14、17、27–40 讲中的相关内容，重点包括指针与引用、类与对象、容器、智能指针、Lambda、右值引用与移动语义、特殊成员函数、类型特征和算法库；不要求从第 1 讲完整重刷。
- **模板专题视频补充（延后启用）**：[Bilibili — 零基础 C++：模板基础用法](https://www.bilibili.com/video/BV1ivFVe4Efv/)；中文，免费。定向使用合集第 39–43 讲，依次覆盖函数/类模板基础、模板特例化、模板折叠、SFINAE 和模板元编程；后续如需要完美转发，再使用第 44–45 讲。每讲约 50–90 分钟，在公司应拆成 15–25 分钟片段，不从整套 50 讲重新学习。
- **模板专题前置与边界**：先掌握函数与类、重载、特殊成员函数、右值引用和基本类型特征，再进入第 39–43 讲。当前只要求能解释模板实例化、全特化/偏特化、基础 SFINAE 和简单编译期计算；复杂 TMP 技巧、表达式模板和深度库实现暂不作为起步任务。
- **结构化规则补充**：[LearnCpp](https://www.learncpp.com/) 的定向章节；英文，免费。补齐视频目录没有明确系统覆盖的对象生命周期、`std::string_view`、Rule of Zero、容器迭代器/指针/引用失效，以及 `noexcept` 对移动和容器行为的影响。
- **原则参考**：[C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)；英文，免费。重点使用资源管理、RAII、所有权和接口部分，不作为线性课程顺序阅读。
- **语言参考**：[cppreference C++ language](https://en.cppreference.com/w/cpp/language/)；英文，免费。用于核对生命周期、特殊成员函数、move、`noexcept` 和容器规则，不作为入门教材。
- **C++26 查证入口**：[WG21 2026 年论文与工作草案](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2026/)、[cppreference C++26](https://en.cppreference.com/w/cpp/26) 与 [MSVC 一致性表](https://learn.microsoft.com/en-us/cpp/overview/visual-cpp-language-conformance)。C++26 当前按工作草案和实现支持管理，不写成已经稳定发布，也不要求学习全部提案。
- **学习闭环**：观看一个短视频后，用自己的话回答对应规则问题，再完成一个可独立运行的小例题；合成类型记录构造、复制、移动和析构，并独立判断悬空、所有权、view 与容器失效场景。只看完视频最多只能作为“1. 看过”的证据。

### 3. 计算机系统、缓存与数据布局

- **主资料**：*Computer Systems: A Programmer's Perspective, 3rd Edition*（CS:APP）；英文，付费。优先使用第 5 章程序性能优化、第 6 章内存层次；并发相关内容待前置知识建立后再进入第 12 章。官方介绍与配套入口：[CS:APP3e](https://csapp.cs.cmu.edu/3e/perspective.html)。
- **练习范围**：自行编写 `vector`/链式结构、顺序/随机访问、AoS/SoA 和线程局部累积实验；不直接照搬需要特定 Linux 环境的完整实验。
- **启用边界**：先理解缓存行、局部性和测量方法，再研究伪共享、对齐和更深微架构细节。

### 4. CMake 与测试入口

- **主资料**：[CMake 官方教程](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)；英文，免费。先完成 Step 0、Step 1，再按需要进入测试与 CTest 相关步骤。
- **达标任务**：从空目录独立建立一个库、一个使用该库的可执行程序和一个测试目标；说明 target、include、依赖传播、编译特性及 Debug/Release。
- **使用规则**：以 target 为中心，不从全局 flags 和复制模板起步。

### 5. 基准测试

- **起步方法**：先用小型独立程序学习正确性检查、Release 配置、计时边界、预热、重复和结果可观察性。
- **工具参考**：[Google Benchmark User Guide](https://google.github.io/benchmark/user_guide.html)；英文，免费。待 CMake 基础任务能够独立完成后启用，重点关注 warm-up、repetitions、统计和防止错误优化。
- **使用边界**：框架不能替代实验设计；任何性能结论都必须先有正确性证据并记录环境限制。

### 6. 并发

- **主资料（稍后启用）**：Anthony Williams, *C++ Concurrency in Action, Second Edition*；英文或合法中文版，付费。先覆盖线程管理、共享数据保护和同步，再进入 C++ 内存模型；官方入口：[Manning](https://www.manning.com/books/c-plus-plus-concurrency-in-action-second-edition)。
- **启用条件**：完成生命周期/所有权基础和缓存行入门后再系统展开，避免只记 API 而不能解释正确性与硬件成本。

### 7. CUDA

- **零基础导入**：[NVIDIA — An Even Easier Introduction to CUDA](https://developer.nvidia.com/blog/even-easier-introduction-cuda)；英文，免费，用于第一次建立 host/device、kernel、线程索引和最小数组示例。
- **主资料**：[NVIDIA CUDA Programming Guide](https://docs.nvidia.com/cuda/cuda-programming-guide/contents.html)；英文，免费。起步只读 Introduction、Intro to CUDA C++、Programming Model 中的 kernel/thread/memory/heterogeneous programming，以及必要的编译与错误检查部分。
- **练习参考**：[NVIDIA CUDA Samples](https://developer.nvidia.com/cuda-code-samples)；英文，免费。只挑基础示例理解接口，不复制大段示例作为自己的实现证据。
- **后续参考**：[CUDA C++ Best Practices Guide](https://docs.nvidia.com/cuda/cuda-c-best-practices-guide/index.html)；等最小 kernel、CPU 对照、同步和错误检查稳定后再启用，不在第一阶段提前优化。

## 当前实际启用顺序

资源选择不等于同时开学。日程设计前只固定以下依赖顺序：

1. 线性代数基础导入 → Bilibili 主视频入口观看 Gilbert Strang 课程 → MIT 18.06SC 官方讲义与习题闭环；
2. C++ 使用 Bilibili 短视频定向导入 → LearnCpp/Core Guidelines/cppreference 补齐与核对规则 → 独立小例题验证；基础规则稳定后再启用模板专题第 39–43 讲，并与 CMake 官方教程交叉推进；
3. 缓存与可信测量基础 → 独立数据布局实验；
4. 满足最小 C++、CMake 和内存前置后进入 CUDA 零基础导入；
5. 并发系统学习和 Google Benchmark 在对应前置满足后启用。

具体到每天或每周的安排属于下一阶段 `schedule_design`，当前不展开。

## 学习环境分配

- **家中深度学习**：线性代数，以及其他需要安静环境、较长连续时间、推导和系统笔记的内容；优先完成视频、笔记、独立解释和习题闭环。
- **工作场所短单元学习**：现代 C++ 优先使用《一起来学 C++》的定向短视频，配合短篇权威资料阅读和独立小例题；任务应能在较短时间内独立完成或安全中断。
- **公开安全边界**：工作场所学习仍只使用公开资料、自行编写的独立代码和合成数据，不读取、引用或记录公司代码、内部资料、业务数据与可识别项目上下文。

## 付费与暂缓决策

- 当前可先使用全部免费资料开始；不要求立即购买任何课程。
- 优先考虑购买 CS:APP 3e；它直接覆盖当前系统、缓存、性能和并发前置缺口。
- *C++ Concurrency in Action, Second Edition* 在并发主线正式启用前再购买。
- *A Tour of C++* 等现代 C++ 总览书暂不列为必买；当前定向缺口用 LearnCpp、Core Guidelines 和 cppreference 更直接。
- 不选择点云、图形学、编译器实现、交易系统或未确认工作任务的专用资料。

## 持续使用原则

- 英文权威资料作为长期主资料。
- 中文资料只作为前期辅助，用于降低初始理解成本。
- 学习入口优先选择结构化视频，但任何视频都必须配套笔记、习题或独立实现，不能以播放进度替代掌握证据。
- 资源和任务需要同时适配学习环境：深度数学内容放在家中，适合切片的 C++ 内容放在工作场所。
- 按知识依赖和证据缺口选择资料，不按热门课程清单拼接路线。
- 区分主资料、辅助资料、练习资料和参考手册。
- 资料应支持“看过、能够解释、能够独立实现、能够分析正确性与性能”四级进阶。
- 资源需要适配工作日每天约 1 小时、周末两天合计至少 6 小时的可持续节奏。
- 资源应服务于线性代数优先，以及数学、C++ 实验、性能分析和 CUDA 的交叉推进。
- 只使用合法公开的资料、数据和代码；公开数据与代码必须记录来源和许可。

## 当前明确不做

- 不把资源组合直接扩展成 30 天计划。
- 不要求按封面到封底同时读完所有资料。
- 不因可能的工作任务锁定专用资料。
- 不加入超出仓库严格边界的主题或材料。
