#include <iostream>

using namespace std;

class MyArray {
	int size;
	int* buf;
public:
	MyArray(int s) : size(s) { buf = new int[s]; }
	void setData(int idx, int data) { buf[idx] = data; }
	int getData(int idx) { return buf[idx]; }
};


int main()
{
	MyArray marray(5);
	marray.setData(3, 10);

	cout << marray.getData(3) << endl;

	MyArray you = marray; // �������� ��������� ���� ��

	// ��������� �ٲٱ�
	// 1. ��������� 2. ���Կ�����
	// 2���� �ʿ���

	// ����ó���� �Ⱥ����� ����

	cout << you.getData(3) << endl;

	you.setData(3, 20);

	cout << marray.getData(3) << endl;

	return 0;
}