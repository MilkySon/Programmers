#include <iostream>

using namespace std;

static int solution(int n) {
	


	// C++ 스러운 풀이
	int answer = 0;
	while (n > 0) {
		answer += (n % 2 == 0) ? n * n : n; // 짝수일땐 제곱 : 홀수일땐 그냥그대로
		n -= 2; // n을 빼나아가며 answer에 더해주는 값 저장.
	}
	return answer;
	

	/*
	// 수열의 합 b 풀이
	int k = (n + 1) >> 1; // >> : 오른쪽 비트 시프트 연산자. 사실상 x >> 1 이라고 하면 x / 2랑 같은 결과임.
	return n & 1 ? (k * k) : 2 * k * (k + 1) * (2 * k + 1) / 3; // n&1(맨마지막비트가1이면홀수,0이면짝수라는 점을 활용한 홀짝 판정 꼼수) 
																// [홀수 수열합 공식 : k^2] : [짝수는 제곱합 해야하니까 : k(k+1)(2k+1)/6 공식에다가 k 대신 2k 대입한거임.]
	*/
	
	/* 내가 제출한 풀이
	int answer = 0;

	if (n % 2 == 1) { // 홀수
		for (int i = 1; i <= n; i += 2) {
			answer += i;
		}
	}
	else { // 짝수
		for (int i = 2; i <= n; i += 2) {
			answer += i;
		}
	}
	return answer;
	*/

}

int main() {
	cout << solution(10) << endl;

	return 0;
}