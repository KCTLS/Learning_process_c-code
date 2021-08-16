#define _CRT_SECURE_NO_WARNINGS
1.gets()函数

问：请找出下面代码里的问题：

#include<stdio.h> 
int main(void)
{
	char buff[10];
	memset(buff, 0, sizeof(buff));

	gets(buff);

	printf("\n The buffer entered is [%s]\n", buff);

	return 0;
}

答：上面代码里的问题在于函数gets()的使用，这个函数从stdin接收一个字符串而不检查它所复制的缓存的容积，这可能会导致缓存溢出。这里推荐使用标准函数fgets()代替。

2.请找出下面代码中的所有错误 (题目不错, 值得一看)
说明：以下代码是把一个字符串倒序，如“abcd”倒序后变为“dcba”

#include"string.h" 　　

main()

{

	char*src = "hello,world";

	char* dest = NULL;

	int len = strlen(src);

	dest = (char*)malloc(len);

	char* d = dest;

	char* s = src[len];

	while (len-- != 0)

		d++ = s--;

	printf("%s", dest);

	return 0;

}


答：

方法1：一共有4个错误;

int main()

{

	char* src = "hello,world";

	int len = strlen(src);

	char* dest = (char*)malloc(len + 1);//要为分配一个空间 　　　char* d = dest; 　　

	char* s = &src[len - 1];          //指向最后一个字符　　

	while (len-- != 0)

		*d++ = *s--;

	*d = 0;           //尾部要加’\0’ 　　

	printf("%sn", dest);

	free(dest);        // 使用完，应当释放空间，以免造成内存汇泄露

	dest = NULL;　　 //防止产生野指针　

	return 0;

}

方法2：(方法一需要额外的存储空间, 效率不高.)　不错的想法

#include <stdio.h>

#include <string.h>

main()

{

	char str[] = "hello,world";

	int len = strlen(str);

	char t;

	for (int i = 0; i<len / 2; i++)

	{

		t = str[i];

		str[i] = str[len - i - 1]; //小心一点

		str[len - i - 1] = t;

	}

	printf("%s", str);

	return 0;

}



3.对于一个频繁使用的短小函数, 在C语言中应用什么实现, 在C++中应用什么实现 ?

c用宏定义，c++用inline


4.　unsigned char *p1;

unsigned long *p2;

p1 = (unsigned char *)0x801000;

p2 = (unsigned long *)0x810000;

请问p1 + 5 = ;

p2 + 5 = ;

答案:0x801005(相当于加上5位)0x810014(相当于加上20位);

5.进程和线程的差别。

答 : 线程是指进程内的一个执行单元, 也是进程内的可调度实体.

与进程的区别 :

	   (1)调度：线程作为调度和分配的基本单位，进程作为拥有资源的基本单位

	   (2)并发性：不仅进程之间可以并发执行，同一个进程的多个线程之间也可并发执行

	   (3)拥有资源：进程是拥有资源的一个独立单位，线程不拥有系统资源，但可以访问隶属于进程的资源.

	   (4)系统开销：在创建或撤消进程时，由于系统都要为之分配和回收资源，导致系统的开销明显大于创建或撤消线程时的开销

	   6.用宏定义写出swap（x，y）

	   答#define swap(x, y)

	   x = x + y;

y = x - y;

x = x - y;

7.数组a[N]，存放了1至N - 1个数，其中某个数重复一次。写一个函数，找出被重复的数字.时间复杂度必须为o（N）函数原型：

int do_dup(int a[], int N)

答:int do_dup(int a[], int N) //未经调试

{
	int sun = 0;
	int sum2;

	for (int i = 0; i<N; ++i)

	{
		Sum += a[i];
	}

	Sum2 = (1 + N - 1)*N / 2;

	Return(sum - sum2);
}

8.下述三个有什么区别？

char * const p;

char const * p

const char *p

解答：

char * const p; //常量指针，p的值不可以修改

char const * p；//指向常量的指针，指向的常量值不可以改

const char *p； //和char const *p

9… 以下代码中的两个sizeof用法有问题吗？[C易]

void UpperCase(char str[]) // 将 str 中的小写字母转换成大写字母

{

	for (size_t i = 0; i<sizeof(str) / sizeof(str[0]); ++i)

		if ('a' <= str[i] && str[i] <= 'z')

			str[i] -= ('a' - 'A');

}

char str[] = "aBcDe";

cout << "str字符长度为: " << sizeof(str) / sizeof(str[0]) << endl;

UpperCase(str);

cout << str << endl;


答：函数内的sizeof有问题。根据语法，sizeof如用于数组，只能测出静态数组的大小，无法检测动态分配的或外部数组大小。函数外的 str是一个静态定义的数组，因此其大小为6，函数内的str实际只是一个指向字符串的指针，没有任何额外的与数组相关的信息，因此sizeof作用于上 只将其当指针看，一个指针为4个字节，因此返回4。

注意 : 数组名作为函数参数时, 退化为指针.
	 数组名作为sizeof()参数时, 数组名不退化, 因为sizeof不是函数.

	 10.一个32位的机器, 该机器的指针是多少位

	 指针是多少位只要看地址总线的位数就行了。80386以后的机子都是32的数据总线。所以指针的位数就是4个字节了。
	 指出下面代码的输出，并解释为什么。(不错, 对地址掌握的深入挖潜)

	 main()

{
	int a[5] = { 1, 2, 3, 4, 5 };

	int *ptr = (int *)(&a + 1);

	printf("%d,%d", (a + 1), (ptr - 1));

}

输出：2, 5

(a + 1）就是a[1]，(ptr - 1)就是a[4], 执行结果是2，5

&a + 1不是首地址 + 1，系统会认为加一个a数组的偏移，是偏移了一个数组的大小（本例是5个int）

int *ptr = (int *)(&a + 1);

则ptr实际是&(a[5]), 也就是a + 5

原因如下：

&a是数组指针，其类型为 int(*)[5];

而指针加1要根据指针类型加上一定的值，

不同类型的指针 + 1之后增加的大小不同

a是长度为5的int数组指针，所以要加 5 * sizeof(int)

所以ptr实际是a[5]

但是prt与(&a + 1)类型是不一样的(这点很重要)

所以prt - 1只会减去sizeof(int*)

a, &a的地址是一样的，但意思不一样，a是数组首地址，也就是a[0]的地址，&a是对象（数组）首地址，a + 1是数组下一元素的地址，即a[1], &a + 1是下一个对象的地址，即a[5].

11.引用：平级内解决交换问题，不开辟多余空间

void swap(char* &p, char *& q)
{
	char *t = p;
	p = q;
	q = t;
}

int main()
{
	char *p = china;
	char *q = ame;
	swap(p, q);
	return 0;
}
