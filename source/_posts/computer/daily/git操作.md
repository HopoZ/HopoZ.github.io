---
date: 2025-03-01 17:35:18
title: git操作
categories: daily
tags:
    - git
toc: true
timeline: article

---

# 原先有gitmodule，现在子git不想继续了，就去除gitmodule

```shell
git submodule deinit -f -- themes/tranquility
git rm -f themes/tranquility
```
包括万恶的缓存
```shell
git rm --cached themes/tranquility
```