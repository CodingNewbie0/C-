#include <iostream>
/*
int main()
{
	int a = 10;
	int b = 20;
	int res;
	res = 10 + 20;
	std::cout << "res : " << res << std::endl;
	return 0;
}
*/

/*
void func(void) // ��,����� ���� �Լ�
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}
int main()
{
	func(); // �Լ�ȣ��
	return 0;
}
*/
/*
void func(char c) // �Է��� ����� ��� : (�Ű�)������ ����
{
	std::cout << "�ȳ�" << std::endl;
}
*/
/*
int func(int a, int b) // �Լ�����
{
	int res = a + b;
	return res; //����� return������ �ۼ��Ѵ�
	//std::cout << "�ϼ���~" << res << std::endl;
}
*/

int func(int n1, int n2); // �Լ�����

int main()
{
	int num1 = 10;
	int num2 = 20;

	int res = func(num1, num2); // ���ϵǴ� ���� �����ؼ� ����Ѵ�.
	std::cout << "��." << res << std::endl;
	std::cout << "��..." << func(num1, num2) << std::endl;
	//func('c'); // �Լ�ȣ��
	//func(num1, num2); // �Է����� �������ִ� ���� ���μ�(num1, num2)
}

int func(int n1, int n2) // �Է°� ����� �ִ� �Լ�. �Լ� ����
{
	int res = n1 + n2;
	return res; // ����� ���Ϲ����� �ۼ�
}