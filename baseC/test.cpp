#include <iostream>

int main()		
{				
	int val1 = 0;
	std::cout << "첫 번째 숫자 입력 : ";
	std::cin >> val1;

	int val2 = 0;
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;

	int res = val1 + val2;
	std::cout << "덧셈결과 : " << res << std::endl;

	return 0;	
}				

