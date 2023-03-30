#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
	char* name;
	int birthday;
public:
	Person(const char* aname, int abir)
	{
		int len = strlen(aname) + 1;
		name = new char[len];
		strcpy(name, aname);
		abir = birthday;
	}
	Person& operator=(const Person& ref)
	{
		delete[]name;
		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		birthday = ref.birthday;
		return *this;
	}
	void ShowPerson() const {
		cout << "�̸� : " << name << endl << "���� : " << birthday << endl << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "������ �Ҹ� �Ǿ����ϴ�." << endl;
	}
};

int main(void)
{
	Person p1("ȫ�浿", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	return 0;
}