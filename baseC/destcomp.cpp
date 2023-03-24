#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다.(은닉)
class Myclass {
	// 멤버변수:속성
private:
	char id;
	int age;
	char name[10];
	// 멤버함수 (=메소드) :기능
public:
	Myclass(char aid, int aage, const char* aname); // 생성자 원형
	void get(); // 메소드 원형(선언)
};

Myclass::Myclass(char aid, int aage, const char* aname) : id(aid), age(aage) { // 생성자 정의/ 뒤의 생성자는 호출시, 실행되기전에 초기화를 하고 실행됨.
	printf("생성자 호출\n");
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
	Myclass s('2', 23, "홍길동");
	s.get();

	return 0;
}