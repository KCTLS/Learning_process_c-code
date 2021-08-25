#define _CRT_SECURE_NO_WARNINGS
新手常见的BUG



这里的这些小问题就是我们平时容易犯到，如果以前没有犯过严加防范，反正一定要注意，这几类很经典的.(入门级)




1.

void Test()
{
	char pcArray[10];
	strncpy(pcArray, "hello", 5);
	printf("%s\n", pcArrat);
	return;
}

这段代码首先要知道，strncpy的用法，以及它的参数，char *strncpy(char *dest, const char *src, int n)，把src所指向的字



符串中以src地址开始的前n个字节复制到dest所指的数组中，并返回dest。现在我们来看看字符的内容“hello\0”，因为 / 0一般不



会写出来，所以应该是6个字节，并不是5个字节。一定要熟悉函数的参数，和原型才能用，否则容易出现问题。



2.

#define BUFFER_SIZE 256
void GetMemory(char **ppszBuf）
{
	if (NULL == ppszBuf)
	{
		assert(0);
		return;
	}
	ppszBuf = (char*)malloc(BUFFER_SIZE);
	return;
}
void test()
{
	char *pszBuf = NULL;
	GetMemory(&pszBuf);
	strcpy(pszBuf, "hello world/r/n");
	printf("%s", pszBuf);
	free(pszBuf);
	return;
}


这道题，我们先捋一下，他的意思就是让pszBuf指针指向一段开辟好的空间，然后再调用strcpy将字符串传进空间里，想法不错，



但是函数体内问题很大，大家都知道，函数体内的都是临时变量，所以当你使用完毕这个函数也不例外里面除了malloc出来的空间



被存入堆中，剩下的空间都归还给操作系统了，所以这个时候，用来记录你开辟的空间的指针ppszBuf也被释放了，也就造成了内存



泄漏。还有，当你走到test函数中strcpy中的时候时，pszBuf指针并没被改变还是为空，这时候就出现了内存访问越界，程序崩



溃。若是想改正，你可以将GetMemory函数中的ppszBuf指针return出来，这时候你就有开辟空间的地址了。





3.



unsigned long FUNC_8(unsigned long ulCount)
{
	unsigned long ulSum = 0;
	while (0 <= ulCount)
	{
		ulSum += ulCount;
		ulCount--;
	}
	return ulSum;
}

这道题呢，我们只看到一个循环，他的意思大家应该很容易明白，他想算ulCount从0加到它本身的值，但是我们看一个数字之前应



该知道他的类型，这个一个无符号长整型的数字，这种类型是没有负数的，如果他到0的时候，在减一，就会变成类型可以表示的最



大值4294967295 也就是(2 ^ 32 - 1)，很明显这个循环就是一个死循环，所以我们在处理问题是一定要先看好他的类型，类型很重



要！



4.

char* GetStr(char *p)
{
	p = "hello world";
	return p;
}

void main()
{
	char *str = NULL;
	if (NULL != GetStr(str))
	{
		printf("\r\n str = %s", str);
	}
	return;
}

这个题呢，其实很容易找到的，我们看啊，函数是返回p指针，把那段空间算是返回来了，但是呢没有人接受他！！！，main函数中



从始至终str没有接收过那段空间，它在函数中虽然被定义了，但是那是形参啊，出了函数就不认账了，形参出了函数会释放，返回



来的p，你又没有接收，str还为空，所以呢，内存访问越界，str里面啥都没有，你还要输出，所以就有问题了。



记住，形参是实参的一份临时拷贝。





5.


void VarInit(unsigned char *pucArg)
{
	*pucArg = 1;
	return;
}

void test()
{
	unsigned long ulGlobal;
	varInit((unsigned char*)&ulGlobal);
	printf("%lu", ulGlobal);
	return;
}

这个题还是类型的问题，这样吧，我画一张图说明一下问题。









现在我们看出来当你要打印出 ulGloba, 那你就要做好心理准备了，因为它打印出来绝对不是1.



原因图里已经很清楚了





6.



AAA的初衷是gui_show_image这句代码的执行加上限制条件.




gui_push_clip();
#ifdef AAA

if (show_status = MMI_TURE)

#endif

#ifdef BBB


gui_show_image(x, y, image_id);


#endif 

gui_pop_clip();
updata_dt_display();
.......



这道题跟宏带了一点关系，宏我以前写过一大串，这道就简略说了，我们首先看到AAA 和 BBB是分开定义的，但是这样做就有可能



使BBB的宏定义失效，应该让他们的内容写在一个宏中。



因为我学习C语言也没多久，算不上好的，所以有什么不足多谢指出来，先写这么多，以后应该会有补充。


————————————————
版权声明：本文为CSDN博主「Dawn_sf」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https ://blog.csdn.net/Dawn_sf/article/details/56666675