#define _CRT_SECURE_NO_WARNINGS
������C�����﷨֪ʶ
//  �����ҵĵ�һ��C���Դ���
#include <stdio.h>
int main()  //  ����������
{
	printf("Hello World\n");    //  д��һ����Hello World
	printf("Welcome to CPL World\n");   //  д�ڶ�����Welcome to CPL World
	return 0;   //  ����������ֵ
}
�������Ѿ������˵�һ��ʾ�������Ч���ˣ��ܼ򵥾�������Ļ������������ַ���һ����"Hello World"���ڶ�����"Welcome to CPL World"�����ǽ���˽�һ��C���Ե�һЩ����֪ʶ��

1. ������
������������main��һ����׼����������������

int main()  //  ����������
{
	return 0;   //  ����������ֵ
}
TIPS:

main����Ҫ��; ����Ҫ����˼��

˫б��//: ˫б�ܺ����Ϊע�ͣ�ע�;���д�������˿��ġ�����д�����ͬ�£�����������Ϊʲô������д��ע�Ͳ��ᱻ�������뱻���롣

2. ʲô�Ǻ���
�������أ�������̸̸ʲô�Ǻ�����������������������






�ǵģ�����������ѧ����ĺ����������������ĺ�����������кܴ�Ĳ�ͬ���ڱ���������棬����԰Ѻ�������һ�����ӣ������������ô�������ԣ�

������Ը���������һЩ������ֵ��
��������������һЩ����
�������Է��ظ�����һЩ������ֵ��





�����ǿ������ǵ����������������3�������ϣ��ֱ�����ʲô��






������ʲô��û������
��������ӡ�������ֵ���Ļ��
������������0





�����ǲ��Ǿ��������أ����У�int�����˺����ķ���ֵ���ͣ�int��integer������������д��main�Ǻ�������main�����()�����������Ϊ�ա�return��������ķ���ֵ��Ϊ0����0��һ����������int���ͺ�����ǰ���int��Ӧ��

���룺

integer��������

return�Ƿ��ء�

int��integer����д������ʾ�������ͣ�������͡�

�����ܽ�һ�º�����д����ʽ��

��������ֵ���� ������(�����������ֵ)
{
	return ��������ֵ;
}
3. дһ���Լ��ĺ���
���磬����дһ�������ӷ���������������add���Զ��庯���ĺ��������԰����Լ���ϲ����д����д��aaaaaҲ�С�������Ϊ�˺�����ӵ�����廯������һ��ʹ��Ӣ��ƴд����Ϊ���������������������������������ǵĺ͡�

int add(int a, int b)  //  ��һ�δ��뱻��֮Ϊadd�����ĺ�������
{
	return a + b;
}





�õģ�������д����һ��add�����ˡ���һ�δ��뱻��֮Ϊadd�����ĺ������塣

��������Ҫ������ʹ�����أ�add������ֱ����������ǲ��еģ����е�C���Դ��붼��һ����ڣ������ھ���������main�����Ǳ�����������������add���������

����������ǽ����������á�

����Ҳ��ζ�ţ�ÿ��C���Դ��룬ֻ������ֻ��һ��main������main��������Ҫ�У�����˭����ʼһ�С�main����ֻ����һ�������������ĸ�main�Ĵ��룿

#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}

int main()
{
	int result;
	result = add(2, 3);
	printf("%d", result);
	return 0;
}
����mainִ�е�ʱ�򣬾ͻ�ִ�����Ǳ�д��add�����ˡ����Ǵ���2��������add��ע��Ŷ�������Ķ����й涨��2�����������ǵ��õ�ʱ��Ҳ���봫2������������Ҳ��Ҫһ�£��������ᱨ���ġ�

������ʱ�����ۺ��������Ͷ�������𣬱����������ĸ�������ڳ�ѧ�����⡣��ˣ��뽫��ʱ�����������ŵ��������õ�ǰ�档











