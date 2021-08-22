#define _CRT_SECURE_NO_WARNINGS
一、C语言的结构
1、Hello world
简单来说，一个C程序就是由若干头文件和函数组成。

#include<stdio.h>    //包含头文件
/*
*主函数
*/
int  main(){
	printf("Hello World");
	return 0;
}
#include <stdio.h>就是一条预处理命令，它的作用是通知C语言编译系统在对C程序进行正式编译之前需做一些预处理工作。

函数就是实现代码逻辑的一个小的单元。

注：在最新的C标准中，main函数前的类型为int而不是void。

2、主函数
一个C程序有且只有一个主函数，即main函数。主函数就是C语言中的唯一入口。

3、编写规范
1.一个说明或一个语句占一行，例如：包含头文件、一个可执行语句结束都需要换行；

2.函数体内的语句要有明显缩进，通常以按一下Tab键为一个缩进；

3.括号要成对写，如果需要删除的话也要成对删除；

4.当一句可执行语句结束的时候末尾需要有分号；

5.代码中所有符号均为英文半角符号。

4、注释
#include<stdio.h>    //包含头文件
/*
*主函数
*/
int  main(){
	printf("Hello World");
	return 0;
}
如上面两种注释//和 /**/。

5、标识符
编程时给变量或者函数起的名字就是标识符，就好比我们慕课网的每一位童鞋都有姓名，姓名就是这位童鞋的标识符。C语言的标识符是不可以随便起名字的，必须遵守一定的规则。

C 语言规定，标识符可以是字母(A～Z，a～z)、数字(0～9)、下划线_组成的字符串，并且第一个字符必须是字母或下划线。在使用标识符时还有注意以下几点：

1.标识符的长度最好不要超过8位，因为在某些版本的C中规定标识符前8位有效，当两个标识符前8位相同时，则被认为是同一个标识符。

2.标识符是严格区分大小写的。例如Imooc和imooc 是两个不同的标识符。

3.标识符最好选择有意义的英文单词组成做到"见名知意"，不要使用中文。

4.标识符不能是C语言的关键字。

6、基本数据类型
在我们玩游戏的时候，游戏中的角色是有类型的，有敏捷型、力量型、法术型等等。同样C语言中的数据也是有类型的，C语言中，数据类型可分为：基本数据类型，构造数据类型，指针类型，空类型四大类。如图所示：

image

这里我们先给大家讲解基本数据类型中最简单也是最常用的整型、实型与字符型。

image

整型数据是指不带小数的数字。生活中有很多信息适合使用整型数据来表示，比如：人的年龄、班级的人数、书的总页数等等。因此整型的类型比较多：

image

注：int、short int、long int是根据编译环境的不同，所取范围不同。而其中short int和long int至少是表中所写范围，但是int在表中是以16位编译环境写的取值范围。另外

c语言int的取值范围在于他占用的字节数 ，不同的编译器，规定是不一样。ANSI标准定义int是占2个字节，TC是按ANSI标准的，它的int是占2个字节的。但是在VC里，一个int是占4个字节的。

浮点数据是指带小数的数字。生活中有很多信息适合使用浮点型数据来表示，比如：人的体重(单位：公斤)、商品价格、圆周率等等。因为精度的不同又分为3种：

image

注：C语言中不存在字符串变量，字符串只能存在字符数组中，这个后面会讲。

6、格式化输出语句
格式化输出语句，也可以说是占位输出，是将各种类型的数据按照格式化后的类型及指定的位置从计算机上显示。这样做的好处，是有利于计算机能够准确的将我们所要类型数据给我们。

其格式为：printf("输出格式符"，输出项);

C语言中的常用格式化符：

image

当输出语句中包含普通字符时，可以采用一下格式：

printf("普通字符输出格式符", 输出项);

例如：

image

输出结果为：

a = 10

如果要输出多个变量的并指定变量的位置时候，格式符还可以连用，变量之间需要用逗号隔开，如：

image

输出结果为：

整数：10，小数：7.560000，字符：c

注意：格式符的个数要与变量、常量或者表达式的个数一一对应。

7、自动类型转换
有这么一个词叫“狸猫换太子”，变量的数据类型就存在这样的情况。数据类型存在自动转换的情况，比如：

image

自动转换发生在不同数据类型运算时，在编译的时候自动完成。自动转换遵循的规则就好比小盒子可以放进大盒子里面一样，下图表示了类型自动转换的规则。

image

char类型数据转换为int类型数据遵循ASCII码中的对应值，ASCII码请查看WIKI。

8、强制类型转换
强制类型转换是通过定义类型转换运算来实现的。其一般形式为：

(数据类型) (表达式)

其作用是把表达式的运算结果强制转换成类型说明符所表示的类型，例如：

image

输入结果：

image

在使用强制转换时应注意以下问题：

1、数据类型和表达式都必须加括号，如把(int)(x / 2 + y)写成(int)x / 2 + y则成了把x转换成int型之后再除2再与y相加了。

2、转换后不会改变原数据的类型及变量值，只在本次运算中临时性转换。

3、强制转换后的运算结果不遵循四舍五入原则

二、C语言的运算
1、运算符
我们上小学的时候都学过各种运算，如：加法运算、乘法运算、混合运算等，而运算就要用到运算符，如： + 、 - 、×、÷等等。

