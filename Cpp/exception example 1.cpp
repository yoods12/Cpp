#include <iostream>

using namespace std;

double division(int a, int b)
{
	if (b == 0) throw(false); // throw 하면 catch가 받음 "Exception" 하면 20번째에서 catch, -10 이면 24번째에서 catch (throw의 자료형은 catch와 같아야함)
	return (double)a/b;
}

int main() 
{
	int a, b, c;

	cin >> a >> b;

	try {
		division(a, b);
	}
	catch (const char* msg) // (...) 이면 에러 타입 상관없이 출력
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