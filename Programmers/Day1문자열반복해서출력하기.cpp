#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str;
	int n;
	cin >> str >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << str;
	}


	// cout << endl;
	
	/*
	
	endl의 역할은 두 가지입니다.

		줄을 바꾼다.
		출력 버퍼를 즉시 비운다(flush).

	*/


	return 0;
}