// 고인물 풀이에 대한 해설 by chatGPT
// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa25067-c318-83ee-93eb-e5258e44cb28

#include <iostream>
#include <string>
#include <vector>

using namespace std;


static void printVector(vector<string> vec) {

	cout << "{ ";

	for (string vv : vec) {
		cout << vv << " ";
	}

	cout << "}" << endl;
}


static vector<string> solution(vector<string> todo_list, vector<bool> finished) {

	// 고인물 풀이를 위한 idx 변수 정의. (근데 왜 함수 밖에서 정의해야만 하는걸까??)
	int idx = 0;

	//  고인물 풀이
	return { 
		todo_list.begin(), 
		remove_if(
			todo_list.begin(), todo_list.end(), 
			[finished, &idx](string s) 
			{ return finished[idx++]; }
		) 
	};

	/* 내가 제출한 풀이
	vector<string> answer;

	for (int i = 0; i < finished.size(); i++) {

		if (!finished[i]) {
			answer.emplace_back(todo_list[i]);
		}
	}

	return answer;
	*/

}


int main() {
	
	/*
	todo_list													finished					result
	["problemsolving", "practiceguitar", "swim", "studygraph"]	[true, false, true, false]	["practiceguitar", "studygraph"]
	*/

	auto sol = solution({ "problemsolving", "practiceguitar", "swim", "studygraph" }, { true, false, true, false });
	printVector(sol);

	return 0;
}