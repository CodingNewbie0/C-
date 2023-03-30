#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Myclass {
	int value;
public:
	Myclass(int avalue) : value(avalue){}
	Myclass operator+(const Myclass & other) const {
		return Myclass(value + other.value);
	}
	void print() {
		cout << value << endl;
	}
};
int main(void)
{
	Myclass a(10);
	a.print();

	Myclass b(10);
	b.print();

	Myclass c = b;
	c.print();

	Myclass d= a + b + c;
	d.print();

	return 0;
}