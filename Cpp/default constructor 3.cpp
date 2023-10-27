#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void show() {
        cout << name << ", " << age << endl;
    }
};

int main(int argc, char const* argv[])
{
    Person s;  // 컴파일러가 자동 생성한 기본 생성자 Person() 호출 
    Person s1;

    s.setName("Chul-soo Lee");
    s.setAge(20);

    s1.setName("Dongsu Yoo");
    s1.setAge(23);

    s.show();
    s1.show();

    return 0;
}