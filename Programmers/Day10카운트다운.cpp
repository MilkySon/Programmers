#include <numeric> // iota 함수를 써먹기 위해 챙겨옴.
#include <vector>
#include <iostream>
#include <algorithm> // reverse 함수를 써먹기 위해 챙겨옴.


using namespace std;


static vector<int> solution(int start_num, int end_num) {

	// iota를 활용한 풀이.
	// C++의 std::iota는 지정한 범위의 컨테이너나 배열에 
	// 1씩 증가하는 연속된 숫자를 채워 넣는 
	// 표준 라이브러리 함수
	
	vector<int> answer(start_num - end_num + 1);

	iota(answer.begin(), answer.end(), end_num);
	reverse(answer.begin(), answer.end());

	return answer;
}


int main() {

	cout << "{ ";
	vector<int> ans = solution(10, 3);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << "}";

	return 0;
}