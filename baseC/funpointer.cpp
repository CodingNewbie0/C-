#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int add(int n1, int n2)
{
	return n1 + n2;
}
int sub(int n1, int n2)
{
	return n1 - n2;
}

int main(void)
{
	int res;
	int (*fp)(int, int); // 함수포인터 선언
	fp = add;
	res = fp(10, 20);
	printf("%d\n", res);
	fp = sub;
	res = fp(20, 10);
	printf("%d\n", res);

	return 0;
}