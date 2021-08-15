#define _CRT_SECURE_NO_WARNINGS
【程序1】
题目：判断101 - 200之间有多少个素数，并输出所有素数。
1.程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，
则表明此数不是素数，反之是素数。
2.程序源代码：
#include <stdio.h>
int IsPrime(int n){
	int i = 2;
	for (i = 2; i <= sqrt(n); i++){
		if (n%i == 0)
			return 0;
	}
	return 1;

}

int main(){
	int i;
	for (i = 100; i <= 200; i++){
		if (IsPrime(i))
			printf("%d ", i);
	}
	return 0;
}
---------------------------------------------------------------------------- -

【程序2】
题目：将一个正整数分解质因数。例如：输入90, 打印出90 = 2 * 3 * 3 * 5。
程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：
(1)如果这个质数恰等于n，则说明分解质因数的过程已经结束，打印出即可。
(2)如果n<>k，但n能被k整除，则应打印出k的值，并用n除以k的商, 作为新的正整数你n,

重复执行第一步。
(3)如果n不能被k整除，则用k + 1作为k的值, 重复执行第一步。
2.程序源代码：
#include <stdio.h>
int main(){
	int i, n;
	scanf("%d", &n);
	printf("%d=", n);
	for (i = 2; i <= n; i++){
		while (n != i){
			if (n%i == 0){
				printf("%d*", i);
				n = n / i;
			}
			else{
				break;
			}
		}
	}
	printf("%d", n);
	return 0;
}

---------------------------------------------------------------------------- -
【程序3】
题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
1.程序分析：利用辗除法。
2.程序源代码：

#include <stdio.h>

int main(){
	int num1, num2, x, y, temp;
	scanf("%d %d", &num1, &num2);
	x = num1>num2 ? num1 : num2;//x保存较大的数
	y = num1 + num2 - x;
	while (x != 0){
		temp = y%x;
		y = x;
		x = temp;
	}
	printf("最大公约数：%d\n", y);
	printf("最小公倍数：%d\n", num1*num2 / y);
}
