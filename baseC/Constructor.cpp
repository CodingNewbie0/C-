#include <iostream>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	// ������ �����ε�
	//SimpleClass()
	//{
	//	printf("default ������ \n");
	//	num1 = 0;
	//	num2 = 0;
	//}
	//SimpleClass(int n)
	//{
	//	printf("�μ� �Ѱ� ���� ������ \n");
	//	num1 = n;
	//	num2 = 0;
	//}
	//SimpleClass(int n1, int n2)
	//{
	//	printf("�μ� �ΰ� ���� ������ \n");
	//	num1 = n1;
	//	num2 = n2;
	//}
	SimpleClass(int n1 = 0, int n2 = 0)
	{
		printf("�μ� �ΰ� ���� ������ \n");
		num1 = n1;
		num2 = n2;
	}
	void shwData() const {
		cout << num1 << " " << num2 << endl;
	}
};
int main()
{
	//SimpleClass sc1;
	//sc1.shwData();

	//SimpleClass sc2 = SimpleClass(100);
	//sc2.shwData();

	//SimpleClass sc3(100, 300);
	//sc3.shwData();
	SimpleClass sc1;
	SimpleClass mysc=sc1;
	mysc.shwData();
	return 0;
}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);
	return sc;
}