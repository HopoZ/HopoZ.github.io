---
date: 2024-01-20 23:18:26
timeline: article
title: git
categories: base
tags:
  - git
toc: true
---

# info

[缺失的git课程](https://missing.csail.mit.edu/2020/version-control/)



# [vscode git]()
vscode的git图形化做的十分不错，可以试试

# 常见指令
>Git默认限制推送的大小，运行命令更改限制大小即可 增加缓冲

` git config --global http.postBuffer 524288000`

>更改网络认证设置

 `git config --global http.sslVerify "false"`

>更改代理

`git config --global --unset http.proxy`  取消梯子代理

直连彻底挂了用梯子：
```
git config --global http.proxy 127.0.0.1:{port}
git config --global https.proxy 127.0.0.1:{port}
```

## 配置账户
`git config --list`检查已有的配置信息
`git config --global user.name "name"`
`git config --global user.email "email"`
`ipconfig /renew` 可以解决一部分网络连接问题
`Stage`： 暂存区，将代码暂存到本地仓库但不上传。
`Stash`:本地缓存，在切换分支但不提交当前分支时使用

# [gitignore]()
规则很简单，随便查一下就能看明白，类似于正则匹配

# [IDEA git]()

## 解决网络错误：
`git config --global http.sslBackend openssl`
`git config --global http.sslVerify false`



##  `Recv failure: Connection was reset`错误

1. 检查防火墙设置：有时防火墙可能会阻止 Git 连接到远程仓库。确保你的防火墙设置允许 Git 通过。你可以尝试暂时禁用防火墙，然后再次尝试 Git 操作，以查看是否仍然出现错误。

2. 检查代理设置：如果你在使用代理服务器来连接互联网，确保你的代理设置是正确的。你可能需要配置 Git 来使用代理服务器。

# 杂记

`git pull` = `git fetch` + `git merge`