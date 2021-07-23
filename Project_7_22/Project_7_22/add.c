#define _CRT_SECURE_NO_WARNINGS
static int Add(int x,int y)//static 修饰函数改变了函数的链接属性
{
	int z = 0;
	z = x + y;
	return z;
}