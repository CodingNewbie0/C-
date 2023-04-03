//#author ¹ÚÈ¿Ã¢
#ifndef __CALCULATOR_H_
#define __CALCULATOR_H_
using namespace std;

class Calculator
{
private:
	double x = 0.0;
	double y = 0.0;
	char oper = ' ';
public:
	double Calculate(double x, double y, char cper);
};

#endif