#include <string>
#include <map>

#include <iostream>

using namespace std;

static int solution(int n, string control) {
	
	/*
	// 고인물 풀이
	map<char, int> m = { { 'w',1 }, { 's',-1 }, { 'd' ,10 }, { 'a',-10 } };
	int answer = n;
	for (char ch : control) {
		answer += m[ch];
	}
	return answer;
	*/

	// GPT 풀이
	// switch가 이 문제의 의도와 아주 잘 맞습니다.
	for (char ch : control) {
		switch (ch) {
		case 'w': n += 1;  break;
		case 's': n -= 1;  break;
		case 'd': n += 10; break;
		case 'a': n -= 10; break;
		}
	}

	return n;

	/* 처음 제출한 풀이
	for (int i = 0; i < control.size(); i++) {
	
		// 잘 돌아가는지 확인.
		cout << n << endl;
		cout << control[i];
		
		// 현재 코드는 같은 문자가 동시에 둘 이상의 조건을 만족할 수 없으므로 
		// (if를 계속쓰는 대신) else if로 관계를 표현하면 조금 더 좋습니다.
		if (control[i] == 'w') {
			n += 1;
		}
		else if (control[i] == 's') {
			n -= 1;
		}
		else if (control[i] == 'd') {
			n += 10;
		}
		else if (control[i] == 'a') {
			n -= 10;
		}
	}
	
	return n;

	*/
}



int main() {
	int n = 0;
	string control = "wsdawsdassw";
	
	cout << solution(n, control) << endl;
}