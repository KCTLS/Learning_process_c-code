#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n��ֵΪ:%d\n", n);
	printf("*pFloat��ֵΪ:%f\n", *pFloat);

	*pFloat = 9.0;
	printf("num��ֵΪ:%d\n", n);
	printf("*pFloat��ֵΪ:%f\n", *pFloat);
	return 0;
}
//5.0
//102.0
//1.02*2^2
//(-1)^0*1.02*2^2
