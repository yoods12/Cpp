#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
public:
    Person(string n, int a) : name{ n }, age{ a } { //�ķ����Ͱ� �ִ� ������
        cout << "Constructor with parameter" << endl;
    }
    Person(const Person& ref) { //���� ������
        cout << "User defined Copy constructor" << endl;
        name = ref.name;
        age = ref.age;
    }
    void show() {
        cout << name << ", " << age << endl;
    }
};

int main(int argc, char const* argv[]) {
    Person hong("Gil-Dong Hong", 28);  // �ķ����Ͱ� �ִ� ������ ȣ��
    Person kim{ "Chul-soo Kim", 30 };   // �ķ����Ͱ� �ִ� ������ ȣ�� 
    Person lee = { "Soon-sin Lee", 40 }; // �ķ����Ͱ� �ִ� ������ ȣ�� 

    lee.show();
    Person man = hong; // �ϻ� ������ ȣ�� (man ��ü�� hong ��ü�� ������ �����Ͽ� ����)
    Person m1{ kim };
    man.show();
    m1 = lee; // ���Կ����ڴ� ���� �ִ� ��ü�� �ִ°Ű� ���翬���ڴ� ���ο� ��ü �����ϸ鼭 ����
    m1.show();
    return 0;
}