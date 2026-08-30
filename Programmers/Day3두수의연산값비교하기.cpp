#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

static int solution(int a, int b) {
	int answer = 0;



	/*
	string a_str = to_string(a);
	string b_str = to_string(b);
	string ab_str = a_str + b_str;
	int ab = stoi(ab_str);
	*/
	// 간단하게 적어보자.
	int ab = stoi(to_string(a) + to_string(b));

	answer = max(ab, 2 * a * b);

	return answer;
}

int main() {

	int a = 2;
	int b = 91;

	cout << solution(a, b) << endl;
	cout << solution(b, a) << endl;

	return 0;
}