#define  _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//    int num = 0;
//    while (scanf("%d", &num) == 1)
//    {
//        if (140 <= num)
//        {
//            printf("Genius");
//        }
//    }
//
//    return 0;
//}

//���⣺��scanf�ķ���ֵ����

#include <stdio.h>

int main()
{
    long long a = 0;
    long long b = 0;
    while (scanf("%lld %lld", &a, &b) == 2)
    {
        if (a > b)
        {
            printf("%lld>%lld\n", a, b);
        }
        else if (a == b)
        {
            printf("%lld=%lld\n", a, b);
        }
        else
        {
            printf("%lld<%lld\n", a, b);
        }
    }
    return 0;
}

//���⣺���������ͳ�������������printf����ռλ����ʹ�á��Լ�\n���з�����ʹ�á