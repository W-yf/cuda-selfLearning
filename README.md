# cuda-selfLearning

`cuda-selfLearning` 是“CUDA / C++ 高性能系统开发学习主线”的长期状态仓库，用于跨环境保存学习背景、当前状态、阶段路线、交接快照、学习笔记和独立练习。

本仓库不是公司项目的镜像，也不承载任何工作代码或内部资料。所有内容均应适合公开发布。

## 当前阶段

- 日期：2026-08-12
- `current_day: 2`
- `current_stage: rolling_learning_iteration`
- `current_stage_status: in_progress`
- `next_task: start_day_2_raii_and_ownership_classification`
- 公开 GitHub 仓库已创建，本地仓库已成功克隆。
- 初始 commit `bf6a428` 已成功 push；Stage 0 状态收尾已进入本地提交 `1b176c6`。
- Stage 0 仓库初始化门禁已经完成。
- Stage 1 知识图谱与能力基线已由用户确认完成，结果保存在提交 `792be54`。
- Stage 2 资源组合已由用户确认完成。
- Stage 3 日程、视频索引和现代 C++ 标准范围已由用户确认并完成。
- Day 1 已完成：对象生命周期、作用域与悬空对象达到“2. 能够解释”。
- 当前进入 Day 2：RAII 与所有权分类，尚未开始学习内容。

## 状态入口

每次开始规划或继续学习前，按以下入口读取仓库状态：

1. [AI_CONTEXT.md](AI_CONTEXT.md)：长期背景、能力起点、时间约束和严格边界。
2. [STATUS.md](STATUS.md)：当前唯一的结构化状态摘要；规划前必须检查 `last_updated`、`current_day`、`current_stage`。
3. [HANDOFF.md](HANDOFF.md)：家庭 Codex 与公司云端 ChatGPT 之间的最新交接快照，只保留最新一份。
4. [ROADMAP.md](ROADMAP.md)：当前阶段门禁和门禁完成后的阶段顺序。
5. [RESOURCES.md](RESOURCES.md)：当前资料组合、使用顺序、付费边界和暂缓项。
6. [logs/](logs/)：按日期记录已经发生的学习和仓库变更。
7. [notes/](notes/) 与 [exercises/](exercises/)：分别保存学习笔记和独立代码实验。
8. [notes/knowledge-map.md](notes/knowledge-map.md) 与 [notes/capability-baseline.md](notes/capability-baseline.md)：当前知识依赖和能力基线。
9. [SCHEDULE.md](SCHEDULE.md)：经资源确认后形成的滚动学习日程草案与完成证据。
10. [VIDEO_INDEX.md](VIDEO_INDEX.md)：为当前 30 个学习日逐日映射视频、权威资料和学习证据。
11. [CXX_STANDARDS.md](CXX_STANDARDS.md)：定义 C++11、14、17、20 的必学范围及 C++23/26 的采用边界和长期门禁。

协作代理和自动化工具还必须遵守 [AGENTS.md](AGENTS.md)。

## 长期方向

- 线性代数优先；
- 现代 C++、C++ 高性能系统开发；C++11、14、17、20 必学，C++23 选择性桥接，C++26 按可靠资料和工具链支持纳入；
- 内存层次、数据布局、计算机组成、操作系统；
- 并发、性能分析、基准测试；
- CMake 和工程能力；
- CUDA；
- CAM 性能优化相关基础；
- 数学、C++ 实验、性能分析和 CUDA 交叉推进。

## 公开安全边界

不得要求、读取、保存或提交任何公司源码、客户数据、内部文档、模型、截图、名称、内部路径、账号、凭据或未公开实现细节。

所有练习只能使用：

- 自行编写的独立代码；
- 合成数据；
- 许可和来源明确的公开数据。

`.gitignore` 只是降低误提交风险的辅助措施，不是安全边界。提交前仍需逐项检查暂存内容和疑似敏感信息。

## 当前不做

- 当前项目不涉及点云，不加入点云学习内容。
- 碰撞检测重构尚未正式分配，不假设它已经是确定任务。
- 编译器和图形学暂时后置。
- 交易系统只是未来可能方向，不是当前主线。
