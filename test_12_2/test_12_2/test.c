#define  _CRT_SECURE_NO_WARNINGS 1




//д���뽫�������������Ӵ�С�����
//
//���磺
//
//���룺2 3 1
//
//�����3 2 1

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (b > c)
//		{
//			printf("%d %d %d", a, b, c);
//		}
//		else
//		{
//			printf("%d %d %d", a, c, b);
//		}
//	}
//	else if (a > c)
//	{
//		printf("%d %d %d", b, a, c);
//	}
//	else if (b > c)
//	{
//		printf("%d %d %d", b, c, a);
//	}
//	else
//	{
//		printf("%d %d %d", c, b, a);
//	}
//
//	return 0;
//}


//����
//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//����������
//��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0 < a, b, c < 1000)����Ϊ�����ε������ߣ��ÿո�ָ���
//���������
//���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!����
//�����������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����

//#include <stdio.h>
//
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    while (scanf("%f%f%f", &a, &b, &c) == 3)
//    {
//        if (a > 0 && a < 1000 && b>0 && b < 1000 && c>0 && c < 1000)
//        {
//            if (a + b > c && a + c > b && b + c > a)
//            {
//                if (a == b && a == c)
//                {
//                    printf("Equilateral triangle!\n");
//                }
//                else if (a == b || a == c || b == c)
//                {
//                    printf("Isosceles triangle!\n");
//                }
//                else
//                {
//                    printf("Ordinary triangle!\n");
//                }
//
//            }
//            else
//            {
//                printf("Not a triangle!\n");
//            }
//
//        }
//    }
//    return 0;
//}

//����
//1.��Ĳ�������||����д����or
//2.������ȵıȽϲ�������==����д���˸�ֵ=
//3.û�л��д�ӡ


//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
//#include <stdio.h>
//
//int main()
//{
//	float sum1 = 0;
//	float sum2 = 0;
//	float sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum1 = sum1 + 1.0 / i;
//		}
//		else
//		{
//			sum2 = sum2 + 1.0 / i;
//		}
//	}
//	sum = sum1 - sum2;
//	printf("%f", sum);
//	return 0;
//}

//�����ø��������庯��sum
//������1.0 / i �õ���������


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
// 
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			sum += 1;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//��ӡ1000�굽2000��֮�������

//#include <stdio.h>
//
//int main()
//{
//	int y = 1000;
//	for (y; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//		}
//		else if (y % 400 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}



//��10 �����������ֵ

#include <stdio.h>

int main()
{
	int num0 = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	int num7 = 0;
	int num8 = 0;
	int num9 = 0;
	int MAX = 0;
	scanf("%d%d%d%d%d%d%d%d%d%d", &num0, &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9);
	MAX = num0 > num1 ? num0 : num1;
	MAX = MAX > num2 ? MAX : num2;
	MAX = MAX > num3 ? MAX : num3;
	MAX = MAX > num4 ? MAX : num4;
	MAX = MAX > num5 ? MAX : num5;
	MAX = MAX > num6 ? MAX : num6;
	MAX = MAX > num7 ? MAX : num7;
	MAX = MAX > num8 ? MAX : num8;
	MAX = MAX > num9 ? MAX : num9;
	printf("%d", MAX);
	return 0;

//����ʹ������������

//����������Ҳ����Ŀ����������Ҫ���������������ģ���ʽ���£�
//	 exp1 ? exp2 : exp3
//�����������ļ����߼��ǣ�	���exp1 Ϊ�棬 exp2 ���㣬����Ľ�����������ʽ�Ľ����
//							���exp1 Ϊ�٣� exp3 ���㣬����Ľ�����������ʽ�Ľ����
}