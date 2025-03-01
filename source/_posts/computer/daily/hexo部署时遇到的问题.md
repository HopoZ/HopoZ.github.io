---
date: 2025-01-20 23:18:26
timeline: article
title: hexo部署时遇到的问题
categories: daily
tags:
  - hexo
toc: true
---

hexo generate报错，百思不得其解

![image-20250120002640355](/picture/image-20250120002640355.png)

排查了一个小时，以为是格式错误什么的，结果是这个

![image-20250120002849817](/picture/image-20250120002849817.png)



解决后又遇到了build错误

![image-20250120002947031](/picture/image-20250120002947031.png)

结果是多个git仓库包含的问题，加上了.gitmodules文件再写入以下内容就好了

```
[submodule "themes/tranquility"]
    path = themes/tranquility
    url = https://github.com/hooozen/hexo-theme-tranquility

```



