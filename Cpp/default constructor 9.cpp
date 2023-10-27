#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(); // 1. 기본생성자
    //Person() {} 얘하고 밑에꺼하고 둘다 입력파라미터 없을때 호출 가능함 그래서 나쁨
    Person(string n, int a) : name(n), age(a) {} // 멤버 초기화 리스트를 활용한 멤버 변수 초기화 
    //(string n = "Dongsu Yoo", int a = 23) 3.default parameter이용
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void show() {
        cout << name << ", " << age << endl;
    }
};

int main(int argc, char const* argv[])
{
    Person father; /*2.("Dongsu Yoo, 34")*/  // [컴파일 에러 발생] 컴파일러가 기본 생성자를 생성하지 않음 
    // 1. 기본생성자
    // 2. father에 () 채우기
    // 3. defalut parameter 이용
    Person son("Gil-Dong Hong", 30); //생성자 호출 
    son.show();
    return 0;
}