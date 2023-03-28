#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class StaticTest {
private:
	static int a;
	int b;
public:
	StaticTest();
	static void setData(int aa);
	void print();
};
int StaticTest::a = 10;
StaticTest::StaticTest()
{
	this->b = 20;
}
StaticTest::SetData()
{
	//this->a = 30;
}
int main()
{
	StaticTest s1, s2;
	s1.print();
	s2.print();

	s1.setData(30);
	s1.print();
	s2.print();

	StaticTest::setData(100);
	s1.print();
	s2.print();
	return 0;
}