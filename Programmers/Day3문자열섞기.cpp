#include <string>
#include <vector>
#include <iostream>

using namespace std;

static string solution(string str1, string str2) {
	string answer = "";
	string temp = "";
	for (int i = 0; i < str1.size(); i++) {
		
		temp = { str1[i], str2[i] };
		// temp = str1[i] + str2[i]; // <-- str1[i] 는 char 이므로 오류가 출력 되어버렷.
		answer += temp;
	}
	
	return answer;
}

int main(void) {

	cout << solution("aaaaa", "bbbbb");

	return 0;
}


/* 고인물 풀이

#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
	string answer = "";

	for (int i = 0; i < str1.length(); i++) {

		answer.push_back(str1[i]);
		answer.push_back(str2[i]);
	}
	return answer;
}

*/