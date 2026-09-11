
// chatGPT 해설
// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa113fc-99a8-83ee-a476-d59843c03e55



#include <vector>
#include <iostream>

using namespace std;


static void printVector(vector<int> vv) {

	cout << "{ ";
	for (int v : vv) {
		cout << v << " ";
	}
	cout << "}";

}

static vector<int> solution(vector<int> arr, vector<int> query) {



	// chatGPT 풀이
	for (int i = 0; i < query.size(); i++) {

		if (i % 2 == 0) {
			// query[i] 뒤를 전부 삭제
			arr.erase(arr.begin() + query[i] + 1, arr.end());
		}
		else {
			// query[i] 앞을 전부 삭제
			arr.erase(arr.begin(), arr.begin() + query[i]);
		}
	}

	return arr;

	/*
	
	그리고 앞으로 vector에서 정말 자주 만나게 될 핵심 패턴 하나만 기억해두세요.

	vector<int>(begin, end);  // 범위를 복사해서 새로운 vector 생성
	arr.erase(begin, end);    // 범위를 기존 vector에서 삭제

	둘 다 [begin, end) → end는 포함하지 않는다입니다. 이거 하나 잡으면 오늘 코드가 훨씬 자연스럽게 보일 겁니다.

	*/



	/* 내가 제출한 풀이

	for (int i = 0; i < query.size(); i++) {

		if (i % 2 == 0) {
			// arr에서 query[i]번 인덱스를 제외하고(안버리고)
			// 배열의 query[i]번 인덱스 뒷부분을 잘라서 버린다.
			arr = vector<int>(arr.begin(), arr.begin() + query[i]+1);
			// printVector(arr);

		}
		else {
			// arr에서 query[i]번 인덱스를 제외하고(안버리고)
			// 배열의 query[i]번 인덱스 앞부분을 잘라서 버린다.
			arr = vector<int>(arr.begin() + query[i], arr.end());
			// printVector(arr);
		}
	}

	// 남은 arr의 부분 배열을 return한다.

	
	return arr;
	*/
}

int main() {

	/*
	arr					query		result
	[0, 1, 2, 3, 4, 5]	[4, 1, 2]	[1, 2, 3]
	*/

	vector<int> sol = solution({ 0,1,2,3,4,5 }, { 4,1,2 });

	printVector(sol);

	return 0;
}