#include <iostream>
// #include <stdio.h> // printf 함수 쓸 때 필요한 헤더.

using namespace std;

int main(void) {
	int a;
	int b;
	cin >> a >> b;


	cout << a << " + " << b << " = " << a + b << endl;

	// printf("%d + %d = %d", a, b, a + b); // C언어 느낌으로 쓸 수 있다.

	return 0;
}