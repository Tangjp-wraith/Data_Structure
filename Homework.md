## 
    数据结构（C语言版 第2版）严蔚敏 课后算法设计题

代码在Homework目录对应文件下

### Chapter2

1. 将两个递增的有序链表合并为一个递增的有序链表。 要求结果链表仍使用原来两个链表的存储空间 , 不另外占用其它的存储空间。表中不允许有重复的数据。
2. 将两个非递减的有序链表合并为一个非递增的有序链表。 要求结果链表仍使用原来两个链表的存储空间 , 不另外占用其它的存储空间。表中允许有重复的数据。
3. 已知两个链表 A 和 B 分别表示两个集合，其元素递增排列。请设计算法求出 A 与 B的交集，并存放于 A 链表中。
4. 已知两个链表 A 和 B 分别表示两个集合，其元素递增排列。请设计算法求出两个集合 A 和 B 的差集（即仅由在 A 中出现而不在 B 中出现的元素所构成的集合） ，并以同样的形式存储，同时返回该集合的元素个数。
5. 设计算法将一个带头结点的单链表 A 分解为两个具有相同结构的链表 B、C，其中 B表的结点为 A 表中值小于零的结点，而 C 表的结点为 A 表中值大于零的结点（链表 A 中的元素为非零整数，要求 B、 C 表利用 A 表的结点）
6. 设计一个算法，通过一趟遍历在单链表中确定值最大的结点。
7. 设计一个算法，通过遍历一趟，将链表中所有结点的链接方向逆转，仍利用原表的存储空间。
8. 设计一个算法，删除递增有序链表中值大于 mink 且小于 maxk 的所有元素（ mink和 maxk 是给定的两个参数，其值可以和表中的元素相同，也可以不同 ）
9. 已知 p 指向双向循环链表中的一个结点， 其结点结构为 data 、prior 、next 三个域，
   写出算法 change(p), 交换 p 所指向的结点和它的前缀结点的顺序
10. 已知长度为 n 的线性表 A 采用顺序存储结构，请写一时间复杂度为 O(n) 、空间复杂度为 O(1) 的算法，该算法删除线性表中所有值为 item 的数据元素。

### Chapter3

1. 将编号为 0 和 1 的两个栈存放于一个数组空间 V[m] 中，栈底分别处于数组的两端。
   当第 0 号栈的栈顶指针 top[0] 等于 -1 时该栈为空，当第 1 号栈的栈顶指针 top[1] 等于 m 时该栈为空。两个栈均从两端向中间增长。试编写双栈初始化，判断栈空、栈满、进栈和出栈等
   算法的函数。双栈数据结构的定义如下：
   ```cpp
   Typedef struct {
     int top[2], bot[2];  //栈顶和栈底指针
     SElemType *V;        //栈数组
     int m;               //栈最大可容纳元素个数
   } DblStack
   ```
2. 回文是指正读反读均相同的字符序列， 如“ abba”和“ abdba ”均是回文， 但“ good ”
   不是回文。试写一个算法判定给定的字符向量是否为回文。 (提示：将一半字符入栈 )
3. 设从键盘输入一整数的序列： a1, a2, a3， …， an，试编写算法实现：用栈结构存储输入的整数，当 ai≠ -1 时，将 ai 进栈；当 ai=-1 时，输出栈顶整数并出栈。算法应对异常情况（入栈满等）给出相应的信息
4. 从键盘上输入一个后缀表达式，试编写算法计算表达式的值。规定：逆波兰表达式的长度不超过一行，以 符作为输入结 束 ， 操 作 数 之 间 用 空 格 分 隔 , 操 作 符 只 可 能 有 + 、 − 、 ∗ 、 / 四 种 运 算 。 例 如 ： 234  34 + 2 ∗ 符作为输入结束，操作数之间用空格分隔 , 操作符只可能有 +、 - 、 * 、 / 四种运算。例如： 234 34+2*符作为输入结束，操作数之间用空格分隔,操作符只可能有+、−、∗、/四种运算。例如：234  34+2∗$
5. 假设以 I 和 O 分别表示入栈和出栈操作。栈的初态和终态均为空，入栈和出栈的操作序列可表示为仅由 I 和 O 组成的序列， 称可以操作的序列为合法序列， 否则称为非法序列。
   ①下面所示的序列中哪些是合法的？
   A. IOIIOIOO B. IOOIOIIO C. IIIOIOIO D. IIIOOIOO
   ②通过对①的分析， 写出一个算法， 判定所给的操作序列是否合法。 若合法， 返回 true ，
   否则返回 false （假定被判定的操作序列已存入一维数组中） 。
6. 假设以带头结点的循环链表表示队列，并且只设一个指针指向队尾元素站点 ( 注意不设头指针 ) ，试编写相应的置空队、判队空、入队和出队等算法
7. 假设以数组 Q[m] 存放循环队列中的元素 , 同时设置一个标志 tag ，以 tag== 0 和 tag == 1 来区别在队头指针 ( front )和队尾指针 ( rear )相等时，队列状态为 “空 ”还是 “满 ”。试编写与此结构相应的插入 (enqueue )和删除 (dlqueue )算法
8. 如果允许在循环队列的两端都可以进行插入和删除操作。要求：
   ① 写出循环队列的类型定义；
   ② 写出“从队尾删除”和“从队头插入”的算法。
9. 已知 Ackermann 函数定义见书本 :
   ① 写出计算 Ack(m,n) 的递归算法，并根据此算法给出出 Ack(2,1) 的计算过程。
   ② 写出计算 Ack(m,n) 的非递归算法。
10. 已知 f 为单链表的表头指针 , 链表中存储的都是整型数据，试写出实现下列运算
    的递归算法：
    ①求链表中的最大整数；
    ②求链表的结点个数；
    ③求所有整数的平均值。

### Chapter5

以二叉链表作为二叉树的存储结构，编写以下算法：

1.  统计二叉树的叶结点个数
2.  判别两棵树是否相等
3.  交换二叉树每个结点的左孩子和右孩子
4.  设计二叉树的双序遍历算法（双序遍历是指对于二叉树的每一个结点来说，先访问这个结点，再按双序遍历它的左子树，然后再一次访问这个结点，接下来按双序遍历它的右子树）
5.  计算二叉树最大的宽度 （二叉树的最大宽度是指二叉树所有层中结点个数的最大值）
6.  用按层次顺序遍历二叉树的方法，统计树中具有度为 1 的结点数目
7.  求任意二叉树中第一条最长的路径长度，并输出此路径上各结点的值
8.  输出二叉树中从每个叶子结点到根结点的路径

### Chapter6

1. 分别以邻接矩阵和邻接表作为存储结构，实现以下图的基本操作：
   ①增加一个新顶点 v， InsertVex(G, v) ；
   ②删除顶点 v 及其相关的边， DeleteVex(G , v);
   ③增加一条边 <v ， w>， InsertArc(G , v, w);
   ④删除一条边 <v ， w>， DeleteArc(G , v, w)
2. 一个连通图采用邻接表作为存储结构，设计一个算法，实现从顶点 v 出发的深度优先遍历的非递归过程。
3. 设计一个算法，求图 G 中距离顶点 v 的最短路径长度最大的一个顶点，设 v 可达其余各个顶点
4. 试基于图的深度优先搜索策略写一算法， 判别以邻接表方式存储的有向图中是否存在由顶点 v i 到顶点 v j 的路径（ i≠ j ）
5. 采用邻接表存储结构，编写一个算法，判别无向图中任意给定的两个顶点之间是否存在一条长度为为 k 的简单路径
