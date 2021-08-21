#define _CRT_SECURE_NO_WARNINGS
【程序1】
题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去
掉不满足条件的排列。
2.程序源代码：
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	for (i = 1; i<5; i++)
		for (j = 1; j<5; j++)
			for (k = 1; k<5; k++)
				if (i != j&&i != k&&j != k)
					printf("%d%d%d ", i, j, k);
	system("pause");
	return 0;
}

【程序2】
题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高
于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可可提
成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于
40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于
100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
1.程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。　　　　　　
2.程序源代码：
#include<stdio.h>
#include<stdlib.h>
int main()
{
	long profit;
	double rate1 = 0.1, rate2 = 0.075, rate3 = 0.05, rate4 = 0.03, rate5 = 0.015, rate6 = 0.01;
	long reward = 0;
	printf("输入月利润:");
	scanf("%d", &profit);

	if (profit >= 0 && profit <= 100000)
		reward = profit*rate1;
	else if (profit <= 200000)
		reward = 100000 * rate1 + (profit - 100000)*rate2;
	else if (profit <= 400000)
		reward = 100000 * rate1 + 100000 * rate2 + (profit - 200000)*rate3;
	else if (profit <= 600000)
		reward = 10000 * rate1 + 100000 * rate2 + 200000 * rate3 + (profit - 400000)*rate4;
	else if (profit <= 1000000)
		reward = 10000 * rate1 + 100000 * rate2 + 200000 * rate3 + 200000 * rate4 + (profit - 6000000)*rate5;
	else reward = 10000 * rate1 + 100000 * rate2 + 200000 * rate3 + 200000 * rate4 + 400000 * rate5 + (profit - 1000000)*rate6;

	printf("%d\n", reward);

	system("pause");
	return 0;
}
/*【程序3】
题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, x, y;
	double r;
	for (i = 0; i<100000; i++)
	{
		x = (int)sqrt(i + 100);
		y = (int)sqrt(i + 268);
		if (x*x == (i + 100) && y*y == i + 268)
		{
			printf("%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}

/*
【程序4】
题目：输入某年某月某日，判断这一天是这一年的第几天？"能被4整除却不能被100整除 或 能被400整除的年份是闰年"
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int year;
	int month;
	int day;
}Date;
int main()
{
	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int days = 0, i;
	Date date;
	scanf("%d%d%d", &(date.year), &(date.month), &(date.day));//输入日期如2012 3 10 

	for (i = 0; i<date.month - 1; i++)
		days += months[i];
	days += date.day;

	if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0))
		days += 1;

	printf("这一天是这一年的第%d天\n", days);
	system("pause");
	return 0;
}

/*
【程序5】
题目：输入三个整数x,y,z，请把这三个数由小到大输出。
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	printf("%d%d%d", (x<y ? x : y)<z ? (x<y ? x : y) : z, (x>y ? x : y)<z ? (x>y ? x : y) : z, (x>y ? x : y)>z ? (x>y ? x : y) : z);
	x = y<z ? y : z;

	system("pause");
	return 0;
}
/*
【程序6】
题目：用*号输出字母C的图案。
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{

	printf("   * *       \n");
	printf(" *          \n");
	printf("*           \n");
	printf("*           \n");
	printf("*           \n");
	printf(" *          \n");
	printf("   * *      \n");
	system("pause");
	return 0;
}

/*
【程序7】
题目：输出特殊图案，请在c环境中运行，看一看，Very Beautiful!
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	for (i = 0; i<128; i++)
		printf("%c ", i);
	system("pause");
	return 0;
}
/*
【程序8】
题目：输出9*9口诀。
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for (j = 1; j<10; j++)
	{
		for (i = 1; i <= j; i++)
		{
			printf("%dx%d=%-3d  ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
/*
【程序9】
题目：要求输出国际象棋棋盘。
1.程序分析：用i控制行，j来控制列，根据i+j的和的变化来控制输出黑方格，还是白方格。
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for (i = 0; i<8; i++)
	{
		for (j = 0; j<8; j++)
			if ((j + i) % 2 == 0)printf("%c", 219);
			else printf(" ");

			printf("\n");

	}

	system("pause");
	return 0;
}
/*
【程序10】
题目：打印楼梯，同时在楼梯上方打印两个笑脸。
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	printf("   %c %c\n", 2, 2);
	for (i = 1; i<10; i++)
	{
		for (j = 1; j<i; j++)
			printf("%c%c", 219, 219);
		printf("\n");
	}

	system("pause");
	return 0;
}
/*
【程序11】
题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月
　　　后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
   */
