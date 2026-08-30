#include <iostream>

using namespace std;

static bool solution(int number, int n, int m) {
	bool answer = ((number % n == 0) && (number % m == 0));
	return answer;
}

int main() {
	cout << solution(314, 2, 157);
	return 0;
}