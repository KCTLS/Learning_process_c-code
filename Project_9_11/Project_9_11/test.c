#include<stdio.h>
////喝汽水，1瓶汽水1元，两个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//钱换瓶
//	total = money;
//	empty = total;
//	//空瓶换瓶
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}
//important！！！程序死循环解释
//模拟实行strlen 函数
void my_strlen(const char* pc)
{
	int count = 0;
	while (*pc)
	{
		count++;
		pc++;
	}
	printf("%d\n", count);
}
int main()
{
	char pcarr[] = "abcde";
	my_strlen(pcarr);
	return 0;
}