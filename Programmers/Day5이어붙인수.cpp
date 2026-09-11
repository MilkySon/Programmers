#include <string>
#include <vector>
#include <iostream>

using namespace std;

static int solution(vector<int> num_list) {

	// 극한의 단순화 풀이
	string odd = "", even = "";
	for (const int& i : num_list) { // const int& 자료형에 대한 설명은 맨 아래에 적어둠.
		i & 1 ? odd += to_string(i) : even += to_string(i);
	}
	return stoi(odd) + stoi(even);


	/* string 활용 풀이
	string odd = "";
	string even = "";
	for (int num : num_list) {
		if (num % 2) odd += to_string(num);
		else even += to_string(num);
	}
	return stoi(odd) + stoi(even);
	*/

	/* 최초 제출 풀이
	int answer = 0;

	int stickyOdd = 0;
	int stickyEven = 0;

	for (int n : num_list) {
		if (n % 2 == 1) {
			stickyOdd *= 10;
			stickyOdd += n;
		}
		else {
			stickyEven *= 10;
			stickyEven += n;
		}
	}
	answer = stickyOdd + stickyEven;
	return answer;
	*/
}

int main() {

	vector<int> nL1 = { 3,4,5,2,1 };
	vector<int> nL2 = { 5,7,8,3 };

	cout << solution(nL1) << endl;
	cout << solution(nL2) << endl;

	return 0;
}


// const int& 자료형 설명 : 
// const(변할 수 없는) + int(정수형태) + &(참조 자료형) 
// 예를 들어서 int i = num_list[0] 라고 하면 i라는 변수에 num_list[0] 값을 통째로 복사해오는거임. 
// 그런데 int& i = num_list[i]라고 하면 num_list[i]의 값을 가리키는 [별명] 정도로 여겨진다고함. 
// 그리고 const 까지 붙은 const int& i 는 [읽기 전용 별명] 정도로 생각해두면 좋다.
//다만 나중에 C++을 좀 더 깊게 배우면 const int& 가 무조건 완벽한 의미의 "읽기 전용"이라는 뜻은 아니라는 걸 배우게 됩니다.정확히는 "이 참조를 통해서는 수정할 수 없다"입니다.
/*

예를 들어:

int x = 10;
const int& r = x;

x = 20;       // 가능!
cout << r;    // 20

r이 읽기 전용이라고 해서 x 자체가 얼어붙은 건 아닙니다.

x ──────── 20
↑
└── r (const int&)
	"나는 보기만 할게"

그래서 현재 단계에서는

T& → T의 별명
const T& → 내가 수정할 수 없는 T의 별명

으로 기억하시면 아주 좋습니다.
*/