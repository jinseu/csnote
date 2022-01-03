## Maven

## Maven 是什么

根据官网介绍，maven本质上是一个项目管理的工具，目前最常见的实践中适用于管理Java项目的构建。

```
Apache Maven is a software project management and comprehension tool. Based on the concept of a project object model (POM), Maven can manage a project's build, reporting and documentation from a central piece of information.
```

### Maven 怎么用

#### Build Lifecycle

为了将构建部署流程中每一步清晰定义出来，在maven中有一个核心概念`Build Lifecycle`

在maven中有3个默认的`Build Lifecycle`，分别是 

- default lifecycle handles your project deployment, 
- clean lifecycle handles project cleaning
- site lifecycle handles the creation of your project's web site.


构建流程中，又包含很多的阶段，例如 deault 构建周期包含以下阶段

- validate - validate the project is correct and all necessary information is available
- compile - compile the source code of the project
- test - test the compiled source code using a suitable unit testing framework. These tests should not require the code be packaged or deployed
- package - take the compiled code and package it in its distributable format, such as a JAR.
- verify - run any checks on results of integration tests to ensure quality criteria are met
- install - install the package into the local repository, for use as a dependency in other projects locally
- deploy - done in the build environment, copies the final package to the remote repository for sharing with other developers and projects.


#### 命令行

maven 的命令行格式如下所示，可以指定选项，构建的Lifecycle和其中的阶段

```
mvn [options] [<goal(s)>] [<phase(s)>]
```

需要注意的是

- 对于默认的`Build Lifecycle`，可以通过直接指定构建周期的形式来驱动maven执行，例如`mvn package`
- 如果运行 `mvn package`，maven会构建周期的第一阶段开始执行，直到完成package阶段为止，不会单独执行packag阶段。


### POM 文件结构

https://maven.apache.org/pom.html

dependency scope

### 插件

https://maven.apache.org/plugins/index.html


http://maven.apache.org/plugins/maven-shade-plugin/usage.html