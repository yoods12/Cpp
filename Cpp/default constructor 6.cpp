#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person() = delete; //�⺻������ ������ ����� �� �ٵ� �־�?
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
}//������, �Լ