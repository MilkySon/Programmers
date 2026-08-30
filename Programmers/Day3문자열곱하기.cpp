#include <string>
#include <vector>

#include <iostream>

using namespace std;

static string solution(string my_string, int k) {
	
	// ㄹㅇ ㅎㄷㄷ한 풀이.
	string answer = "";
	while (k--) answer.append(my_string);

	return answer;


	/* 내가 제출한 풀이
	int i = 0;
	while (i < k) {
		answer += my_string;
		i++;
	}
	return answer;
	*/
}

int main() {
	cout << solution("love", 3);
	return 0;
}