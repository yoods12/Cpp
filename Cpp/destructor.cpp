#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person();
    ~Person();
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void show() {
        cout << name << ", " << age << endl;
    }
};

Person::Person()
{
    name = "Dongsu Yoo";
    age = 23;
}

Person::~Person() {
    cout << "destructor" << endl;
} // 변수의 유효범위가 끝날때 사라짐 (main 함수 종료시)

int main(int argc, char const* argv[])
{
    Person s;  // 컴파일러가 자동 생성한 기본 생성자 호출 
    s.show();
    return 0;
}