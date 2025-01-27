---
date: 2025-01-27 11:19:06
timeline: article
title: c++
categories: base
tags:
  - cpp
toc: true
abstract: "C++基础内容和C++杂记"
---

# [C++]()
  `cs架构`client-server模式
  我把快捷方式里的alt加数字改成了ctl加数字

  `stl`
  1. containers
  2. algorithms
  3. iterators

  `freopen("1.out","w",stdout); `

  通常，编写清晰、容易理解的代码比使用语言的晦涩特性来显示自己的能力更为有用。

  ---
  [降低cin,cout时耗]()
  ```
  cin.tie(0);
  ios::base::sync_with_stdio(false);
  ```
  算法使用的内存空间分为三种：
  1. **指令空间**:编译后，程序指令所使用的内存空间。
  2. **数据空间**:算法中的各项变量使用的空间，包括：声明的常量、变量、动态数组、动态对象等使用的内存空间。
  3. **栈帧空间**:程序调用函数是基于栈实现的，函数在调用期间，占用常量大小的栈帧空间，直至返回后释放。
  ---
  有些时候，使用晦涩特性不是用来展示自己能力的，而是用来提升程序运行效率和实现更多功能的。
  任何一门语言中都没有没用的特性，语言特性设计出来就一定有其需求。
  比如下面几行
  ```
  r=x&-x;
  a^=b^=a^=b;
  r=(x>>(a-1))&1;
  ```
  ---
  用来注释掉代码
  ```
  #if 0
  #endif
  ```

  ---

  `KPM算法`  串的模式匹配
  `最长相等前后缀`  字符串最长的相等长度前缀和后缀,不包含字符串本身。
  `balanced binary tree` 平衡二叉树，又称AVL树（两个人名）。
  &emsp;&emsp;是一种循**关键码**访问的二叉树，并且要求保持顺序性，即任一节点不小于其左后代，不大于其右后代
  `堆` 一颗完全二叉树，某个结点的值总是不小于或者不大于其父节点的值，不大于的称为大堆，反之称为小堆。
  [兼容]()
  直译有一个问题, 英语的"前后"在时间和空间上统一, 而汉语却是相反. 比如forward在空间上指前进, 在时间上指未来. 但是汉语中的"前"在空间上指前进, 在时间上却指过去.
  **向前兼容**前进兼容
  **向后兼容**后退兼容
  [vsode终端]() 输入chcp (change code page)后，显示936 对应 GB 2312，65001 对应 UTF-8，windows 中文系统默认是 936。
  [cwd]() change word to double word
  [malloc]() memory allocation  内存分配
  `<a id=""></a>`出bug了，烦
  这个不清楚是什么样的bug,重启一次又没了
  [CRUD]() Create Read Update Delete

  ---

  [PNG]()`Portable Network Graphics`  便携式网络图形，是一种采用无损压缩算法的位图格式，支持索引、灰度、RGB三种颜色方案以及Alpha通道等特性
  [API]()`Application Program Interface`应用程序界面
  转义用的是右斜`\`
  `shift+tab`反向缩进
  [代码风格]()
  行尾风格：
  ```
  test{

  }
  ```
  次行风格:
  ```
  test
  {

  }
  ```


  [MSC]() microsoft management console
  [CPL]() Presentation(Compel) "演示强制"
  [FAT]() File Allocation Table 文件分配表
  [FCFS]() first come first service
  [无穷]()
  正无穷 0x3f3f3f3f`1061109567`
  负无穷 0xc0c0c0c0`-1061109568` 或 -0x3f3f3f3f

  ---
  [DHCP]()`Dynamic Host Configuration Protocol`，动态主机配置协议：计算机用来获得配置信息的协议。

  ---
  `0x`16进制，`0b`二进制，`NaN`非数值，
  [PHP]()personal home page,之后解释为hypertext preprocessor
  [wine]() Windows Emulator,之后解释为Wine Is Not an Emulator
  [GNU]() 许可证`GPL`: General Public License; 编译器`GCC`: General C Compiler,加入其他语言后改为Compilor Collection; 则GNU可能是General Not Unix.
  [NTFS]() New Technology File System,以`簇`为最小读写单元
  <img width="1200" height="100" src="/picture/1675944543421.jpeg.png">

  `typeid().name()`输出所属类型的首字母

  ---
  [pure virtual function]() 纯虚函数，表示抽象类，在函数末由`=0`标记


  ---
# 杂记

  C++中NULL是未定义的，在#include <cstddef>后被定义为__null，__null我没找到进一步定义，查看资料说是被编译器实现，成为空指针类型，这么复杂地搞。那为什么C++不继承这个__null实现，而是实现了一个特殊的 字面值常量nullptr，与所有指针类型的 0 值等效呢。有趣。