#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char name[20];
	int id;
	int age;
public:
	void setData(const char aname[20], int aid, int aage) {
		// name;
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	void getData() {
		cout << "�̸�: " << name << " " << "�ֹ�: " << id << " " << "����:" << age << endl;
	}

};

int main()
{
	Human h;
	h.setData("ȫ�浿", 102933 - 182733, 30);
	h.getData();


	return 0;
}