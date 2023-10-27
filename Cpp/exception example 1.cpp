#include <iostream>

using namespace std;

double division(int a, int b)
{
	if (b == 0) throw(false); // throw �ϸ� catch�� ���� "Exception" �ϸ� 20��°���� catch, -10 �̸� 24��°���� catch (throw�� �ڷ����� catch�� ���ƾ���)
	return (double)a/b;
}

int main() 
{
	int a, b, c;

	cin >> a >> b;

	try {
		division(a, b);
	}
	catch (const char* msg) // (...) �̸� ���� Ÿ�� ������� ���
	{
		cout << msg << endl;
	}
	catch (const int i)
	{
		cout << i << endl;
	}
	catch (const bool x)
	{
		cout << x << endl;
	}

	cout << "success" << endl;

	return 0;
}