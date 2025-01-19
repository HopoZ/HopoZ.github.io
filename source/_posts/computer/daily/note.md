---
title: hexo部署时遇到的问题
categories: daily
tags:
  - hexo
---

hexo generate报错，百思不得其解

![image-20250120002640355](../../images/image-20250120002640355.png)

排查了一个小时，以为是格式错误什么的，结果是这个

![image-20250120002849817](..\..\images\image-20250120002849817.png)



解决后又遇到了build错误

![image-20250120002947031](..\..\images\image-20250120002947031.png)

结果是多个git仓库包含的问题，加上了.gitmodules文件就好了

```
[submodule "themes/tranquility"]
    path = themes/tranquility
    url = https://github.com/hooozen/hexo-theme-tranquility

```



