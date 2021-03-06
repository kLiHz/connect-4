# Connect-4

重力四子棋，使用 C++ 实现

实现了一些基础的功能，除此之外有一些附加功能：

- 能够自定义棋盘大小（然而标准的重力四子棋就是6行7列）；
- 能够选择先手后手；
- 能够选择人机、人人模式。

不足之处：

- 可能还有没有测试出来的的 bug；
- 可能代码不是很规范；
- 目前只有文本界面（更新：文本界面现在可以自定义了！）

看到网上有很多实现都加入了很强劲的 AI 算法，比如“α-β剪枝”等等，但……本人才疏学浅，看不懂 AI 算法，只能采用模式匹配的方式，给程序下棋提供一点参考（换句话说也就是预先设计了几种优先考虑的情况）

**2021.4 更新 1**：把代码放在代码托管平台上了（之前是学习通的链接），这下链接不会轻易挂掉了；

**2021.4 更新 2**：由于又过了一年时间，代码水平稍微有些提高，就把代码改成了多文件，并且更加 C++（即弃用了 C 的字符数组和输入输出等，换成了 C++ 的 `std::string` 和 `std::iostream` 还有 STL 容器等）；虽然还是只有文本界面，但是尝试做了前后端的分离，即将文本界面和四子棋运行逻辑分离开来，通过一些接口互相联系，也许这样之后做图形界面可能会更加方便？

**2021.11 更新 3**：最近在学习 Alpha-Beta 剪枝，想起来可能可以更新下这个游戏，发现之前这个项目和其他几个项目放在一个仓库里了。由于多个项目的历史互相交织显得很混乱，于是花了一番功夫把它抽取出来成为一个独立的 git 仓库，而在原仓库将其作为 submodule 引入。

> 备注：有一篇 [我在知乎上的回答](https://www.zhihu.com/question/327740791/answer/1237970042)，其中也提到了这个项目。
