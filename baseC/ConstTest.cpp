#include <stdio.h>	// c소스의 헤더파일 

int main()
{
	//int num = 10;
	//printf("num: %d\n", num);

	//num = 20;
	//printf("num: %d\n", num);
	/*
	int num = 20; // 상수화 동시에 초기화
	printf("num: %d\n", num);
	//num = 20;
	int* p = &num;  // 주소를 저장할 수 있는 포인터변수, &(주소연산자)
	printf("p에 저장된 값 : %p\n", p);
	printf("p에 참조하는 값 : %d\n", *p);
	*p = 100; // 간접창조연산자
	printf("P가 가리키는곳의 데이터값 : %d\n", *p);
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
	const int* pa = &num1; // 데이터의 상수화
	printf("pa : %p\n", pa);
	pa = &num2;
	printf("변경 후 pa : %p\n", pa);
	// *pa = 50; // 데이터값 상수

	int* const pb = &num1; // 포인터변수의 상수화
	// pb = &num2;
	*pb = 70;

	return 0;
}