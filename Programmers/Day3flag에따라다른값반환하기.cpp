#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, bool flag) {
	
	return flag ? (a + b) : (a - b);

	// 재밌는 풀이
	// return a + (flag - 0.5) * 2 * b;

}

int main() {
	cout << solution(1, 2, 1) <<endl;
	cout << solution(-4, 7, false) << endl;
	cout << solution(-4, 7, true) << endl;

}