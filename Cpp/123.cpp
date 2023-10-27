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

	MyArray you = marray; // 얕은복사 저장공간을 같이 씀

	// 깊은복사로 바꾸기
	// 1. 복사생성자 2. 대입연산자
	// 2개가 필요함

	// 예외처리도 안봤으니 보기

	cout << you.getData(3) << endl;

	you.setData(3, 20);

	cout << marray.getData(3) << endl;

	return 0;
}