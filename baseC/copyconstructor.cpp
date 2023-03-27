#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Myclass {
	int num;
	char* name;
public:
	Myclass(int n, const char* name) : num(n) {
		cout << "생성자 호출" << endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	Myclass(Myclass& other) {
		cout << "복사생성자 호출" << endl;
		this->name = other.name;
		this->num = other.num;
	}
	void getData() {
		cout << num << endl;
	}
	~Myclass() {
		cout << "메모리 해제" << endl;
		delete[] this->name;
	}
};

//int main()
//{
//	Myclass m1(1, "홍길동");
//	//Myclass m2 = m1;	// 복사생성자 호출. int num2 = num1
//	Myclass m2(m1);		// 복사생성자 호출
//
//	m1.getData();
//	m2.getData();
//
//	return 0;
//}

int func(int n)
{
	cout << "함수호출" << endl;
	return n + 1;
}

int main()
{
	int num = 10;
	int res;
	res = func(num);

	return 0;
}