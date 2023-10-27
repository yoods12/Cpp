#include <iostream>
using namespace std;

class Obj {
	int x, y, z;
public:
	Obj() {}
	Obj(int a, int b, int c) : x(a), y(b), z(c) {}
	friend ostream& operator << (ostream& os, const Obj& o) {  // (ostream& os, const Obj& o)�� �ǿ�����,  << �ƴϰ� + �̸� (obj 1, obj 2)�� �ɲ���
		os << "(" << o.x << ", " << o.y << ", " << o.z << ")";         // & ���� �ٽ� ����
		return os; // string + string �̸� ��ȯ�Ǵ� ���� string�̿����ϴ� return os 
	}// ostream���� ����ϴϱ� friend

	//friend Obj& operator = (Obj& o1, const Obj& o2) {  

	//}

	Obj& operator = (const Obj& o) { // ����ڰ� ���� ���� ������ �����Ϸ��� �˾Ƽ� ������
		cout << "�� ���� ������" << endl;
		x = o.x + 10;
		y = o.y + 10;
		z = o.z + 10;
		return *this;
	} // =�� z�� �������̱� ������ ObjŬ���� �ȿ� ���� �Ǿ����

	void printAddr() {
		cout << "x_addr(" << &x << "), ";
		cout << "y addr(" << &y << "), ";
		cout << "z addr(" << &z << ")" << endl;
	}
};

int main(int argc, char const* argv[])
{
	Obj x(1, 2, 3), z(10, 20, 30);

	cout << "x: " << x << endl;
	cout << "��ü x�� �� ��� ������ �ּ�: ";
	x.printAddr();
	cout << "z: " << z << endl;
	cout << "��ü z�� �� ��� ������ �ּ�: ";
	z.printAddr();

	z = x;   // ���� ���� ���� ���� �ִ� ��ü�� �����ϴ� �� ���� �ƴ� (��������� ���� X)
	// ���� ����� �Ǳ� ������ ���� ���Կ����ڸ� ������ �ʿ� ����
	cout << endl;
	cout << "���� ���� �� z�� ��: ";
	cout << "z: " << z << endl;
	cout << "���� ���� �� ��ü z�� �� ��� ������ �ּ�: ";
	z.printAddr();

	return 0;
}