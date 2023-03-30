#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) {
		num = n;
		cout << num << "CTest Constructor" << endl;
	}
	~CTest() { // ½´ÆÛÅ¬·¡½º ¼Ò¸êÀÚ
		cout << "CTest Destructor" << endl;
	}
};
class CTestSub : public CTest {
private:
	int subn;
public:
	CTestSub(int sn, int n) : CTest(sn) {
		subn = n;
		cout << subn << "CTest Constructor" << endl;
	}
	~CTestSub() {  // ¼­ºêÅ¬·¡½º ¼Ò¸êÀÚ
		cout << "CTest Destructor" << endl;
	}
};

int main(void)
{
	CTest c1(10);
	cout << "========================" << endl;
	CTestSub c2(1, 10);
	return 0;
}