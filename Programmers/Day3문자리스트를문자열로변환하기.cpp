// accumulate라는 함수를 쓰는 풀이도 있던데,, 잘 모르겠다.


#include <string>
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

string solution(vector<string> arr) {
	string answer = "";
	
	/* 내가 제출한 풀이
	for (int i = 0; i < arr.size(); i++) {
		
		// answer.push_back(arr); <-- push_back 함수는 char 형태만 받으므로 string 형태인 arr[i] 은 받아줄 수가 음슴.

		answer +=arr[i];
		
	}
	*/

	// 신기한 풀이법.
	answer = reduce(arr.cbegin(), arr.cend(), string{ "" });

	return answer;
}


int main() {

	vector<string> arr = { "a", "b", "c" };
	cout << solution(arr);
	
	return 0;
}