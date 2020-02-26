# 基于bitcoin 0.10.0 制作的内师大币
---
> 环境的话参考百度
#### 如下是运行从源码到编译需要进行的步骤
1.   find . -type f -print0 | xargs -0 sed -i 's/bitcoin/imnucoin/g'
1.  find . -type f -print0 | xargs -0 sed -i 's/Bitcoin/Imnucoin/g'
1.   find . -type f -print0 | xargs -0 sed -i 's/BitCoin/Imnucoin/g'
1.  find . -type f -print0 | xargs -0 sed -i 's/BITCOIN/IMNUCOIN/g'
1.  find . -type f -print0 | xargs -0 sed -i 's/BTC/IMNUC/g'
1.  find . -type f -print0 | xargs -0 sed -i 's/btc/IMNUC/g'
1.  find . -type f -print0 | xargs -0 sed -i 's/Btc/IMNUC/g'
1.  find . -exec rename 's/bitcoin/imnucoin/' {} ";"
1.  find . -exec rename 's/btc/IMNUC/' {} ";"
1.  find . -type f -print0 | xargs -0 sed -i 's/比特币/内师大币/g'
1. ./autogen.sh 
1.  ./configure 
1.  make
1. src/qt/
1. ./imnucoin-qt

> 需要注意的是需要改一下代码中的哈希值，详情见文档

----
#### 目录如下
1. 提供了bitcoin源码
2. 需要更改的模板文件：chainparams.cpp
3. 完整在ubuntu环境下编译过的文件，只需运行 src/qt/imnucoin-qt
4. 一份实验手册，前面执行完后，按照模板文件进行修改即可。

> 主网络进行了参数配置，测试网络没有
> 参考文档：
>> https://www.cnblogs.com/wintersun/p/3813424.html
>> https://tiny-calf.com/2018/03/20/%E6%AF%94%E7%89%B9%E5%B8%81%E6%A0%B8%E5%BF%83%E4%B8%BB%E8%A6%81%E5%8F%82%E6%95%B0%E5%88%86%E6%9E%90/
>> https://blog.csdn.net/BaoBeiDeXiaoDaiGua/article/details/79057759
>> https://blog.csdn.net/BaoBeiDeXiaoDaiGua/article/details/79058268
>> https://blog.csdn.net/baobeidexiaodaigua/article/details/79058332

## 资源

总大小大约在4T左右
链接: https://pan.baidu.com/s/1322Pp8UlkDC-28Qxs6OTEQ 提取码: 9epw

1. win10 此虚拟机集成大部分的环境，1T大小，打开需要64G内存和SSD级别的读写速度
1. Ubuntu19.10AI  集成深度学习环境
1. Ubuntu for teaching 集成mini AlphaGo
1. 区块链的授课资料主要在day1~6 的压缩包里面