#include <string>
#include <iostream>

using namespace std;

int main(void) {
	string str;
	cin >> str;
	for (auto c : str) // 코드 의미 : str의 각 문자를 c에 복사. // str은 string형. 그러나 string 형태의 요소는 하나하나 char을 묶어서 저장해둔 것. 즉, 여기서 auto는 char을 의미함. const auto -> for문 안에서 c를 변경 불가 // auto -> for문 안에서 c를 변경 한다. //
	{
		cout << c << endl;
	}
	return 0;
}