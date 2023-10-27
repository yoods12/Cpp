#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(); // 1. �⺻������
    //Person() {} ���ϰ� �ؿ����ϰ� �Ѵ� �Է��Ķ���� ������ ȣ�� ������ �׷��� ����
    Person(string n, int a) : name(n), age(a) {} // ��� �ʱ�ȭ ����Ʈ�� Ȱ���� ��� ���� �ʱ�ȭ 
    //(string n = "Dongsu Yoo", int a = 23) 3.default parameter�̿�
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void show() {
        cout << name << ", " << age << endl;
    }
};

int main(int argc, char const* argv[])
{
    Person father; /*2.("Dongsu Yoo, 34")*/  // [������ ���� �߻�] �����Ϸ��� �⺻ �����ڸ� �������� ���� 
    // 1. �⺻������
    // 2. father�� () ä���
    // 3. defalut parameter �̿�
    Person son("Gil-Dong Hong", 30); //������ ȣ�� 
    son.show();
    return 0;
}