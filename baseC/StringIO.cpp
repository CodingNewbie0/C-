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

	printf("�迭�̸� ch: %p\n", ch);
	printf("�迭�ּ� ch: %p\n", &ch);

	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷��� ���� �����Դϱ�? ";
	std::cin >> lang;


	std::cout << "�� �̸��� " << name << "�Դϴ�.\n";
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�."<<std::endl;

	return 0;
}