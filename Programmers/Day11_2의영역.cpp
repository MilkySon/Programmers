// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa0af0e-9398-83ee-94c2-2d9402053327
// 수업 끝나고 읽어보자.

#include <string>
#include <vector>
#include <iostream>

#include <algorithm> // find

using namespace std;

static vector<int> solution(vector<int> arr) {


	// chatGPT 풀이
	auto first = find(arr.begin(), arr.end(), 2);

	if (first == arr.end()) {
		return { -1 };
	}

	auto last = find(arr.rbegin(), arr.rend(), 2);

	return vector<int>(first, last.base());


	/* 내가 제출한 풀이 
	vector<int> point;

	for (int i = 0; i < arr.size(); i++) {

		if (arr[i] == 2) {
			point.push_back(i); // 2가 존재하는 인덱스가 쏙쏙쏙!
		}

	}

	if (point.size() == 0) {

		vector<int> answer{ -1 };

		return answer;
	}
	
	vector<int> answer(arr.begin()+point.front(), arr.begin() + point.back() + 1);


	return answer;
	*/

}


static void printVector(vector<int> vec) {
	
	cout << "{ ";

	for (int v : vec) {
		cout << v << " ";
	}

	cout << "}" << endl;

}


int main() {

	/*
	arr							result
	[1, 2, 1, 4, 5, 2, 9]		[2, 1, 4, 5, 2]
	[1, 2, 1]					[2]
	[1, 1, 1]					[-1]
	[1, 2, 1, 2, 1, 10, 2, 1]	[2, 1, 2, 1, 10, 2]
	*/

	vector<int> a1 = { 1, 2, 1, 4, 5, 2, 9 };
	vector<int> a2 = { 1, 2, 1 };
	vector<int> a3 = { 1, 1, 1 };
	vector<int> a4 = { 1, 2, 1, 2, 1, 10, 2, 1 };

	printVector(solution(a1));
	printVector(solution(a2));
	printVector(solution(a3));
	printVector(solution(a4));

	return 0;
}

