#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person();
    Person(string n, int a) : name( n ), age( a )//name{n},age{a}
    //중괄호, 소괄호 둘다 되는데 뭐가 다름?
    {}; 
    //멤버 초기화 리스트 중괄호 안보다 먼저 초기화
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void show()
    {
        cout << name << ", " << age << endl;
    }
};

Person::Person()
{
    // name = "Dongsu Yoo";
    // age = 23;
}

int main(int argc, char const* argv[])
{
    Person man;
    man.show();

    return 0;
}//생성자, 함수