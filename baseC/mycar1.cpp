#include <iostream>
using namespace std;
class Mycalu {
private:
	int num1;
	int num2;
public:
	// 생성자로 콜론초기화
	Mycalu(int n1, int n2);
	//add();
	//sub();
	//mul();
	//div();

	void get();
};
Mycalu::Mycalu(int n1, int n2) : num1(n1), num2(n2){
	
}

void Mycalu::get()
{
	cout << num1 << ' ' << num2 << endl;
}
int main()
{
	//Mycalu c(2, 2, 2);
	//c.get();


	return 0;
}