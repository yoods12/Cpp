#include <iostream>

using namespace std;

class Buffer {
	int* ptr; 
public:
	Buffer() { ptr = NULL; } // �ƹ��͵� �ȳѱ�� null
	Buffer(int size) {
		ptr = new int[size]; // �� ������ ������ ��ŭ �������
	}
};

int main()
{
	Buffer b(40);
	Buffer c = b; // ������� ���� ��? 
	// ���� ��������� ���� �̰����� �� �ϸ� ���� �� ������
	// �������� (��)
	// �������� 

	// ���Կ����� �����ε� ���� ����
	//	friend ostream& operator << (ostream& os, const Obj& o) {
	//  os << "(" << o.x << ", " << o.y << ", " << o.z << ")";
	//  return os;
	//   }
	// 
	// ����ó��
	return 0;
}