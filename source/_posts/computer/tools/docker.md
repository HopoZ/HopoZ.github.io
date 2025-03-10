---
date: 2025-02-16 20:24:18
timeline: article
title: docker
categories: tools
tags:
  - docker
toc: true
---
安装运行没什么复杂的，随便找个教程安装就行，但是你会因为墙出现各种恶心的网络错误，所以你需要配置镜像源，这个网上教程也有。

```
echo >/etc/docker/daemon.json

cat>/etc/docker/daemon.json <<END

{

  "registry-mirrors": [

    "https://hub-mirror.c.163.com",

    "https://ustc-edu-cn.mirror.aliyuncs.com",

    "https://ghcr.io",

    "https://mirror.baidubce.com",
    "https://docker.m.daocloud.io"

  ]

}

END

systemctl restart docker
```

# 修改网络配置：

如果你想修改 nginx-proxy-manager 的网络网段，可以删除并重新创建网络：

```
docker network rm <image-name>
docker network create --subnet=<new_ip>/24 my-custom-network
```

# 整整一天一天vmware没网络

还以为是docker或者nginx代理的问题，各种改，后来才发现和是vmware更新的问题，删除下面
![](/picture/Snipaste_2025-02-16_20-22-24.png)
重新安装即可解决问题

# 杂记

虚拟机虚拟化硬件，docker虚拟化操作系统
docker官方镜像站[](https://hub.docker.com/)


# 意识流名词
Etcd
Fedora CoreOS