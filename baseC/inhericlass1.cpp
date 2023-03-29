#include <iostream>
using namespace std;

class Person {
private:
	char name[30];
	int age;
public:
	Person(const char*, int);
	void getData();
};

class Student : public Person{
private:
	int studentId;
public:
	Student(const char*, int, int);
	void showData();
};
int main()
{

	return 0;
}