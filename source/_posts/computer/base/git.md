---
title: git
categories: base
tags:
  - git
---

# info

[缺失的git课程](https://missing.csail.mit.edu/2020/version-control/)



# [vscode git]()
 `git init`  初始化一个仓库

`完整错误`：

 1 `fatal: unable to access 'https://xxxxxx': OpenSSL SSL_read: Connection was aborted, errno 10053`

>Git默认限制推送的大小，运行命令更改限制大小即可 增加缓冲

 git config --global http.postBuffer 524288000

>更改网络认证设置

 git config --global http.sslVerify "false"

>更改代理

`git config --global --unset http.proxy`  取消梯子代理
直连彻底挂了用梯子：
```
git config --global http.proxy 127.0.0.1:7890
git config --global https.proxy 127.0.0.1:7890
```

配置账户
`git config --list`检查已有的配置信息
`git config --global user.name "name"`
`git config --global user.email "email"`
`ipconfig /renew` 可以解决一部分网络连接问题
`Stage`： 暂存区，将代码暂存到本地仓库但不上传。
`Stash`:本地缓存，在切换分支但不提交当前分支时使用

git不知道出什么问题了，github端一直回退版本，莫名其妙，都很邪乎。
乐，是我梯子的问题，真的依托答辩。

# [gitignore]()

忽略所有以 .a 结尾的文件
`*.a`

不能忽略所有 lib.a 文件
`!lib.a`

仅仅忽略当前目录下的 TODO 文件
`/TODO`

忽略 build 目录下的所有文件
`build/`

仅仅忽略 doc 一个目录下的所有 .txt 文件
`doc/*.txt`

忽略 doc 目录下（包括子目录）的所有 .pdf 文件
`doc/**/*.pdf`

`git rm --cached test.txt`忽略已上传的文件
`git rm -r --cached folder/`忽略已上传的文件夹
`git add -f test.txt` 重新添加被忽略的文件
`git push -f origin master`强制上传覆盖远程文件，这个命令在团队开发的时候最好不要用,否则可能会有生命危险

`git config --global core.quotepath false`解决中文名文件无法正常显示问题

# [IDEA git]()

解决网络错误：
`git config --global http.sslBackend openssl`
`git config --global http.sslVerify false`

git alias
git log --graph --oneline --decorate
git reset --hard origin/master 强制覆盖本地文件
rm -rf .git

`git pull` = `git fetch` + `git merge`
 `Recv failure: Connection was reset`错误

1. 检查防火墙设置：有时防火墙可能会阻止 Git 连接到远程仓库。确保你的防火墙设置允许 Git 通过。你可以尝试暂时禁用防火墙，然后再次尝试 Git 操作，以查看是否仍然出现错误。

2. 检查代理设置：如果你在使用代理服务器来连接互联网，确保你的代理设置是正确的。你可能需要配置 Git 来使用代理服务器。