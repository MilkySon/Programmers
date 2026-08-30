#include <iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	// 신기한 코드
	// C++에서 n & 1은 변수 n의 가장 마지막 이진수 비트(최하위 비트)가 1인지 확인하여 홀수인지 짝수인지 판별하는 비트 AND 연산
	cout << n << " is " << ((n & 1) ? "odd" : "even") << endl; 
	
	/* 처음 제출한 코드
	if (n % 2 == 0) {
		cout << n << " is even";
	}
	else {
		cout << n << " is odd";
	};
	*/

	return 0;
}