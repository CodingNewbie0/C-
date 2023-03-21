#include <iostream>

int main(void)
{
	char name[100];
	char lang[200];
	char ch[5] = "Park";

	ch[0] = 'P';
	ch[1] = 'a';
	ch[2] = 'r';
	ch[3] = 'k';
	ch[4] = 'a';

	for (int i = 0; i < 5; i++) {
		printf("%c", ch[i]);
	}

	printf("배열이름 ch: %p\n", ch);
	printf("배열주소 ch: %p\n", &ch);

	std::cout << "이름은 무엇입니까? ";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇입니까? ";
	std::cin >> lang;


	std::cout << "제 이름은 " << name << "입니다.\n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다."<<std::endl;

	return 0;
}