在C语言中同样有运算符，只是写法可能有所不同。先说一下C语言中的运算是什么？C语言中的运算就是对数据进行操作、处理的过程。那么运算符又干什么的呢？运算符就是指定该运算的处理方式。

那么C语言中又有哪些运算符呢？

如下所示：

※ 算术运算符

※ 赋值运算符

※ 关系运算符

※ 逻辑运算符

※ 三目运算符
2、算术运算符
C语言基本算术运算符如下表：

image

除法运算中注意：

如果相除的两个数都是整数的话，则结果也为整数，小数部分省略，如8 / 3 = 2；而两数中有一个为小数，结果则为小数，如：9.0 / 2 = 4.500000。

取余运算中注意：

该运算只适合用两个整数进行取余运算，如：10 % 3 = 1；而10.0 % 3则是错误的；运算后的符号取决于被模数的符号，如(-10) % 3 = -1; 而10 % (-3) = 1。

注：C语言中没有乘方这个运算符，也不能用×，÷等算术符号。

另：关于自增自减运算符，会在下一小节讲解。

3、自增与自减运算符
自增运算符为“++”，其功能是使变量的值自增1；自减运算符为“--”，其功能是使变量值自减1。它们经常使用在循环中。自增自减运算符有以下几种形式：

image

注意：无论是a++还是++a都等同于a = a + 1, 在表达式执行完毕后a的值都自增了1, 无论是a--还是--a都等同于a = a - 1, 在表达式执行完毕后a的值都自减少1。

请分析如下代码输出结果：

image

小伙伴们，别急着看运行结果，自己先想想看结果是什么？

运行结果：

image

4、## 赋值运算符
在前面的小节中接触过简单的赋值运算符“ = ”，如：

image

那么C语言中的赋值运算符又是什么呢？

C语言中赋值运算符分为

简单赋值运算符和复合赋值运算符，之前我们已经接触过简单赋值运算符“ = ”号了，下面讲一下复合赋值运算符：

复合赋值运算符就是在简单赋值符“ = ”之前加上其它运算符构成，例如 += 、 -= 、 *= 、 /= 、 %= 。

看一个小例子：

image

分析：定义整型变量a并赋值为3，a += 5; 这个算式就等价于a = a + 5;

将变量a和5相加之后再赋值给a

5、关系运算符
本节的所讲解的符号，大家在生活中应该都有用过，像我们去商场买东西，都会比较一下价格，是不是相等啊，哪家的贵，哪家的便宜啊。

在C语言中程序中也存在这样的比较，这个时候就需要用到关系运算符了。

下面是C语言中的关系运算符：

image

关系表达式的值是“真”和“假”，在C程序用整数1和0表示。如：

image

其结果为：

image

注意： >= ， <= ， == ， != 这种符号之间不能存在空格。

6、逻辑运算符
在数学中我们见过7<x<100这样的公式，意思是x大于7并且x小于100。

在程序中这样写一个变量的范围值是不行的，计算机是看不懂这样的算式的，那么怎样让计算机看懂呢？这里就要用到逻辑运算符了。

下面我们看一下C语言中的逻辑运算符：

image

那么前面的那个算式写成计算机可以看的懂的算式就是：x>7 && x<100;

逻辑运算的值也是有两种分别为“真”和“假”，C语言中用整型的1和0来表示。其求值规则如下：

1) 与运算(&&)

参与运算的两个变量都为真时，结果才为真，否则为假。例如：5 >= 5 && 7>5 ，运算结果为真；

2) 或运算(|| )

参与运算的两个变量只要有一个为真，结果就为真。 两个量都为假时，结果为假。例如：5 >= 5 || 5>8，运算结果为真；

3) 非运算(!)

参与运算的变量为真时，结果为假；参与运算量为假时，结果为真。例如：!(5>8)，运算结果为真。

7、三目运算符
我们购物的时候经常会说如果这个物品大于多少钱就不买了，条件就是大于多少钱，结果就是不买了。

那么上面所说的能不能在C语言中表示出来呢？当然是可以了，不过C语言中，需要用到一个符号，这个符号就是三目运算符。

C语言中的三目运算符：“ ? : ”，其格式为：

表达式1 ? 表达式2 : 表达式3;

执行过程是：

先判断表达式1的值是否为真，如果是真的话执行表达式2；如果是假的话执行表达式3。

用代码来写一下上面的例子：

image

image

8、运算符大比拼之优先级比较
问：优先级是神马？

答：优先级就是在运算中运算的先后顺序。

那么我们来看看我们学习的各种运算符号的顺序吧！

image

优先级别为1的优先级最高，优先级别为10的优先级别最低。

大家没必要去死记运算符的优先级顺序，记住最高优先级别的，在开发中就会无敌啦~来看一看下面的例子：

image

解析：C语言中运算符中最高等级的为()，因此执行过程为：

1、先计算a>3和a + 3的结果，计算后算式为1*a - 14 % 3；

2、再计算1*a和14 % 3的结果，计算后算式为11 - 2；

3、最后算出结果为9。


作者：版槽子
链接：https ://www.imooc.com/article/23511
来源：慕课网