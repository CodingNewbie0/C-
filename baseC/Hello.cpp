#include <iostream>

int main(void)		// 함수머리: 출력 함수이름(입력), 정수(int), 문자(char)
{				// 함수시작(함수몸체)
	int num = 20;	// 변수선언(지역변수)<중괄호 끝날 때 같이 소멸>
	std::cout << "Hello World!!" << std::endl;
	std::cout << num << std::endl;
	std::cout << num << 'A';
	std::cout << "hi" << std::endl;

	return 0;	// 리턴
}				// 함수 끝

