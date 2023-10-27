
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
public:
    ClassA() : numA(12) {}
private:
    int numA;
    friend int add(ClassA, ClassB); // friend를 제거하면 접근지정자가 private이기 때문에 add함수에서 접근 할 수 없음
};

class ClassB {
public:
    ClassB() : numB(1) {}
private:
    int numB;
    friend int add(ClassA, ClassB);
};

int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}
