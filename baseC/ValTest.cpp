#include <stdio.h>

int main(void)
{
	/*
	int num = 10; // 초기화
	int num1; // 변수선언
	num1 = 20; // 대입
	num = 30;
	printf("int의 크기 : %d\n", sizeof(int));

	char ch; // 문자타입
	printf("ch의 크기 : %d\n", sizeof(char));

	double d = 3.14;
	printf("double의 크기 : %d\n", sizeof(double));
	*/

	char ch = 0x7f; // 16진법: 0~9,A,B,C,D,E,F 까지 16개의 문자로 나타낸 진법
					// 0b 0111 1111(8bit) - 8 4 2 1
	unsigned char ch1 = 0x7f;
	printf("ch : %x \t ch : %d\n", ch, ch);
	printf("ch1 : %x \t ch1 : %d\n", ch1, ch1);

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;
	printf("ch2 : %x \t ch2 : %d\n", ch2, ch2);
	printf("uch2 : %x \t uch2 : %d\n", uch2, uch2);

	uch2 = uch2 << 1; // 비트연산자. uch2를 왼쪽으로 1bit만큼 이동시킨다.
	ch2 = ch2 << 1;
	printf("uch2 << 1: %x \t ch2 << 1 : %x\n", uch2, ch2);

	uch2 = 0x9f;
	ch2 = 0x9f;
	uch2 = uch2 >> 1; // 비트연산자. uch2를 왼쪽으로 1bit만큼 이동시킨다.
	ch2 = ch2 >> 1;
	printf("uch2 >> 1: %x \t ch2 >> 1 : %x\n\n", uch2, ch2);

	return 0;

}