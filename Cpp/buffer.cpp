#include <iostream>

using namespace std;

class Buffer {
	int* ptr; 
public:
	Buffer() { ptr = NULL; } // 아무것도 안넘기면 null
	Buffer(int size) {
		ptr = new int[size]; // 뭐 있으면 적은거 만큼 사이즈만듬
	}
};

int main()
{
	Buffer b(40);
	Buffer c = b; // 저장공간 같이 씀? 
	// 직접 복사생성자 만들어서 이것저것 막 하면 따로 쓸 수있음
	// 얕은복사 (값)
	// 깊은복사 

	// 대입연산자 오버로드 보고 오기
	//	friend ostream& operator << (ostream& os, const Obj& o) {
	//  os << "(" << o.x << ", " << o.y << ", " << o.z << ")";
	//  return os;
	//   }
	// 
	// 예외처리
	return 0;
}