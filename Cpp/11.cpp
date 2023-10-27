#include <iostream>
using namespace std;

class Person {
    string name;
    int age;
public:
    Person(string n, int a) : name{ n }, age{ a } { //파러미터가 있는 생성자
        cout << "Constructor with parameter" << endl;
    }
    Person(const Person& ref) { //복사 생성자
        // call by reference
        // 값 못바꾸게 상수로(수정이 불가능)
        // 

        cout << "User defined Copy constructor" << endl;
        name = ref.name; // name은 man , ref name은 hong
        age = ref.age; 
    }
    void show() {
        cout << name << ", " << age << endl;
    }
};

int main(int argc, char const* argv[]) {
    Person hong("Gil-Dong Hong", 28);  // 파러미터가 있는 생성자 호출
    Person kim{ "Chul-soo Kim", 30 };   // 파러미터가 있는 생성자 호출 
    Person lee = { "Soon-sin Lee", 40 }; // 파러미터가 있는 생성자 호출 

    lee.show();
    Person man = hong; // 북사 생성자 호출 (man 객체는 hong 객체의 내용을 복사하여 생성)
    Person m1{ kim };
    man.show();
    m1.shlow();
    return 0;
}