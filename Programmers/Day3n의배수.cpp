#include <iostream>

using namespace std;

int solution(int num, int n) {
	
	return num % n == 0;
}

int main() {

	int num = 314;
	cout << solution(num, 157) << endl;

	
	// 모든 공약수 찾기 코드. (그냥 만들어봄)
	for (int i = 1; i < num; i++) {

		if (num % i == 0) {
			cout << i << '\n';
		}

	}


}