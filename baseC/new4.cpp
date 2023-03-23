#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
	char str1[] = "Result";
	char str2[30];

	strcpy_s(str2, str1);
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, abs(-1.24));
	return 0;
}