�������ô���⣬�ڵ��õ����������ʱ���ұ���֪��add���������һ�������������Ա��ҵ��ã���һadd��һ�����������أ��㼴û�ж��壬Ҳû�����������������ĸ�����ʱ�����룩����ô��������֪��add�Ǹ�ʲô���������Ա���ᱨ������ˣ��뽫��������ŵ���������ǰ������ʱ��

��ô��Ȼ�أ����ǻ��뵽���������Ǳ�˭���õģ��������ķ���ֵ������int��

�������ڳ���ʼ��ʱ���Զ����ã���ˣ��������������������ڡ�

�������ķ���ֵ�᷵�ظ�������������Ӧ�ã�C���Թ涨�������з���ֵ�ұ�����int��

4. ����
���⣬������Ҫ��һ������������add���س�����ֵѽ�����ԣ�������addǰ�涨����һ��int���ͱ�����ʲô�Ǳ����أ����ǿ��Ա��������������һ�������ӣ��������װ�κ������ĺ�������һ�µ�ֵ��resultֻ�����Ǹ������һ�����֣���Ȼ����������������������he����xiangzi�������ԡ����ǰ�add���ػ�����5��װ����result����ˣ�result��ֵ��5�ˡ�

= �Ⱥţ��Ǹ�ֵ�ţ��������Ѿ��������а�ĳһ��ֵװ�������Ĺ����ˡ��ͺ���һ��������� = �ź���ѧ����ĵȺţ�Ҳ���кܴ�ͬ�ġ������ = �Ǹ�ֵ�ţ�������ȵ���˼��

��ֵ�ţ����ܽ� = ���ұߵ�ֵ��װ����ߵı�����һ�ַ��š�

��ͼ����add��������2, 3Ϊ���룬����5������ֵ�� = ��ֵ��result�������ˡ�




�������ܲ�������д�أ�ȥ��int result; ��һ����

int main()
{
	result = add(2, 3);
	printf("%d", result);
	return 0;
}
���ǲ��еģ����������ȶ����ʹ�á�����֮�����֪��������ʲô���͵ģ�������������ָ����int���͡�

int result;
���壬��һ�����������ֽ�result��������int�������������漴��ʹ�����result�����ˡ�

5. ���泣��
��ô��2, 3���費��Ҫ�����أ�

����Ҫ�������ǳ������޷������ġ�����д���������Ѿ�֪�����������͵ĳ����ˡ�

ͬ���ģ��ַ������泣��Ҳ����Ҫ�����壬���磺"Hello World\n"�������Ű����ģ�������Ϊ����һ���ַ�������������������ʶ����

ʲô�ǳ������ܱ������أ��������ǿ���ͨ����ֵ�����ģ��������ܸ��ģ������㲻�ܶ������и�ֵ��

2 = 3;  //  ����
"Hello" = "World";  //  ����
6. ���ۺ��������뺯������
�����У����Ƕ�����һ��add�������������£�

int add(int a, int b)
{
	return a + b;
}
�������������е������add�������������£�

result = add(2, 3);
�ں�������Ĳ����б����棬��������ǰ���˵�������������ȶ��壬��ʹ�á���ˣ����Ƕ����˱���a��b��

�ں������õ�ʱ��������Ҫ����һЩʲô�������뺯�������������������������ͳ�����2��3���������������泣���������趨�壬����ֱ�������á��벻Ҫд��������ʽ��

result = add(int 2, int 3); //  �������ʽ
��������Ǵ��뺯���Ĳ������泣�������Ǳ�����Ӧ����ôд�أ�

int a, b;
a = 2;
b = 3
result = add(a, b);
��ע�⣬�����a��b��add���������a��b�ǲ�ͬ�ġ�������Ȼ����һ�������ǲ���ͬһ���������������õ�ʱ�򣬻Ὣ�������a��b��ֵ�����ݸ������ڵ�a��b����һ���ܼ򵥵ķ������������ǣ�{}������Ϊһ�������򣬲�ͬ�������ڵ�ͬ������������ͬһ��������

