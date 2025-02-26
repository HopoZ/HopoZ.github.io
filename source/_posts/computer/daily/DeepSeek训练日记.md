---
date: 2025-02-26 11:13:18
timeline: article
title: DeepSeek训练日记
categories: daily
tags:
  - DeepSeek
  - 大模型
toc: true
---

[ollama部署和运行模型](https://github.com/ollama/ollama)
[open-webui可视化和训练模型](https://github.com/open-webui/open-webui)

# 端口
```
open-webui serve --port=8090
```
来规避被占用的端口


# Offline Mode

If you are running Open WebUI in an offline environment, you can set the HF_HUB_OFFLINE environment variable to 1 to prevent attempts to download models from the internet.
```
export HF_HUB_OFFLINE=1

```

# 镜像源
huggingface的镜像源，墙之痛。
```
export HF_ENDPOINT=https://hf-mirror.com/
```

open-webui网页初始加载很慢，网页得加载几分钟，还以为是报错了，白着急了
