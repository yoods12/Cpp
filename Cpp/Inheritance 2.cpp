#include <iostream>
#include <string>

using namespace std;

class Animal
{
	string name;
public:
	virtual const char* speak()
	{
		return "???";
	}
	virtual void walk() = 0; //��ӹ޴� �ڽ����� �� �־����
};

class Cat : public Animal
{
public:	
	Cat(string) {};
	const char* speak() 
	{ 
		return "Meow"; 
	}
	virtual void walk() {};
};

class Dog : public Animal
{
public:
	Dog(string) {};
	const char* speak() 
	{ 
		return "Woof"; 
	}
	virtual void walk() {};
};

int main()
{
	Cat c("cat");
	Dog d("dog");

	Animal *a;
	a = &c;
	cout << a->speak() << endl;
	a = &d;
	cout << a->speak() << endl;
}

// ������ �߰�, c�� ���� speak�� ȣ���ϴ°� �ƴ϶�  Amimal *a�� ���� ����� ���� speak�� ȣ��
// name ����Լ� �߰�, virtual ���������Լ� ���� �߸� ���� �������� ����ϱ�
// ���������Լ� �� ������? 
// **�������� ���� ���� �� �� �� ���̱�**