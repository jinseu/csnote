## cgroup

### 1. 简介

1. cgroup 即 Control Groups，是linux 内核的一个特性，可以通过cgroup来控制资源在不同任务（进程）间的分配。
2. cgroup 是一个分层结构，类似于一个树，可以通过`/sys/fs/cgroup`这个特殊文件系统来操作cgroup
3. cgroup 会被划分为类似`/sys/fs/cgroup/<restype>/<userclass>`结构，restype是资源类型，userclass


### 2. 实现原理


### 3. Q&A

CGroup与rlimit的区别

1. rlimit 只能针对单个进程，以及子进程，由进程主动设置
2. CGroup 和 进程之间是一对多的关系，可以将多个进程分配到一个CGroup中，共享这个CGroup的资源
3. rlimit 只能对单个进程进行限制，由进程本身调用`setrlimit`进行设置，`getrlimit`进行读取，`prlimit` 更改其他进程的rlimit。同时可以通过`/proc/${PID}/limits`文件获取指定进程的rlimit结果
4. 进程fork子进程后，子进程会继承父进程的rlimit。