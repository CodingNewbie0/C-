//#author 박효창
#include <windows.h>
#include <iostream> // c++ 구동
#include <string> // 문자(벡터랑 따라붙음)
#include <vector> // 메모리 동적할당 배열
#include "Calculator.h" // 미리 선언된 헤더파일 불러오기
using namespace std; // cout 앞 std 선언

vector<char> cal{ 'v','e','r' };

int main(void)
{
	double a, b = 0.0; // 변수 초기화
	char operate = ' '; // 연산자 선언
	double result = 0.0;

	string cc(cal.begin(), cal.end()); // 처음부터 끝 위치
	cout << "계산기 콘솔 앱 0.1"<< cc << endl << endl
	<< "두 정수와 연산자를 입력해주세요." << endl << "항목: a + b | a - b | a * b | a / b " << endl;

	Calculator c; // 헤더파일에 선언된 클래스를 불러와서 지역변수로 선언
	while (true) {
		cin >> a >> operate >> b;
		result = c.Calculate(a, b, operate); // 헤더파일 클래스에 선언된 Calculate를 불러와 result 지역변수로 선언

		if (!cin) // 문자 및 문자열, 연산자가 숫자보다 먼저올 경우 예외처리(오류많음)
		{
			system("cls");
			cin.clear(); // 값 초기화
			cin.ignore(LLONG_MAX, '\n'); // LLONG_MAX의 값만큼 무시하고 한줄 띄움
			cout << "사용할 수 없는 문자입니다." << endl
			<< "다시 입력해주시길 바랍니다." << endl;
			system("pause");
		}
		else {
			system("cls"); // 화면초기화
			cout << "값은 " << result << " 입니다." << endl; // 최종 값
			system("pause");
		}
		system("cls");
		cout << "두 정수와 연산자를 입력해주세요." << endl 
		<< "항목: a + b | a - b | a * b | a / b " << endl << "다음 값 입력 : ";
	}
	return 0;
}