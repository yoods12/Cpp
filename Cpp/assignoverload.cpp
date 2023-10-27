#include <iostream>
using namespace std;

class Obj {
	int x, y, z;
public:
	Obj() {}
	Obj(int a, int b, int c) : x(a), y(b), z(c) {}
	friend ostream& operator << (ostream& os, const Obj& o) {  // (ostream& os, const Obj& o)는 피연산자,  << 아니고 + 이면 (obj 1, obj 2)로 될꺼임
		os << "(" << o.x << ", " << o.y << ", " << o.z << ")";         // & 참조 다시 보기
		return os; // string + string 이면 반환되는 값이 string이여야하니 return os 
	}// ostream한테 줘야하니깐 friend

	//friend Obj& operator = (Obj& o1, const Obj& o2) {  

	//}

	Obj& operator = (const Obj& o) { // 사용자가 정의 하지 않으면 컴파일러가 알아서 정의함
		cout << "내 대입 연산자" << endl;
		x = o.x + 10;
		y = o.y + 10;
		z = o.z + 10;
		return *this;
	} // =는 z의 연산자이기 때문에 Obj클래스 안에 정의 되어야함

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
	cout << "객체 x의 각 멤버 변수의 주소: ";
	x.printAddr();
	cout << "z: " << z << endl;
	cout << "객체 z의 각 멤버 변수의 주소: ";
	z.printAddr();

	z = x;   // 대입 연산 수행 원래 있던 객체에 대입하는 것 복사 아님 (복사생성자 생성 X)
	// 얕은 복사로 되기 때문에 내가 대입연산자를 정의할 필요 없음
	cout << endl;
	cout << "대입 연산 후 z의 값: ";
	cout << "z: " << z << endl;
	cout << "대입 연산 후 객체 z의 각 멤버 변수의 주소: ";
	z.printAddr();

	return 0;
}