#include<stdio.h>
#include<stdlib.h>
long getnum(int n);
int main()
{
	int n;
	scanf("%d", &n);
	printf("第%d个月有%d只兔子\n", n, getnum(n));

	system("pause");
	return 0;
}
long getnum(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else return (getnum(n - 1) + getnum(n - 2));
}
/*
【程序12】
题目：判断101-200之间有多少个素数，并输出所有素数。
*/
#include<stdio.h>
#include<stdlib.h>

int IsPrimer(int n);
int main()
{
	int i;
	for (i = 101; i<201; i++)
		if (IsPrimer(i)) printf("%d ", i);

	system("pause");
	return 0;
}
int IsPrimer(int n)
{
	int i;
	int s = sqrt(n) + 1;
	for (i = 2; i<s; i++)
		if (n%i == 0)return 0;

	return 1;
}
/*
【程序13】
题目：打印出100-999的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数
　　　本身。例如：153是一个“水仙花数”，因为153=1的三次方＋5的三次方＋3的三次方。
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	for (i = 1; i<10; i++)
		for (j = 0; j<10; j++)
			for (k = 0; k<10; k++)
				if (i*i*i + j*j*j + k*k*k == i * 100 + j * 10 + k)
					printf("%d%d%d ", i, j, k);

	system("pause");
	return 0;
}
/*
【程序14】
题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。
*/
#include<stdio.h>
#include<stdlib.h>
int IsPrimer(int n);
int Explode(int n);
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d=", n);
	while (!IsPrimer(n))
	{
		n = Explode(n);
	}
	printf("%d", n);
	system("pause");
	return 0;
}
int IsPrimer(int n)
{
	int i;
	int s = sqrt(n) + 1;
	for (i = 2; i<s; i++)
		if (n%i == 0)return 0;

	return 1;
}
int Explode(int n)
{
	int i;
	for (i = 2;; i++)
		if (n%i == 0)
		{
		printf("%d*", i);
		return n / i;
		}
}
/*
【程序15】
题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，
　　　60分以下的用C表示。
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int grade;
	char rank;
	scanf("%d", &grade);
	rank = grade >= 90 ? 'A' : (grade >= 60 ? 'B' : 'C');
	printf("%c\n", rank);
	system("pause");
	return 0;
}
/*
【程序16】
题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
初级代码：
*/
#include<stdio.h>
#include<stdlib.h>
int GCD(int m, int n);
int LCM(int m, int n);
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	printf("最大公约数为：%d,最小公倍数为：%d\n", GCD(m, n), LCM(m, n));

	system("pause");
	return 0;
}
int GCD(int m, int n)
{
	int big, small;
	int i;
	big = m>n ? m : n;
	small = m<n ? m : n;
	for (i = small; i>0; i--)
		if (big%i == 0 && small%i == 0)
		{
		return i;
		}
}
int LCM(int m, int n)
{
	int big = m>n ? m : n;
	int small = m<n ? m : n;
	int i;
	for (i = big;; i++)
		if (i%big == 0 && i%small == 0)
			return i;
}
//升级代码：
/*
【程序16】
题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m, n, tem;
	int big, small;
	scanf("%d%d", &m, &n);
	big = m>n ? m : n;
	small = m<n ? m : n;

	while ((big%small) != 0)
	{
		tem = big%small;
		big = tem>small ? tem : small;
		small = tem<small ? tem : small;
	}
	printf("最大公约数：%d\n", small);
	printf("最小公倍数：%d\n", (m*n) / small);

	system("pause");
	return 0;
}
/*
【程序17】
题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char c;
	int i;
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	while ((c = getchar()) != '\n'){
		if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z')) num1++;
		else if (c >= '0'&&c <= '9') num3++;
		else if (c == ' ') num2++;
		else num4++;
	}
	printf("英文字母数：%d，空格数：%d，数字字符数：%d，其它字符数：%d\n", num1, num2, num3, num4);

	system("pause");
	return 0;
}
/*
【程序18】
题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时
　　　共有5个数相加)，几个数相加有键盘控制。(int)pow(10,count-i);
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, count, r = 0, i, j, tem;
	scanf("%d%d", &a, &count);
	for (i = count; i>0; i--)
	{
		tem = a*i;
		for (j = 0; j<count - i; j++)
			tem *= 10;
		r += tem;
	}

	printf("%d\n", r);

	system("pause");
	return 0;
}
/*
【程序18】
题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时
　　　共有5个数相加)，几个数相加有键盘控制。(int)pow(10,count-i);
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, n, count = 0, sn = 0, tn = 0;
	scanf("%d%d", &a, &n);
	while (count<n){
		tn += a;
		sn += tn;
		a *= 10;
		count++;
	}
	printf("%d\n", sn);
	system("pause");
	return 0;
}

/*
【程序19】
题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程
　　　找出1000以内的所有完数。
   */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, j, tem, n;
	for (i = 2; i <= 1000; i++)
	{
		tem = 0;
		for (j = 1; j<i; j++)
			if (i%j == 0)
			{
			tem += j;
			}
		if (tem == i)printf("%d ", i);
	}
	system("pause");
	return 0;
}
/*
【程序20】
题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在
　　　第10次落地时，共经过多少米？第10次反弹多高？
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float sh = 100.0, h = 50.0;
	int i;
	for (i = 2; i <= 10; i++)
	{
		sh += 2 * h;
		h /= 2;
	}
	printf("%f %f\n", sh, h);

	system("pause");
	return 0;
}
/*
【程序21】
题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个
　　　第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
   　　　的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
	  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, s = 1;
	for (i = 9; i>0; i--)
	{
		s = (s + 1) * 2;
	}

	printf("第一天共摘了%d个桃子 \n", s);
	system("pause");
	return 0;
}
/*
【程序22】
题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定
　　　比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出
   　　　三队赛手的名单。
	  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char i, j, k = 'y';
	for (i = 'y'; i <= 'z'; i++)
	{
		for (j = 'x'; j <= 'z'; j++)
		{
			if (i != j&&i != k&&j != k&&i != 'x'&&k != 'x'&&k != 'z')
				printf("The order is a--%c,b--%c,c--%c\n", i, j, k);
		}
	}
	system("pause");
	return 0;
}
/*
【程序23】
题目：打印出如下图案（菱形）
*
***
******
********
******
***
*
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 3; i>0; i--)
	{
		for (j = i; j>0; j--)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}
/*
【程序24】
题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, tem;
	double s = 0, a = 2, b = 1;
	for (i = 0; i<20; i++)
	{
		s += a / b;
		tem = b;
		b = a;
		a = a + tem;
	}
	printf("%lf\n", s);
	system("pause");
	return 0;
}
/*
【程序25】
题目：求1+2!+3!+...+20!的和
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1, s = 0, i;
	for (i = 1; i <= 20; i++)
	{
		a *= i;
		s += a;
	}
	printf("1+2!+3!+...+20!=%d\n", s);

	system("pause");
	return 0;
}
/*
【程序26】
题目：利用递归方法求5!。
*/
#include<stdio.h>
#include<stdlib.h>
int getnum(int n);
int main()
{
	int n;
	printf("5!=%d\n", getnum(5));
	system("pause");
	return 0;
}
int getnum(int n)
{
	if (n == 1) return 1;
	else if (n>1)return (n*getnum(n - 1));
	else return 0;
}
/*
【程序27】
题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
*/
#include<stdio.h>
#include<stdlib.h>
void func(char*ch);
int main()
{
	char str[6];
	gets(str);
	func(str);
	system("pause");
	return 0;
}
void func(char*ch)
{
	if (*ch != '\0')
	{
		func(ch + 1);
		printf("%c ", *ch);
	}
	else return;
}
/*
【程序27】
题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
*/
#include<stdio.h>
#include<stdlib.h>
void func(int n);
int main()
{
	func(5);
	system("pause");
	return 0;
}
void func(int n)
{
	char ch;
	ch = getchar();
	if (n>1) func(n - 1);
	putchar(ch);
}
/*
【程序28】
题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第
　　　3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后
   　　　问第一个人，他说是10岁。请问第五个人多大？
	  这题目也太简单了吧，这好要编程吗？小学生都会算，估计是在考递归
	  */
