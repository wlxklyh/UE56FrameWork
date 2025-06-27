## 引用
1、UE引擎 用官方5.6的版本 不用自编引擎 费时

2、puerts 用的是master分支 因为解决了5.6的兼容问题  release会有编译问题
https://github.com/puerts/Puerts

3、虚拟机用v8
https://github.com/puerts/backend-v8/releases/download/V8_9.4.146.24_240430/v8_bin_9.4.146.24.tgz

4、demo代码来自
https://github.com/chexiongsheng/puerts_unreal_demo

## 说明

1、官方的UE5.6，epic启动器里下载

2、下载虚拟机然后解压到目录UE56FrameWork/Plugins/Puerts/ThirdParty/v8_9.4.146.24 目录

https://github.com/puerts/backend-v8/releases/download/V8_9.4.146.24_240430/v8_bin_9.4.146.24.tgz

【注意】检查下目录结构是否一致  UE56FrameWork/Plugins/Puerts/ThirdParty/v8_9.4.146.24/Lib/Win64/wee8.lib 这样才是正确的目录结构

3、VSCode打开 项目目录的TypeScript 这个 然后在这个里面写代码

【注意】UEEditor打开的时候 puerts会自动拷贝到Content/JavaScript 目录   如果你是没打开UEEdtor  然后写了代码  之后再打开UEEditor 就错过了拷贝代码 这个时候去加个空格也会拷贝了。就是注意报找不到js的时候可以注意这个问题

4、uclass相关的东西可以看当前仓库的代码（来自官方demo） 或者 官方文档https://puerts.github.io/docs/puerts/unreal/install
