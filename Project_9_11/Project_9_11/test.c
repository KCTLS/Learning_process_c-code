#include<stdio.h>
////����ˮ��1ƿ��ˮ1Ԫ��������ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//Ǯ��ƿ
//	total = money;
//	empty = total;
//	//��ƿ��ƿ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}
//important������������ѭ������
//ģ��ʵ��strlen ����
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