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
void func(void) // 입,출력이 없는 함수
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}
int main()
{
	func(); // 함수호출
	return 0;
}
*/
/*
void func(char c) // 입력을 만드는 방법 : (매개)변수를 선언
{
	std::cout << "안녕" << std::endl;
}
*/
/*
int func(int a, int b) // 함수선언
{
	int res = a + b;
	return res; //출력은 return문으로 작성한다
	//std::cout << "하세요~" << res << std::endl;
}
*/

int func(int n1, int n2); // 함수선언

int main()
{
	int num1 = 10;
	int num2 = 20;

	int res = func(num1, num2); // 리턴되는 값을 저장해서 사용한다.
	std::cout << "오." << res << std::endl;
	std::cout << "오..." << func(num1, num2) << std::endl;
	//func('c'); // 함수호출
	//func(num1, num2); // 입력으로 전달해주는 놈을 실인수(num1, num2)
}

int func(int n1, int n2) // 입력과 출력이 있는 함수. 함수 정의
{
	int res = n1 + n2;
	return res; // 출력은 리턴문으로 작성
}