����a, b�Ѿ������涨����ˡ����Բ���Ҫ������һ���ˡ�����Ĵ����Ǵ���ġ�

int a, b;
a = 2;
b = 3
result = add(int a, int b); //  �������ʽ
�����Ȼ������������������д����������ʽ:

int a, b;   //  ��ȷ
���ǣ���������ʱ�Ĳ����б�������������д��

int add(int a, b) //  ����  
{
	return a + b;
}
7. #include��printf
���ǰ�result��ֵΪ5����������һ�������������������printf����������������5��ӡ����Ļ�ϡ�������϶��е��ɻ�Ϊʲô����дHelloWorld��ʱ��ֻ����1��������printf������ȴ�ܴ�2�������أ����Ǻ����Ķ���ʱ�Ĳ���������������Ҫ�ͺ�������ʱ��ı���һ�������⣬���printf������˭������أ��Եģ���ע�⵽�ˡ�






ʵ���ϣ�printf�������������Ƕ���ĺ���������ϵͳ�Դ��ĺ��������������д���ļ�stdio.h�У�����Ҫʹ��printf�ͱ�������Ĵ��븴�Ƶ����ǵĴ�������������#include�������������һ�㡣printf��һ�����ر�ĺ���������һ����κ��������Կ��Խ��ܿɱ����������͵����������������������̫�����ģ���ʱֻ��Ҫʹ�������ɡ�

TIPS��

stdio.h���沢δ����printf������������������printf�����ĺ������������ǣ��ڵ�ǰ�׶����棬���������Ϊstdio.h���棬д��printf�ĺ������塣

��������Ҫ����һ��printf�������ȿ����¼���ʾ����

���ڴ�ӡһ��������printf("%d", ����);

printf("%d", 12345);
���ڴ�ӡ����������printf("%d\n%d\n", ����1, ����2);

\n��ʾ���У����Ǵ���һ�п�ʼ�ټ�����ӡ

printf("%d\n%d\n", 123, 456);
���ڴ�ӡһ���ַ���printf("%s\n", "�ַ��ַ��ַ�");

printf("%s\n", "HelloWorld");
d��ʾ���ͣ�s��ʾ�ַ����������������ַ������뱻˫���Ű����� ��Ҳ��Ϊʲô�����ڿ�ͷ��ʾ��helloworld�У�������Ӣ���ַ�������˫���Ű�����ԭ���ˡ�

printf("%s\n", "HelloWorld"); ��ȷ
printf("%s\n", HelloWorld); ���󣬱���������ΪHelloWorld��һ���������������������û�б����塣





�������ܽ�һ��printf�Ĺ�ʽ

printf("XXXռλ1 XXX ռλ2 XXXռλ3", �滻1, �滻2, �滻3);

printf�ĵ�һ�������������ַ���(��˫���Ű���)�����У�ռλ�á�%+���͡���ʾ���������͵�ռλΪ%d���ַ�����ռλΪ%s��������滻�������������滻ǰ���ռλ��printf��һ���䳤����������ֻҪ��һ���ַ�������ռλ��д���ˣ���������Լ��������滻��






8. ���
����Ĵ����У��������ں���{}�в����Է��; ��β�Ĵ��롣���ǳ���Ϊһ����䡣ע��#include������䣬����Ԥ����������Բ���Ҫ��Ž�β��

TIPS :

�����ע�⣬C�����еķ��Ŷ���Ӣ�ķ��š��뽫���뷨�л�ΪӢ�ģ���������š����ķ��ź�Ӣ�ķ������в��ġ�

���ķ��ŷ�ţ�

Ӣ�ķ��ŷ��;

���ķ������ţ���

Ӣ�ķ�������()

���ķ���˫���š���

Ӣ�ķ���˫����""

�����ǲ�ͬ��

- THE END -