#include<stdio.h>
#include<stdlib.h>
int func(int n);
int main()
{
	printf("第5个人%d岁\n", func(5));
	system("pause");
	return 0;
}
int func(int n)
{
	if (n == 1) return 10;
	else return 2 + func(n - 1);
}
/*
【程序29】
题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, a, b, c, d, e;
	scanf("%d", &n);
	a = n / 10000;
	b = n % 10000 / 1000;
	c = n % 1000 / 100;
	d = n % 100 / 10;
	e = n % 10;
	if (a != 0)printf("这是一个5位数，各位逆序打印为：%d %d %d %d %d\n", e, d, c, b, a);
	else if (b != 0)printf("这是一个4位数，各位逆序打印为:%d %d %d %d\n", e, d, c, b);
	else if (c != 0)printf("这是一个3位数，各位逆序打印为：%d %d %d\n", e, d, c);
	else if (d != 0)printf("这是一个2位数，各位逆序打印为：%d %d\n", e, d);
	else printf("这是一个1位数，各位逆序打印为：%d\n", a);

	system("pause");
	return 0;
}
/*
【程序30】
题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。　　
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, a, b, c, d, e;
	scanf("%d", &n);
	a = n / 10000;
	b = n % 10000 / 1000;
	c = n % 1000 / 100;
	d = n % 100 / 10;
	e = n % 10;
	if (a == e&&b == d)printf("%d是一个回文数.\n", n);
	else printf("%d不是一个回文数\n", n);

	system("pause");
	return 0;
}
/*
【程序31】
题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续
　　　判断第二个字母。Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday;
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	ch = getchar();
	getchar();//吃掉回城符 
	switch (ch){
	case 'M':printf("Monday\n"); break;
	case 'W':printf("Wednesday\n"); break;
	case 'F':printf("Friday\n"); break;
	case 'T':printf("无法判断,接着输入第二个字母"); ch = getchar();
		if (ch == 'u')printf("Tuesday\n");
		if (ch == 'h')printf("Thursday\n");
		break;
	case 'S':printf("无法判断,接着输入第二个字母"); ch = getchar();
		if (ch == 'a')printf("Saturday\n");
		if (ch == 'u')printf("Sunday\n");
		break;
	default:printf("date error");
	}

	system("pause");
	return 0;
}
32 - 35题与TC特定的图形库有关，放弃之
36题求素数，和前面的题目重复，放弃之
/*
【程序37】
题目：对10个数进行排序
我去，又是冒泡
*/
#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int a[N], i, j, tem;
	printf("Please input 10 number:\n");
	for (i = 0; i<N; i++)
		scanf("%d", &a[i]);

	for (i = N - 1; i>0; i--)
		for (j = 0; j<i; j++)
			if (a[j]>a[j + 1])
			{
		tem = a[j];
		a[j] = a[j + 1];
		a[j + 1] = tem;
			}

	for (i = 0; i<N; i++)
		printf("%d ", a[i]);
	system("pause");
	return 0;
}
/*
【程序38】
题目：求一个3*3矩阵对角线元素之和
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3];
	int i, s = 0;
	int *p = (int *)a;
	printf("请输入这个3*3int型矩阵的各个元素:\n");
	for (i = 0; i<9; i++)
		scanf("%d", p++);

	for (i = 0; i<3; i++)
		s += a[i][i];
	printf("这个3*3矩阵对角线元素之和为:%d\n", s);
	system("pause");
	return 0;
}
/*
【程序39】
题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[11] = { 1, 3, 5, 7, 8, 11, 23, 45, 67, 89 };
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i<10 & n>a[i]; i++)
		;
	for (j = 10; j>i; j--)
		a[j] = a[j - 1];
	a[i] = n;

	printf("插入后的结果为：\n");
	for (i = 0; i<11; i++)
		printf("%d ", a[i]);
	system("pause");
	return 0;
}
/*
【程序40】
题目：将一个数组逆序输出。
真的这么简单 ,我有点质疑这是不是经典题目了
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10] = { 1, 3, 5, 7, 8, 11, 23, 45, 67, 89 }, i;
	printf("该数组逆序输出的结果为:\n");
	for (i = 9; i >= 0; i--)
		printf("%d ", a[i]);

	system("pause");
	return 0;
}
/*
【程序51~60】
题目：学习使用按位与 & ，按位或运算|，按位异或运算^按位取反运算~。　
没给出具体的题目，所以我只小结一下
按位与运算是对两个操作数逐位“求与”，当他们都为1时结果为1，否则结果为0　
1&1=1，1&1=1，0&1=0,0&0=0
即1&x=1所以可用1与来取数中的特定位。
0&x=0，所以可用0与来给数中的某些位清0
按位或运算"|"
按位或运算是对两个操作数逐位“相或”。当他们都是0时结果为0，否则结果为1
即1|x=1，所以可用1或来将数的某些位置1
0|x=x，所以可用0或来将数的某些位保持不变。
利用按位或运算还可以把一串二进制数连接到另一串二进制数后面：
先在对象字符串的末尾加上N个0，N为要连接的字符串位数，然后进行按位或操作，得到的结果即为所求。
按位异或运算“^”
按位异或运算是将两个数逐位相异或，当他们一个为1，一个为0时（即相异时）结果为1，否则为0.
1^0=1,1^1=0,0^1=1,0^0=0
即1^x=~x,0^x=x
所以可用来将数的某些位取反。
按位取反“~”
按位取反运算是将操作数进行逐位“取反”。
二进制左移运算符“<<”
二进制左移运算是把数据向左移动若干位，移出左边界的所有位都将消失，右侧新增加的位为0.
向左移动一位等同于乘以2
二进制右移运算符">>"
二进制右移运算把数据向右移动若干位时，移出右边界的所以位将丢失，左侧的新位补充规则如下：
1.对于无符号数，右移时左侧新位一律补0，称为”逻辑右移“
2.对于有符号数，若符号位是0，则左移新位一律补0,；若符号位是1，则左侧新位一律补1，称为”算术右移“
所以左移一位增大到原来2倍，右移一位减小到原来的1/2倍。
左移增加，右移减小。
*/
/*
【程序61】
题目：打印出杨辉三角形（要求打印出10行如下图）　　　
1.程序分析：
　　　 　　 1
	   　　　　　　1 　1
			 　　　　　　1 　2 　1
				   　　　　　　1　 3 　3　 1
						 　　　　　　1　 4　 6 　4 　1
							   　　　　　　1　 5　 10　10　5 　1　
									 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	int a[10][10] = { 0 };
	for (i = 0; i<10; i++)
		a[i][0] = 1;

	for (i = 1; i<10; i++)
		for (j = 1; j<i + 1; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<i + 1; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}

	system("pause");
	return 0;
}
/*
【程序66】
题目：输入3个数a,b,c，按大小顺序输出。
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, tem;
	scanf("%d%d%d", &a, &b, &c);
	if (a<b){ tem = a; a = b; b = tem; }
	if (b<c){ tem = b; b = c; c = tem; }
	if (a<b){ tem = a; a = b; b = tem; }
	printf("%d %d %d\n", a, b, c);

	system("pause");
	return 0;
}
/*
【程序67】
题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
用两个指针指向最大的和最小的
*/
#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int a[N], *pl, *ps, tem, i;
	for (i = 0; i<N; i++)
		scanf("%d", &a[i]);
	ps = pl = &a[0];
	for (i = 1; i<N; i++)
	{
		if (*pl<a[i]) pl = &a[i];
		if (*ps>a[i])ps = &a[i];
	}

	tem = a[0]; a[0] = *pl; *pl = tem;
	tem = a[N - 1]; a[N - 1] = *ps; *ps = tem;

	for (i = 0; i<N; i++)
		printf("%d ", a[i]);

	system("pause");
	return 0;
}
/*
【程序68】
题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
*/
#include<stdio.h>
#include<stdlib.h>
void move(int array[], int n, int m);
int main()
{
	int n, m, a[20], i, j, tem;
	printf("input n and m:\n");
	scanf("%d%d", &n, &m);
	printf("input array:\n");
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	move(a, n, m);

	system("pause");
	return 0;
}
void move(int array[], int n, int m)
{
	int temarray[20];
	int i, j;
	for (i = n - m, j = 0; i<n; i++, j++)
		temarray[j] = array[i];
	for (i = 0; i<n - m + 1; i++, j++)
		temarray[j] = array[i];
	for (i = 0; i<n; i++)
		array[i] = temarray[i];
}
/*
【程序69】
题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出
　　　圈子，问最后留下的是原来第几号的那位。
   */
