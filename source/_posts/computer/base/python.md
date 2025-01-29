---
date: 2025-01-29 20:50:11
title: Python杂记
categories: base
tags:
  - python
toc: true
timeline: article
---
# info
简便易上手，有其他语言的基础的话，学起来会很快

# python杂记
  单引号和双引号一样
  `sys.getsizeof()`相当于C++的sizeof()
  `yield` 相当于return(默认为iter类型)


  `**kw` 表示接受任意数量的关键字参数（关键字参数是指以键值对形式传入的参数）。

  python中的区间大部分是左闭右开，念作不到z

  python的整数占内存这么多啊，一个PyObject_VAR_HEAD就24B，常规28B

  /是除，//是整除


## CONDA
  ### `miniconda`
  相对于anaconda，更倾向于使用miniconda,小点好


## 用于人工智能的python版本都不能太高，因为有包依赖的