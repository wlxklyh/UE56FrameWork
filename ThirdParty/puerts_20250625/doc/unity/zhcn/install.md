# 安装PuerTS    

如果你不清楚该使用哪种安装方式，该用哪个版本，请参见 [FAQ](./faq.md#安装相关)

### GitHub Clone 并用 Unity UPM 安装

带有upm的unity版本，可以使用这种方式安装

- git clone `https://github.com/chexiongsheng/puerts_unity_demo.git`
- open Package Manager
- click `+`
- select `Add from File`
- select [your cloned path]/package/package.json 
- click `Add`

### 从 OpenUPM 安装 | Unity 2018+ 可用

PuerTS 现已上传 OpenUPM: https://openupm.com/packages/com.tencent.puerts.core/

你可按照[OpenUPM](https://openupm.com/)所支持的方式安装

国内网络推荐使用`openupm-cn`

### 手动下载代码与插件  | 全版本可用
以往支持的源码安装模式依旧支持。相比前两种方式管理起来稍麻烦，但对代码魔改更友好。

1. 前往 [Github Releases](https://github.com/Tencent/puerts/releases) 下载PuerTS_V8_x.x.x.tgz 或是别的你需要的Puerts版本。
2. 将压缩包内的Puerts文件夹解压至你的Assets目录

> 如果你是2018以下版本，还需要你将Puerts代码内的内置js手动加上.txt后缀

> mac下如果遇到移入废纸篓问题，请使用sudo xattr -r -d com.apple.quarantine puerts.bundle。但用了后提交git容易出问题

#### 当然还有一种最简单的办法：从官方Demo中拷贝出来用。
