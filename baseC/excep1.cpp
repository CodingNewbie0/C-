#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void divide(int a, int b) {
	int c, d;
	if (b == 0) throw b; // ���ܰ� �߻��ϸ�

	c = a / b;
	cout << "�� : " << c << endl;
	d = a % b;
	cout << "������ : " << d << endl;
}
int main(void)
{
	try {
		divide(10, 3);
		divide(100, 5);
		divide(3, 0);
		divide(100, 20);
	}
	catch (int ex){
		cout << ex << "�� ���� �� �����ϴ�. ���ܹ߻�" << endl;
	}
	cout << "���ܰ� �߻��� �ص� ��������!!!" << endl;

	return 0;
}