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
} // ������ ��ȿ������ ������ ����� (main �Լ� �����)

int main(int argc, char const* argv[])
{
    Person s;  // �����Ϸ��� �ڵ� ������ �⺻ ������ ȣ�� 
    s.show();
    return 0;
}