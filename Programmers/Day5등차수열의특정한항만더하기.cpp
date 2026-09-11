#include <iostream>
#include <vector>

using namespace std;

static int solution(int a, int d, vector<bool> included) {
	
	// 고인물 풀이
	int answer = 0;
	a -= d;	// for문 돌리기 전에 미리 빼둠.
	for (auto flag : included) { // included 순회.
		a += d; // 미리 d를 빼낸 상태에서 다시 d를 더하니, 첫번째 for문을 돌 때 첫번째 항의 크기인 a 가 제대로 반영됨. 이후에는 등차수열 정의에 따라 for문을 돌때마다 d를 더함.
		if (flag) {
			answer += a; // included[i]가 true 일때만 (i+1)번째 항을 더해주는 코드. wow!!!
		}
	}
	return answer;
	
	
	
	/* 처음 제출한 풀이
	int answer = 0;
	int n = included.size();

	for (int i = 0; i < n; i++) {
		if (included[i]) {
			answer += ( a + i * d ) ;
		}
	}
	return answer;
	*/
}


int main() {
	int a1 = 3;
	int d1 = 4;
	vector<bool> included1 = {true, false, false, true, true};

	int a2 = 7;
	int d2 = 1;
	vector<bool> included2 = { false, false, false, true, false, false, false };

	cout << solution(a1, d1, included1) << endl;
	cout << solution(a2, d2, included2) << endl;

	return 0;
}