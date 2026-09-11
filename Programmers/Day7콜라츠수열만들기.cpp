#include <iostream>
#include <string>
#include <vector>

using namespace std;

static vector<int> solution(int n) {

	vector<int> answer;

	answer.push_back(n); // 처음엔 자기 자신 먼저 삽입.

	while (n != 1) { // (n!=1)일 때 while 반복!! (n==1)으로 하면 안되니까 헷갈리지 말자.

		if (n % 2 == 0) { // n이 짝수
			n /= 2;
		}
		else { // n이 홀수
			n = 3 * n + 1;
		}
		answer.push_back(n); // 바뀐 n을 삽입.
	}

	return answer;
}

static void printVector(vector<int> arr) {
	cout << "{ ";
	for (int a : arr) {
		cout << a << " ";
	}
	cout << "}";
}


int main() {

	printVector(solution(10));

	return 0;
}