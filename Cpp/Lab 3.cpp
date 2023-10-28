//키보드에서 Hello World!를 입력한 것을 변수 buf에 저장하고 buf에 저장된 내용을 화면에 출력하는 프로그램을 완성하시오.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string buf;
	
	getline(cin, buf); 

	cout << buf << endl;

	return 0;
}