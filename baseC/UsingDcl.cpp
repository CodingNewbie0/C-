#include <iostream>
using namespace std;
/*
using std::cin;
using std::cout;
using std::endl;
*/

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So sumple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main(void)
{
	/*
	using Hybrid::HybFunc;
	HybFunc();
	return 0;
	*/
	int num = 20;
	cout << "Hello World" << endl;
	cout << "Hello " << "World" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}