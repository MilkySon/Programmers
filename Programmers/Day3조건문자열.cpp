#include <iostream>
#include <vector>
#include <string>

using namespace std;

static bool solution(string ineq, string eq, int n, int m) {
	
	if (ineq == ">") {
		return (eq == "=") ? (n >= m) : (n > m);
	}
	return (eq == "=") ? (n <= m) : (n < m);
	
	
	/* 내가 제출한 코드
	bool answer = 0;

	if ((n == m)) {
		return (eq == "=");
	}

	if ((n > m && (ineq == ">"))) {
		return 1;
	}

	if ((n < m && (ineq == "<"))) {
		return 1;
	}

	return answer;
	*/
}


int main() {
	vector<string> ineqList = { "<",">" };
	vector<string> eqList = { "=", "!" };

	string ineq = ineqList[0];
	string eq = eqList[0];

	cout << solution("<", "=", 20, 50) << endl;
	cout << solution(">", "!", 41, 78) << endl;

	return 0;
}