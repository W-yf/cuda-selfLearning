# HANDOFF.md

## 最新交接快照

- `last_updated: 2026-08-10`
- `based_on_commit: 1b176c66ce187b1b95b0fa1f14579210faaef360`
- `current_day: 0`
- `current_stage: knowledge_map_and_baseline`
- `current_stage_status: in_progress`
- `next_task: stage_1_baseline_review_and_user_confirmation`
- `next_stage: resource_selection`
- 资源状态：`pending_stage_1_confirmation`。
- 远程状态：本轮没有访问 GitHub 或执行任何远程 Git 操作。
- 当前文件状态：Stage 1 修改尚未暂存、commit 或 push。

## 本轮已经完成

- 核对本地分支 `main` 和基线 HEAD `1b176c6`，确认初始化收尾已进入提交，不再保留“仍有未提交收尾修改”的过时描述。
- 启动 Stage 1 `knowledge_map_and_baseline`，但保持 `current_day: 0`。
- 创建 [notes/knowledge-map.md](notes/knowledge-map.md)：记录主题依赖、四类优先级、目标层级和证据门槛。
- 创建 [notes/capability-baseline.md](notes/capability-baseline.md)：记录保守基线、能力断点和 B1–B7 验证队列。
- 将资源状态改为 `pending_baseline_verification`，没有选择完整教材或课程组合。
- 同步更新 README、AI_CONTEXT、STATUS、ROADMAP、RESOURCES、notes 入口和今日日志。
- 完成内容一致性复核、`git diff --check`、Markdown 围栏、内部链接、尾随空白、文件大小和公开安全检查；除已单列的换行提示外未发现问题。
- 完成 B1 起点诊断：用户明确确认线性代数几乎全部忘记，需要完整重新学习；当前不分配验证层级，后续从标量、向量、记号和坐标表示开始。
- 完成 B2 核心验证：生命周期、所有权和容器失效当前为 1. 看过，`std::string_view` 暂不分配层级；后续从对象生命周期、悬空、RAII、所有权分类和失效条件开始。
- 完成 B3 起点诊断：Rule of Zero、复制/移动和 `noexcept` 整体为 1. 看过；只有标准库资源管理成员时通常不手写特殊成员函数的判断方向正确，但机制尚不能解释。
- 完成 B4 核心验证：连续/链式存储与基准测试当前为 1. 看过，AoS/SoA 暂不分配层级；后续从缓存局部性、数据布局和可信测量基础开始。
- 完成 B5 起点诊断：能够识别普通共享计数的并发修改不安全，但尚未完整解释数据竞争条件、读改写与丢失更新；锁粒度只停留在影响速度，伪共享不了解，线程局部累积的原因被误认为减少 I/O。
- B5 当前结论为并发语义与共享更新线索 1. 看过，伪共享暂不分配层级；后续从数据竞争、互斥、原子、缓存行与缓存一致性基础开始。
- 完成 B6 核心验证：亲手写过几次 `CMakeLists.txt`，能认出 `add_executable` 和链接库用途，但不能解释库目标、include、依赖传播及可见性，也不能从空目录独立建立库、程序和测试目标。
- B6 当前结论为 CMake 1. 看过，后续从 configure/build、target 模型、目标依赖、使用要求、构建配置和 CTest 开始。
- 完成 B7 起点诊断：用户明确确认 CUDA 完全没有学习过，当前不分配掌握层级；后续从 host/device、grid/block/thread、kernel 与索引、内存路径、同步和错误检查开始。
- B1–B7 的验证或起点诊断已全部完成，能力层级和后续起点已回填；Stage 1 当前只等待用户审阅确认。

## 尚未完成

- 用户尚未确认 Stage 1 结果。
- 尚未开始 `resource_selection`。
- 尚未制定 30 天计划，尚未开始 Day 1。

## 工作区说明

- 本轮新增和修改均保持未暂存状态，未经用户明确确认不得执行 `git add`、`git commit` 或 `git push`。
- `logs/2026-08-08.md` 曾被 Git 标记为修改，但文本 diff 为空，只出现 LF/CRLF 规范化提示；本轮没有有意编辑其语义内容，应在提交前单独复核并由用户决定是否纳入。
- 本地未提交状态不是跨环境唯一真值；切换电脑前仍需按规则完成审阅、提交、推送和远程核对。

## 当前强制约束

- 基线验证仍属于 Stage 1，不计为 Day 1。
- Stage 1 门禁完成前，不选择完整资源组合、不制定 30 天计划。
- 当前项目不涉及点云，不建立相关节点、练习或资料清单。
- 不假设尚未正式分配的具体重构已经成为任务。
- 编译器实现和图形学暂时后置；交易系统不是当前主线。
- 不得接触或写入任何公司源码、客户数据、内部资料、模型、截图、名称、内部路径、账号、凭据或未公开实现细节。

## 下一位协作者应执行

1. 按 `AGENTS.md` 的顺序重新读取状态文件和最新日志。
2. 先检查 `git status --short`，区分 Stage 1 修改与旧日志的换行状态项。
3. 向用户汇总 B1–B7 的基线结论，请用户审阅知识图谱、优先级和学习起点。
4. 只有用户明确确认后，才将 Stage 1 标记为完成并进入资源选择；不要直接制定 30 天计划或开始 Day 1。
5. 未经用户明确确认，不执行暂存、提交或推送。

本文件只保留最新交接快照；历史过程记录在 `logs/`。
