#include <stdio.h>	// c�ҽ��� ������� 

int main()
{
	//int num = 10;
	//printf("num: %d\n", num);

	//num = 20;
	//printf("num: %d\n", num);
	/*
	int num = 20; // ���ȭ ���ÿ� �ʱ�ȭ
	printf("num: %d\n", num);
	//num = 20;
	int* p = &num;  // �ּҸ� ������ �� �ִ� �����ͺ���, &(�ּҿ�����)
	printf("p�� ����� �� : %p\n", p);
	printf("p�� �����ϴ� �� : %d\n", *p);
	*p = 100; // ����â��������
	printf("P�� ����Ű�°��� �����Ͱ� : %d\n", *p);
	printf("num: %d\n", num);
	*/

	const int num = 10;
	// num = 100;
	printf("num : %d\n", num);

	int* p = &num;
	*p = 100;
	printf("num : %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1; // �������� ���ȭ
	printf("pa : %p\n", pa);
	pa = &num2;
	printf("���� �� pa : %p\n", pa);
	// *pa = 50; // �����Ͱ� ���

	int* const pb = &num1; // �����ͺ����� ���ȭ
	// pb = &num2;
	*pb = 70;

	return 0;
}