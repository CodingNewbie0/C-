//#author 박효창
#include <windows.h>
#include <iostream>
#include "Calculator.h"
using namespace std;

double Calculator::Calculate(double x, double y, char oper)
{
	switch (oper)
	{
	case '+':
		return	x + y;
	case '-':
		return	x - y;
	case '*':
		return	x * y;
	case '/':
		if (y == 0){
		system("cls");
		cout << "무한수 입니다. " << endl;
		cout << "프로그램을 다시 실행하십시오." << endl;
		system("pause");
		return 0;
		}
		return	x / y;
	default:
		return 0;
	}
};