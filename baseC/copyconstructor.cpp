#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Myclass {
	int num;
	char* name;
public:
	Myclass(int n, const char* name) : num(n) {
		cout << "������ ȣ��" << endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	Myclass(Myclass& other) {
		cout << "��������� ȣ��" << endl;
		this->name = other.name;
		this->num = other.num;
	}
	void getData() {
		cout << num << endl;
	}
	~Myclass() {
		cout << "�޸� ����" << endl;
		delete[] this->name;
	}
};

//int main()
//{
//	Myclass m1(1, "ȫ�浿");
//	//Myclass m2 = m1;	// ��������� ȣ��. int num2 = num1
//	Myclass m2(m1);		// ��������� ȣ��
//
//	m1.getData();
//	m2.getData();
//
//	return 0;
//}

int func(int n)
{
	cout << "�Լ�ȣ��" << endl;
	return n + 1;
}

int main()
{
	int num = 10;
	int res;
	res = func(num);

	return 0;
}