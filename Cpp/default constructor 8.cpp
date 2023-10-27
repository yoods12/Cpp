#include <iostream>
using namespace std;

class Person {
	string name{ "Chul-Soo Lee" };
	int age{ 20 };
public:
	void setName(string n) { name = n; }
	void setAge(int a) { age = a; }
	void show() {
		cout << name << ", " << age << endl;
	}
};

int main(int argc, char const* argv[])
{
	Person man;
	man.show();

	int a = 7;

	cout << a;

	//cout << man;
	//cout 을 이용하여 Person의 객체를 출력
	
	return 0;
}