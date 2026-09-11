/*
👻👻👻👻👻👻
👻👻👻👻👻👻
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include<set>

using namespace std;

static int comparing(int a, int b, int c, int d) {

	comparing(a, b, c, d);

}


static int solution(int a, int b, int c, int d) {

	vector<int> list = { a,b,c,d };
	vector<int> cnt_list = { 0,0,0,0 }; // 집어먹은 횟수 세기.

	if (a == b) {
		cnt_list[0] += 1;

	}

	int answer = 0;
	if (a == b == c == d) {
		answer = a * 1111;
	}
	else if ()

	/*
	int answer = 0;

	vector<int> list = { a,b,c,d };
	vector<int> cnt_list = { 0,0 }; // 집어먹은 횟수 세기.
	
	set<int> mySet;
	int temp_length = mySet.size();

	for (int i = 0; i < mySet.size(); i++) {
		mySet.insert(list[i]);

		if (temp_length != )

	}
	


	if (mySet.size() == 1) { 
		// qqqq 케이스.
		answer = 1111 * a;
		
	}
	else if (mySet.size() == 2) {
		// qqqw 케이스. --> 집어먹은 횟수가 각각 한번.

		// qqww 케이스. --> 
	}
	else if (mySet.size() == 4) {
		// qwer 케이스
		answer = min(a, b, c, d); // 최소값 찾기 (라이브러리 어디감??;;)
	}
	*/

	/*
	a값을 b,c,d와 일일이 비교
	
	<바로 끝내버리는 경우>
	똑같은 값이 4 개 -> qqqq.
	똑같은 값이 3 개 -> qqqw.
	
	<아직 한 발 남은 경우>
	똑같은 값이 2개 -> qq__ -> __만 비교하면 됨.

	똑같은 값이 하나도 없음 -> q___
		-> b값도 c,d와 비교
		-> b랑 똑같은 값이 3개 -> qqqw.
		-> b랑 똑같은 값이 2개 -> qq__ -> __만 비교하면됨.
		
		--> 똑같은 값이 하나도 없음 -> qw__
			-> c값도 d와 비교
			-> d랑 똑같은 값이 2개 -> qwee
			-> 전부다 다르다면 -> qwer
	*/





	return answer;
}

int main() {

	int a = 4;
	int b = 4;
	int c = 4;
	int d = 4;

	cout << solution(a, b, c, d) << endl;

	return 0;
}