//#author ��ȿâ
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
		cout << "���Ѽ� �Դϴ�. " << endl;
		cout << "���α׷��� �ٽ� �����Ͻʽÿ�." << endl;
		system("pause");
		return 0;
		}
		return	x / y;
	default:
		return 0;
	}
};