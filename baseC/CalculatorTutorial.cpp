//#author ��ȿâ
#include <windows.h>
#include <iostream> // c++ ����
#include <string> // ����(���Ͷ� �������)
#include <vector> // �޸� �����Ҵ� �迭
#include "Calculator.h" // �̸� ����� ������� �ҷ�����
using namespace std; // cout �� std ����

vector<char> cal{ 'v','e','r' };

int main(void)
{
	double a, b = 0.0; // ���� �ʱ�ȭ
	char operate = ' '; // ������ ����
	double result = 0.0;

	string cc(cal.begin(), cal.end()); // ó������ �� ��ġ
	cout << "���� �ܼ� �� 0.1"<< cc << endl << endl
	<< "�� ������ �����ڸ� �Է����ּ���." << endl << "�׸�: a + b | a - b | a * b | a / b " << endl;

	Calculator c; // ������Ͽ� ����� Ŭ������ �ҷ��ͼ� ���������� ����
	while (true) {
		cin >> a >> operate >> b;
		result = c.Calculate(a, b, operate); // ������� Ŭ������ ����� Calculate�� �ҷ��� result ���������� ����

		if (!cin) // ���� �� ���ڿ�, �����ڰ� ���ں��� ������ ��� ����ó��(��������)
		{
			system("cls");
			cin.clear(); // �� �ʱ�ȭ
			cin.ignore(LLONG_MAX, '\n'); // LLONG_MAX�� ����ŭ �����ϰ� ���� ���
			cout << "����� �� ���� �����Դϴ�." << endl
			<< "�ٽ� �Է����ֽñ� �ٶ��ϴ�." << endl;
			system("pause");
		}
		else {
			system("cls"); // ȭ���ʱ�ȭ
			cout << "���� " << result << " �Դϴ�." << endl; // ���� ��
			system("pause");
		}
		system("cls");
		cout << "�� ������ �����ڸ� �Է����ּ���." << endl 
		<< "�׸�: a + b | a - b | a * b | a / b " << endl << "���� �� �Է� : ";
	}
	return 0;
}