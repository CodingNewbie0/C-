#include <iostream>

class Myclass {
private:		// �ܺ��� ������ ������
	int private_val;
public:			// �ܺ��� ������ ����
	int public_val;
protected:		// ��ӿ����� ������ ����
	int protected_vel;

public:			// ����Լ��� ������ public
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