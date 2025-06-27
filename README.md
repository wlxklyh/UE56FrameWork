## 说明

1、下载虚拟机然后解压到目录UE56FrameWork/Plugins/Puerts/ThirdParty/v8_9.4.146.24

https://github.com/puerts/backend-v8/releases/download/V8_9.4.146.24_240430/v8_bin_9.4.146.24.tgz

【注意】检查下目录结构是否一致  UE56FrameWork/Plugins/Puerts/ThirdParty/v8_9.4.146.24/Lib/Win64/wee8.lib 这样才是正确的目录结构

2、VSCode打开 项目目录的TypeScript 这个 然后在这个里面写代码

【注意】UEEditor打开的时候 puerts会自动拷贝到Content/JavaScript 目录   如果你是没打开UEEdtor  然后写了代码  之后再打开UEEditor 就错过了拷贝代码 这个时候去加个空格也会拷贝了。就是注意报找不到js的时候可以注意这个问题

3、uclass相关的东西可以看当前仓库的代码（来自官方demo） 或者 官方文档https://puerts.github.io/docs/puerts/unreal/install
