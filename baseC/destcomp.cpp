#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�.(����)
class Myclass {
	// �������:�Ӽ�
private:
	char id;
	int age;
	char name[10];
	// ����Լ� (=�޼ҵ�) :���
public:
	Myclass(char aid, int aage, const char* aname); // ������ ����
	void get(); // �޼ҵ� ����(����)
};

Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage) { // ������ ����/ ���� �����ڴ� ȣ���, ����Ǳ����� �ʱ�ȭ�� �ϰ� �����.
	printf("������ ȣ��\n");
	//id = aid;
	//age = aage;
	strcpy(name, aname);
}

void Myclass::get()
{
	cout << id << ' ' << name << ' ' << age << endl;
}

int main()
{
	Myclass s('2', 23, "ȫ�浿");
	s.get();

	return 0;
}