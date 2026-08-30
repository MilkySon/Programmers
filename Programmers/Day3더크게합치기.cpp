#include <string>
#include <vector>
#include <algorithm> // max()를 정식으로 사용하려면 이것도 넣어주는 게 좋습니다.
#include <iostream>

using namespace std;

static int solution(int a, int b) {
	int answer = 0;


	// string 없이 풀어보기.
	// a,b의 자릿수 구하기 -> a+b결합 -> 비교하기 -> 둘중 크거나 같은걸로 리턴.

	// a,b 자릿수 구하기
	
	int nA = 1; // 자릿수 검증용.
	
	while (a != a % (10 * nA)) {
		nA *= 10;
	}
	int nB = 1;
	while (b != b % (10 * nB)) {
		nB *= 10;
	}

	// a+b 결합
	int case_A = a * (10 * nB) + b;
	int case_B = b * (10 * nA) + a;

	answer = max(case_A, case_B);

	return answer;


	/* 원래 풀었던 방법
	// a, b 문자열 변환 -> a+ b 결합 -> a+b를 숫자록 바꾸기 -> 비교하기 -> 줄 중 크거나 같은걸로 리턴
	
	string a_str = to_string(a);
	string b_str = to_string(b);

	string ab_str = a_str + b_str;
	string ba_str = b_str + a_str;
	
	int ab = stoi(ab_str);
	int ba = stoi(ba_str);

	answer = max(ab, ba);
	return answer;
	*/
}


int main() {

	int a = 89, b = 99;
	cout << solution(a, b) << endl;
	return 0;
}