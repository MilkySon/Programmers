#include <vector>
#include <iostream>
#include <numeric>	// accumulate 함수를 활용하기 위해 챙겨옴.

using namespace std;

static int solution(vector<int> num_list) {
	
	/*
	// 고인물 풀이 (1)
	auto l = num_list;
	return l.size() >= 11 ? 
		accumulate(l.begin(), l.end(), 0)
		: accumulate(l.begin(), l.end(), 1, multiplies<int>());  // 시작점, 끝점+1, 어떤정수부터시작, 계산하는법(디폴트 : 더하기+)
		*/

	// 고인물 풀이 (2)
	auto v = num_list;
	return accumulate(
		v.begin(),		// 시작값
		v.end(),		// 끝값+1
		(int)(v.size() < 11), //초기값 (11보다 작으면 0, 크거나같으면 1)
		[i{ v.size() }](int x, int y) {			// [캡쳐](매개변수) {		
			return i < 11 ? x * y : x + y;		// 코드						<-- 이건 [람다]라는 거야.
		}										// }
	);

	// 람다 캡쳐 [i { v.size() }] <-- 람다 내부에 i라는 변수를 새로 만들면서, v.size()로 초기화
	//									auto i = v.size() 이런 느낌.  전문용어로는 람다 init-capture 라고 함.
	// 람다 매개변수 (int x, int y) <-- x : 지금까지 누적된 값 / y : 현재 벡터 원소
	// 람다 코드 return i <11 ? x*y : x+y <-- i가 vector size. 그리고 조건에 따라 누적곱 할지 : 누적합 할지 정하는거임.

	/* 내가 제출한 풀이
	int answer = 0;

	if (num_list.size() >= 11) {

		for (const int& num : num_list) {
			answer += num;
		}
	}
	else {
		answer = 1;
		for (const int& num : num_list) {
			answer *= num;
		}
	}

	return answer;
	*/
}

int main() {
	/*
	
	num_list								result
	[3, 4, 5, 2, 5, 4, 6, 7, 3, 7, 2, 2, 1]	51
	[2, 3, 4, 5]							120
	*/

	cout << solution({ 3, 4, 5, 2, 5, 4, 6, 7, 3, 7, 2, 2, 1 }) << endl;
	cout << solution({ 2,3,4,5 }) << endl;

	return 0;
}