#include<stdio.h>
#include<stdlib.h>
#define NMax 40 
int main()
{
	int a[NMax], i, j, count, n;
	printf("input n:\n");
	scanf("%d", &n);
	getchar();
	for (i = 0; i<n; i++)
		a[i] = i + 1;
	i = 0; j = 0; count = 0;

	while (count<n - 1){
		if (a[j] != 0) i++;
		if (i == 3) { count++; i = 0; a[j] = 0; }
		j++;
		if (j == n)j = 0;
	}

	for (i = 0; i<n; i++)
		if (a[i] != 0){ printf("最后剩下的是原来的第%d位\n\n", i + 1); break; }

	system("pause");
	return 0;
}
/*
【程序70】
题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。　　　
*/
#include<stdio.h>
#include<stdlib.h>
int getstrlen(char*str);
int main()
{
	char str[50];
	gets(str);
	printf("%d\n", getstrlen(str));

	system("pause");
	return 0;
}
int getstrlen(char*str)
{
	char *p = str;
	while (*(p++) != '\0')
		;
	return p - str - 1;
}
/*
【程序71】
题目：编写input()和output()函数输入，输出5个学生的数据记录。　　　
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char name[20];
	char sex[5];
	int  age;
}Stu;
void input(Stu*stu);
void output(Stu*stu);
int main()
{
	Stu stu[5];
	printf("请输入5个学生的信息：姓名 性别 年龄:\n");
	input(stu);
	printf("5个学生的信息如下：\n姓名  性别  年龄\n");
	output(stu);

	system("pause");
	return 0;
}
void input(Stu*stu)
{
	int i;
	for (i = 0; i<5; i++)
		scanf("%s%s%d", stu[i].name, stu[i].sex, &(stu[i].age));
}
void output(Stu*stu)
{
	int i;
	for (i = 0; i<5; i++)
		printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
}
/*
【程序72】
题目：创建一个链表。
*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct LNode{
	int          data;
	struct LNode *next;
}LNode, *LinkList;

LinkList CreateList(int n);
void print(LinkList h);
int main()
{
	LinkList Head = NULL;
	int n;

	scanf("%d", &n);
	Head = CreateList(n);

	printf("刚刚建立的各个链表元素的值为：\n");
	print(Head);

	printf("\n\n");
	system("pause");
	return 0;
}
LinkList CreateList(int n)
{
	LinkList L, p, q;
	int i;
	L = (LNode*)malloc(sizeof(LNode));
	if (!L)return 0;
	L->next = NULL;
	q = L;
	for (i = 1; i <= n; i++)
	{
		p = (LinkList)malloc(sizeof(LNode));
		printf("请输入第%d个元素的值:", i);
		scanf("%d", &(p->data));
		p->next = NULL;
		q->next = p;
		q = p;
	}
	return L;
}
void print(LinkList h)
{
	LinkList p = h->next;
	while (p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
}

/*
【程序76】
题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数
　　　1/1+1/3+...+1/n(利用指针函数)　　
   */
