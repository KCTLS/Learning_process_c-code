#define _CRT_SECURE_NO_WARNINGS
���ֳ�����BUG



�������ЩС�����������ƽʱ���׷����������ǰû�з����ϼӷ���������һ��Ҫע�⣬�⼸��ܾ����.(���ż�)




1.

void Test()
{
	char pcArray[10];
	strncpy(pcArray, "hello", 5);
	printf("%s\n", pcArrat);
	return;
}

��δ�������Ҫ֪����strncpy���÷����Լ����Ĳ�����char *strncpy(char *dest, const char *src, int n)����src��ָ�����



��������src��ַ��ʼ��ǰn���ֽڸ��Ƶ�dest��ָ�������У�������dest�����������������ַ������ݡ�hello\0������Ϊ / 0һ�㲻



��д����������Ӧ����6���ֽڣ�������5���ֽڡ�һ��Ҫ��Ϥ�����Ĳ�������ԭ�Ͳ����ã��������׳������⡣



2.

#define BUFFER_SIZE 256
void GetMemory(char **ppszBuf��
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


����⣬��������һ�£�������˼������pszBufָ��ָ��һ�ο��ٺõĿռ䣬Ȼ���ٵ���strcpy���ַ��������ռ���뷨����



���Ǻ�����������ܴ󣬴�Ҷ�֪�����������ڵĶ�����ʱ���������Ե���ʹ������������Ҳ�������������malloc�����Ŀռ�



��������У�ʣ�µĿռ䶼�黹������ϵͳ�ˣ��������ʱ��������¼�㿪�ٵĿռ��ָ��ppszBufҲ���ͷ��ˣ�Ҳ��������ڴ�



й©�����У������ߵ�test������strcpy�е�ʱ��ʱ��pszBufָ�벢û���ı仹��Ϊ�գ���ʱ��ͳ������ڴ����Խ�磬�����



�������������������Խ�GetMemory�����е�ppszBufָ��return��������ʱ������п��ٿռ�ĵ�ַ�ˡ�





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

������أ�����ֻ����һ��ѭ����������˼���Ӧ�ú��������ף�������ulCount��0�ӵ��������ֵ���������ǿ�һ������֮ǰӦ



��֪���������ͣ����һ���޷��ų����͵����֣�����������û�и����ģ��������0��ʱ���ڼ�һ���ͻ������Ϳ��Ա�ʾ����



��ֵ4294967295 Ҳ����(2 ^ 32 - 1)�����������ѭ������һ����ѭ�������������ڴ���������һ��Ҫ�ȿ����������ͣ����ͺ���



Ҫ��



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

������أ���ʵ�������ҵ��ģ����ǿ����������Ƿ���pָ�룬���Ƕοռ����Ƿ������ˣ�������û���˽�������������main������



��ʼ����strû�н��չ��Ƕοռ䣬���ں�������Ȼ�������ˣ����������βΰ������˺����Ͳ������ˣ��βγ��˺������ͷţ�����



����p������û�н��գ�str��Ϊ�գ������أ��ڴ����Խ�磬str����ɶ��û�У��㻹Ҫ��������Ծ��������ˡ�



��ס���β���ʵ�ε�һ����ʱ������





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

����⻹�����͵����⣬�����ɣ��һ�һ��ͼ˵��һ�����⡣









�������ǿ���������Ҫ��ӡ�� ulGloba, �����Ҫ��������׼���ˣ���Ϊ����ӡ�������Բ���1.



ԭ��ͼ���Ѿ��������





6.



AAA�ĳ�����gui_show_image�������ִ�м�����������.




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



�����������һ���ϵ��������ǰд��һ�󴮣�����ͼ���˵�ˣ��������ȿ���AAA �� BBB�Ƿֿ�����ģ��������������п���



ʹBBB�ĺ궨��ʧЧ��Ӧ�������ǵ�����д��һ�����С�



��Ϊ��ѧϰC����Ҳû��ã��㲻�Ϻõģ�������ʲô�����лָ��������д��ô�࣬�Ժ�Ӧ�û��в��䡣


��������������������������������
��Ȩ����������ΪCSDN������Dawn_sf����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https ://blog.csdn.net/Dawn_sf/article/details/56666675