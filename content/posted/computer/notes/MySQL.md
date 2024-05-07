+++
title = '{{ replace .File.ContentBaseName "-" " " | title }}'
date = 2024-03-26T14:55:58+08:00
draft = false
+++

`Sql` `函数` `约束` `多表查询` `事务` `储存引擎` `索引` `Sql优化` `储存过程` `锁` `InnoDB核心` `MySql管理` `日志` `主从复制` `分库分表` `读写分离`
# [基础知识]()
[数据库]()`Database`  
[数据库管理系统]()`DataBaseManagementSystem`  
[SQL]()`Structured Query Language`

`net start mysql80`  
`net stop mysql80`  
运行命令行，控制MySql服务器

`mysql -u root -p`启动MySql

[关系型数据库]()`RDBMS`建立在关系模型基础上，由多张相互连接的二维表组成的数据库  

[单行注释]() `--`或`#`  

$$ SQL\left\{
\begin{array}{lcl}
DDL:definition定义数据库对象(数据库，表，字段)\\
DML:manipulation对数据进行增删改\\
DQL:query查询表的记录\\
DCL:control创造数据库用户，控制访问权限\\
\end{array} \right.$$


`VO类（Value Object）`：  
用于封装数据，通常是不可变的对象，用于在不同层之间传递数据。VO类只包含属性的定义和访问方法，不包含业务逻辑。  
`DAO类（Data Access Object）`：  
负责与数据库进行交互，提供对数据库的增删改查等操作。DAO类封装了数据访问的细节，对上层提供简单的接口来操作数据库。  
`Service类`：  
处理业务逻辑的核心层，负责协调不同的DAO类和其他Service类来完成具体的业务功能。Service类封装了复杂的业务逻辑，对上层提供高层次的接口。  
`Factory类`：  
负责创建和管理其他类的实例，可以用于解耦和灵活地管理对象的创建和生命周期。Factory类可以通过依赖注入等方式将所需的实例传递给其他类。  

# `mycli` 挺方便的一个mysql命令行工具,有着自动提示等功能
```
$ mycli local_database
$ mycli -h localhost -u root app_db
$ mycli mysql://amjith@localhost:3306/django_poll
```