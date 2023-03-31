#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
    char name[30];
    int birthday;
public:
    Person(const char* aname, int abirthday) {
        strcpy(name, aname);
        birthday = abirthday;
    }
    void ShowPerson() {
        cout << "Name: " << name << endl << "Birthday: " << birthday << endl;
    }
};

int main() {
    Person* p1 = new Person("홍길동", 19990909);
    p1->ShowPerson();

    Person* p2 = new Person(*p1);
    p2->ShowPerson();

    Person* p3 = new Person("강감찬", 20001201);
    *p3 = *p1;
    p3->ShowPerson();

    delete p1;
    delete p2;
    delete p3;

    return 0;
}