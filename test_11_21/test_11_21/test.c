#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    printf("num = %d\n", num);
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//


/*
	ţ����
		BC18 ����������
		����
		������������a��b(0 < a, b < 10, 000)������a����b�������̺�������
			����������
			һ�У�������������a��b������Ϊ�������ͳ�������Ϊ�㣩���м��ÿո������
			���������
			һ�У�������������������Ϊ�����̺��������м���һ���ո������

			ʾ��1
			���룺
			15 2
			����
			�����
			7 1
*/

//����
#include <stdio.h>

int main()
{
    unsigned int a;
    int b;
    scanf("%d %d", &a, &b);
    int c = 0;
    int d = 0;
    c = a / b;
    d = a % b;
    printf("%d %d", c, d);
    return 0;
}