#include<stdio.h>
#include<stdlib.h>
double  evenumber(int n);
double  oddnumber(int n);

int main()
{
	int n;
	double r;
	double(*pfunc)(int);
	scanf("%d", &n);
	if (n % 2 == 0) pfunc = evenumber;
	else pfunc = oddnumber;

	r = (*pfunc)(n);
	printf("%lf\n", r);

	system("pause");
	return 0;
}
double  evenumber(int n)
{
	double s = 0, a = 0;
	int i;
	for (i = 2; i <= n; i += 2)
	{
		a = (double)1 / i;
		s += a;
	}
	return s;
}
double  oddnumber(int n)
{
	double s = 0, a = 0;
	int i;
	for (i = 1; i <= n; i += 2)
	{
		a = (double)1 / i;
		s += a;
	}
	return s;
}
/*
【程序77】
题目：填空练习（指向指针的指针）
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *s[] = { "man", "woman", "girl", "boy", "sister" };
	char **q;
	int k;
	for (k = 0; k<5; k++)
	{
		q = &s[k];       /*在这里填入内容*/
		printf("%s\n", *q);
	}
	system("pause");
	return 0;
}
/*
【程序78】
题目：找到年龄最大的人，并输出。请找出程序中有什么问题。
*/
#include<stdio.h>
#include<stdlib.h>
struct man{
	char name[20];
	int  age;
}person[3] = { "li", 18, "wang", 19, "sun", 22 };
int main()
{
	struct man *q, *p;
	int i, m = 0;
	p = person;
	for (i = 0; i<3; i++)
	{
		if (m<p->age)m = p->age;
		q = p++;
	}
	printf("%s %d\n", q->name, q->age);
	system("pause");
	return 0;
}
/*
【程序79】
题目：字符串排序。
*/
#include<stdio.h>
#include<stdlib.h>
void swap(char*str1, char*str2);
int main()
{
	char str1[20], str2[20], str3[20];
	printf("请输入3个字符串,每个字符串以回车结束!:\n");
	gets(str1);
	gets(str2);
	gets(str3);
	if (strcmp(str1, str2)>0)swap(str1, str2);
	if (strcmp(str2, str3)>0)swap(str2, str3);
	if (strcmp(str1, str2)>0)swap(str1, str2);
	printf("排序后的结果为：\n");
	printf("%s\n%s\n%s\n", str1, str2, str3);
	system("pause");
	return 0;
}
void swap(char*str1, char*str2)
{
	char tem[20];
	strcpy(tem, str1);
	strcpy(str1, str2);
	strcpy(str2, tem);
}
/*
【程序80】
题目：海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了一个，这只
　　　猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子又平均分成五份，又多了
   　　　一个，它同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴子都是这样做的，
	  　　　问海滩上原来最少有多少个桃子？
		 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x
		, i = 0, j = 1;
	while (i<5){
		x = 4 * j;
		for (i = 0; i<5; i++)
		{
			if (x % 4 != 0){ break; }
			x = (x / 4) * 5 + 1;
		}
		j++;
	}
	printf("%d\n", x);

	system("pause");
	return 0;
}
/*
【程序80】
题目：海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了一个，这只
　　　猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子又平均分成五份，又多了
   　　　一个，它同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴子都是这样做的，
	  　　　问海滩上原来最少有多少个桃子？
		 这个题目单从数学上来说有很简单的做法见这位大神的博客
		 http://blog.csdn.net/yupenghua/article/details/6803494
		 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x
		, i = 0, j = 1;
	while (i<5){
		x = 4 * j;
		for (i = 0; i<5; i++)
		{
			if (x % 4 != 0){ break; }
			x = (x / 4) * 5 + 1;
		}
		j++;
	}
	printf("%d\n", x);

	system("pause");
	return 0;
}
/*
【程序81】
题目：809*??=800*??+9*??+1 其中??代表的两位数,8*??的结果为两位数，9*??的结果为3位数。求??代表的两位数，及809*??后的结果。
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i;
	for (i = 10; i<100; i++)
		if (8 * i<100 && 9 * i>99 && 9 * i<1000)
		{
		printf("??代表的两位数为：%d\n", i);
		break;
		}
	printf("809*%d==800*%d+9*%d+1\n", i, i, i);

	system("pause");
	return 0;
}
/*
【程序82】
题目：八进制转换为十进制
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0, i = 0;
	char s[20];
	printf("请输入一个8进制数:\n");
	gets(s);
	while (s[i] != '\0'){
		n = n * 8 + s[i] - '0';
		i++;
	}
	printf("刚输入的8进制数转化为十进制为%d", n);

	system("pause");
	return 0;
}
/*
【程序83】
题目：求0—7所能组成的奇数个数。
用1,3,5,7作个位，0不能作最高位。一位数，两位数。。。7位数
*/
#include<stdio.h>
#include<stdlib.h>
int factorial(int a, int b);/*求阶乘*/
int main()
{
	int sum = 0, i;
	sum += 4; /*一位数不能按下面处理，一位数时的奇数有4个*/
	for (i = 2; i<8; i++)
		sum += 4 * (factorial(7, i - 1) - factorial(6, i - 2));
	printf("可以组成%d个奇数\n", sum);
	system("pause");
	return 0;
}
int factorial(int a, int b)
{
	int i, sum = 1;
	if (b <= 0)return 1;
	for (i = 0; i<b; i++)
		sum *= (a - i);
	return sum;
}
/*
【程序84】
题目：一个偶数总能表示为两个素数之和。
我去，这是什么题目，要我证明这个问题吗？真不知道怎么证明。那就把一个偶数分解成两个素数吧。
*/
#include<stdio.h>
#include<stdlib.h>
int Isprimer(unsigned int n);
int main()
{
	unsigned int n, i;
	do{
		printf("请输入一个偶数:\n");
		scanf("%d", &n);
	} while (n % 2 != 0);
	for (i = 1; i<n; i++)
		if (Isprimer(i) && Isprimer(n - i))
			break;
	printf("偶数%d可以分解成%d和%d两个素数的和\n", n, i, n - i);

	system("pause");
	return 0;
}
int Isprimer(unsigned int n)
{
	int i;
	if (n<4)return 1;
	else if (n % 2 == 0)return 0;
	else
		for (i = 3; i<sqrt(n) + 1; i++)
			if (n%i == 0)return 0;

	return 1;
}
/*
【程序85】
题目：判断一个素数能被几个9整除
丫的！这题目的意思是判断一个素数能整除几个9组成的数吧？我就这么理解吧。素数是不
能被除1和自身之外的数整除的
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p, i;
	long int sum = 9;
	printf("请输入一个素数:\n");
	scanf("%d", &p);
	for (i = 1;; i++)
		if (sum%p == 0)break;
		else sum = sum * 10 + 9;

		printf("素数%d能整除%d个9组成的数%ld\n", p, i, sum);



		system("pause");
		return 0;
}
/*
【程序86】
题目：两个字符串连接程序
真的这么简单吗？用strcat就行了
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
char* strconnect(char *str1, char *str2);
int main()
{
	char str1[20], str2[20];
	char *str;
	puts("请输入两个字符串，用回车分开:");
	gets(str1);
	gets(str2);
	str = strconnect(str1, str2);
	puts("连接后的字符串为:");
	puts(str);
	system("pause");
	return 0;
}
char* strconnect(char *str1, char *str2)
{
	char*str;
	str = (char*)malloc(strlen(str1) + strlen(str2) + 1);
	str[0] = '\0';
	strcat(str, str1);
	strcat(str, str2);
	return str;
}
/*
【程序88】
题目：读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的＊。
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, j;
	for (i = 0; i<7; i++)
	{
		scanf("%d", &n);
		if (n>50){ printf("请重新输入:\n"); i--; }
		else
		{
			for (j = 0; j<n; j++)
				printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
/*
【程序89】
题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下：
　　　每位数字都加上5,然后用和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
   这是什么题啊？是要我加密呢？还是解密呢？
   那我就加密吧！
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d, tem;
	char str[5];
	printf("输入一个要加密的四位整数:\n");
	gets(str);
	a = (str[0] - '0' + 5) % 10;
	b = (str[1] - '0' + 5) % 10;
	c = (str[2] - '0' + 5) % 10;
	d = (str[3] - '0' + 5) % 10;
	tem = a; a = d; d = tem;
	tem = b; b = c; c = tem;
	tem = a * 1000 + b * 100 + c * 10 + d;

	printf("加密后的数为%d\n", tem);

	system("pause");
	return 0;
}
/*
【程序96】
题目：计算字符串中子串出现的次数
暂时不想用KMP算法了
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i, j, k, TLen, PLen, count = 0;
	char T[50], P[10];
	printf("请输入两个字符串，以回车隔开，母串在前，子串在后：\n");
	gets(T);
	gets(P);
	TLen = strlen(T);
	PLen = strlen(P);
	for (i = 0; i <= TLen - PLen; i++)
	{
		for (j = 0, k = i; j<PLen&&P[j] == T[k]; j++, k++)
			;
		if (j == PLen)count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
/*
【程序97】
题目：从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止。
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp = NULL;
	char filename[25];
	char ch;
	printf("输入你要保存到的文件的名称：\n");
	gets(filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("error: cannot open file!\n");
		exit(0);
	}
	printf("现在你可以输入你要保存的一些字符，以#结束：\n");
	getchar();
	while ((ch = getchar()) != '#'){
		fputc(ch, fp);
	}
	fclose(fp);
	system("pause");
	return 0;
}
/*
【程序98】
题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件“test”中保存。
　　　输入的字符串以！结束。
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp = NULL;
	char str[50];
	int i, len;
	printf("输入一个字符串：\n");
	gets(str);
	len = strlen(str);
	for (i = 0; i<len; i++)
	{
		if (str[i] <= 'z'&&str[i] >= 'a')
			str[i] -= 32;
	}
	if ((fp = fopen("test", "w")) == NULL)
	{
		printf("error: cannot open file!\n");
		exit(0);
	}
	fprintf(fp, "%s", str);
	fclose(fp);

	system("pause");
	return 0;
}
/*
【程序99】
题目：有两个磁盘文件A和B,各存放一行字母，要求把这两个文件中的信息合并（按字母顺序排列），
　　　输出到一个新文件C中。
   题目没交代清楚A文件和B文件中的字母是不是有序的。我就当做没序吧！合并后冒泡排序就好！
   */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE*fa, *fb, *fc;
	int i, j, k;
	char str[100], str1[100];
	char tem;
	if ((fa = fopen("A.txt", "r")) == NULL)
	{
		printf("error: cannot open A file!\n");
		exit(0);
	}
	fgets(str, 99, fa);
	fclose(fa);
	if ((fb = fopen("B.txt", "r")) == NULL)
	{
		printf("error: cannot open B file!\n");
		exit(0);
	}
	fgets(str1, 100, fb);
	fclose(fb);
	strcat(str, str1);
	for (i = strlen(str) - 1; i>1; i--)
		for (j = 0; j<i; j++)
			if (str[j]>str[j + 1])
			{
		tem = str[j];
		str[j] = str[j + 1];
		str[j + 1] = tem;
			}

	if ((fc = fopen("C.txt", "w")) == NULL)
	{
		printf("error: cannot open C file!\n");
		exit(0);
	}
	fputs(str, fc);
	fclose(fc);
	system("pause");
	return 0;
}
/*
【程序100】
题目：有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），计算出
　　　平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中。
   */
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int ID;
	int math;
	int English;
	int C;
	int avargrade;
	char name[20];
}Stu;
int main()
{
	FILE*fp;
	Stu stu[5];
	int i, avargrade = 0;
	printf("请输入5个同学的信息：学生号，姓名，3门成绩:\n");
	for (i = 0; i<5; i++)
	{
		scanf("%d%s%d%d%d", &(stu[i].ID), stu[i].name, &(stu[i].math), &(stu[i].English), &(stu[i].C));
		stu[i].avargrade = (stu[i].math + stu[i].English + stu[i].C) / 3;
	}

	if ((fp = fopen("stud", "w")) == NULL)
	{
		printf("error :cannot open file!\n");
		exit(0);
	}
	for (i = 0; i<5; i++)
		fprintf(fp, "%d %s %d %d %d %d\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English,
		stu[i].C, stu[i].avargrade);

	fclose(fp);
	system("pause");
	return 0;
}