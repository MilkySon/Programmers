#include <iostream>
#include <vector>
#include <string>

#include <algorithm>

using namespace std;

static string solution(string my_string, vector<int> indices) {

	string answer;

	for (int i = 0; i < my_string.size(); i++) {

		auto it = find(indices.begin(), indices.end(), i);

		if (it == indices.end()) { // find 함수 반환값: 찾은 값의 반복자를 반환하며, 값이 없으면 last 반복자를 반환합니다.
			answer += my_string[i];
		}
	}

	return answer;

	/*
	string answer;

	sort(indices.begin(), indices.end());

	for (int i = 1; i < indices.size(); i++) {
			


		// answer += my_string.substr(indices[i-1]+1, indices[i]-1);
	}

	return answer;
	*/
}


int main() {


	string answer = solution("apporoograpemmemprs", { 1, 16, 6, 15, 0, 10, 11, 3 });

	cout << answer << endl;

	/*
	cout << "{ ";
	
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << " ";
	}

	cout << "}";
	*/

	return 0;
}