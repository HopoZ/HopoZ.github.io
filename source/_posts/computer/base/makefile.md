---
title: makefile
categories: base
tags:
  - cpp
  - makefile
toc: true
---

makefile指定整个工程的编译规则

# makefile
Makefile里主要包含了五个东西：显式规则、隐式规则、变量定义、指令和注释。

## etc
写好clean

文件名最好写成 Makefile, 比 makefile 或 GNUmakefile 好

## make的工作方式

GNU的make工作时的执行步骤如下：（想来其它的make也是类似）

    读入所有的 Makefile。

    读入被 include 的其它 Makefile。

    初始化文件中的变量。

    推导隐式规则，并分析所有规则。

    为所有的目标文件创建依赖关系链。

    根据依赖关系，决定哪些目标要重新生成。

    执行生成命令。

## 书写规则
```makefile
targets : prerequisites ; command
    command
...
```
目标文件名：依赖文件；命令（;或tab间隔）

---
```makefile
VPATH = src:../headers
```
指示环境路径

另一个设置文件搜索路径的方法是使用make的“vpath”关键字（注意，它是全小写的），这不是变量，这是一个make的关键字，这和上面提到的那个VPATH变量很类似，但是它更为灵活。它可以指定不同的文件在不同的搜索目录中。这是一个很灵活的功能。它的使用方法有三种：

`vpath <pattern> <directories>`
    为符合模式<pattern>的文件指定搜索目录<directories>。

`vpath <pattern>`
    清除符合模式<pattern>的文件的搜索目录。

`vpath`
    清除所有已被设置好了的文件搜索目录。

---
`.PHONY : clean`
显式指明clean为伪目标

## 书写命令
在Makefile的命令行前加一个减号 - （在Tab键之后），标记为不管命令出不出错都认为是成功的。如：
```
clean:
    -rm -f *.o
```

---
定义函数
```
define
endef
```

变量如同宏一样，`=`定义,`$()`引用

---
```
FOO ?= bar
```
其含义是，如果FOO没有被定义过，那么变量FOO的值就是“bar”，如果FOO先前被定义过，那么这条语将什么也不做，其等价于：
```
ifeq ($(origin FOO), undefined)
    FOO = bar
endif
```

---
`$(var:a=b)` 或是 `${var:a=b}` ，其意思是，把变量“var”中所有以“a”字串“结尾”的“a”替换成“b”字串。

---
`+=` 操作符给变量追加值

---
模式变量
以如下方式给所有以 .o 结尾的目标定义目标变量：

%.o : CFLAGS = -O

## 函数

字符串处理函数

## make的运行

-f 指定运行文件
-d -debug=a

---
即然make可以指定所有makefile中的目标，那么也包括“伪目标”，于是我们可以根据这种性质来让我们的makefile根据指定的不同的目标来完成不同的事。在Unix世界中，软件发布时，特别是GNU这种开源软件的发布时，其makefile都包含了编译、安装、打包等功能。我们可以参照这种规则来书写我们的makefile中的目标。

    all:这个伪目标是所有目标的目标，其功能一般是编译所有的目标。

    clean:这个伪目标功能是删除所有被make创建的文件。

    install:这个伪目标功能是安装已编译好的程序，其实就是把目标执行文件拷贝到指定的目标中去。

    print:这个伪目标的功能是例出改变过的源文件。

    tar:这个伪目标功能是把源程序打包备份。也就是一个tar文件。

    dist:这个伪目标功能是创建一个压缩文件，一般是把tar文件压成Z文件。或是gz文件。

    TAGS:这个伪目标功能是更新所有的目标，以备完整地重编译使用。

    check和test:这两个伪目标一般用来测试makefile的流程。

## 隐含规则
默认规则，不再赘述
