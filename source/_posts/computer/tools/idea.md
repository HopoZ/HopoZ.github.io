---
date: 2025-02-06 17:33:27
timeline: article
title: idea
categories: tools
tags:
  - idea
toc: true
---


```
Plugin org.apache.maven.plugins:maven-jar-plugin:1.8.1 or one of its dependencies could not be resolved: Failure to find org.apache.maven.plugins:maven-jar-plugin:jar:1.8.1 in https://maven.aliyun.com/repository/public was cached in the local repository, resolution will not be reattempted until the update interval of aliyunmaven has elapsed or updates are forced -> [Help 1]
[ERROR]
```

因为default settings，setting只是对当前项目进行设置。
点击Runner 在VIM Options位置添加如下(原理是：忽略了ssl证书的验证)
```
-Dmaven.wagon.http.ssl.insecure=true -Dmaven.wagon.http.ssl.allowall=true -Dmaven.wagon.http.ssl.ignore.validity.dates=true
```