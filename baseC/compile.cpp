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
	//void set(char aid, int aage, const char *aname)
	//{
	//	id = aid;
	//	age = aage;
	//	strcpy_s(name, 10, aname);
	//	// name = aname;
	//}
	void get(); // �޼ҵ� ����(����)
};

Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage) { // ������ ����/ ���� �����ڴ� ȣ���, ����Ǳ����� �ʱ�ȭ�� �ϰ� �����.
	id = aid;
	age = aage;
	strcpy_s(name, 10, aname);
}

void Myclass::get()
{
	cout << id << ' ' << name << ' ' << age << endl;
}

int main()
{
	Myclass s('2', 23, "ȫ�浿");
	//s.set('2', 23, "ȫ�浿");
	s.get();

	//Myclass s1('3', 29, "�迵��");
	return 0;
}