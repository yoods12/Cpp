#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person();
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void show()
    {
        cout << name << ", " << age << endl;
    }

    string getName() { return name; }
    int getAge() { return age; }
};

Person::Person()
{
    name = "Dongsu Yoo";
    age = 23;
}

int main(int argc, char const* argv[])
{
    Person s; // 컴파일러가 자동 생성한 기본 생성자 Person() 호출 
    Person s1;
    // s.setName("Chul-soo Lee");
    // s.setAge(20);
    // s.show();
    cout << s.getName() <<", " << s.getAge() << endl;

   // string result;
   // result = s.getName() + s.getAge(); ***연산자 오버로드***?
   // cout << result;

    int result;
    result = s.getAge() + s1.getAge();
    cout << result << endl;

    return 0;
}//생성자, 함수