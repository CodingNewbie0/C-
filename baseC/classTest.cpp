#include <iostream>

class Myclass {
private:		// 외부의 접근을 불허함
	int private_val;
public:			// 외부의 접근이 가능
	int public_val;
protected:		// 상속에서만 접근이 가능
	int protected_vel;

public:			// 멤버함수는 무조건 public
	void set(int an) {
		private_val = an;
	}
	void get() {
		cout << "public_val: " << public_val << endl;
		cout << "protected_vel: " << protected_vel << endl;
	}
};

int main()
{
	Myclass o;
	// o.private_val;
	o.public_val = 100;
	// o.prtected_vel;
	o.set(200);

	o.get();

	return 0;
}