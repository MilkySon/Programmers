#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
	
	
	// 완전 모법답안 (내 생각에는)
	for (auto i = 0; i < overwrite_string.size(); i++) {
		my_string[i + s] = overwrite_string[i];
	}

	/* replace 함수 활용 풀이
	string answer = "";
	answer = my_string.replace(s, overwrite_string.size(), overwrite_string); //바꿈범위1(출발), 바꿈범위2(끝), 뭘로바꿀건지
	*/

	/* 내가 제출한 풀이
	int i = 0;
	int j = 0;
	for (int i = s; i < s + overwrite_string.size(); i++) {
		my_string[i] = overwrite_string[j];
		j++;
	}
	*/
	return my_string;
}

int main(void) {
	string a, b;
	cin >> a >> b;
	cout << solution(a, b, 1);
	// love
	return 0;
}