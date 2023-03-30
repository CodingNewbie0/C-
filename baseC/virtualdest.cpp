#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) : num(n) {
		cout << num << " CTest Constructor " << endl;
	}
	virtual ~CTest(){
		cout << " CTest Destructor " << endl;
	}
	//void func() { 
	//	cout << " CTest vfunc() " << endl;
	//}
	virtual void func() { // 가상함수
		cout << " CTest vfunc() " << endl;
	}
};
class CTestSub : public CTest{
private:
	int snum;
public:
	CTestSub(int sn, int n) : CTest(sn), snum(n) {
		cout << snum << " CTestSub Constructor " << endl;
	}
	~CTestSub(){
		cout << " CTestSub Destructor " << endl;
	}
	void vfunc() {
		cout << " CTestSub func() " << endl;
	}
	//virtual void vfunc() {
	//	cout << " CTestSub func() " << endl;
	//}
};
int main(void)
{
	//CTest c1(10);
	//cout << " ==================== " << endl;
	//CTestSub c2(1, 10);
	//cout << " ==================== " << endl;
	CTest* ps = new CTestSub(3, 33);

	delete ps;

	return 0;
}