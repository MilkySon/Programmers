#include <string>
#include <vector>
#include <iostream>

#include <algorithm> // 

using namespace std;

static void printVector(vector<string> vec) {

	cout << "{ ";

	for (string vv : vec) {
		cout << vv << " ";
	}

	cout << "}" << endl;

}

static vector<string> solution(vector<string> str_list) {
	

	/* 이터레이터로 풀수도 있나?
	*/
	
	// chatGPT의 손길 (= 힌트를 보고 고쳐본 나의 풀이)
	auto L = find(str_list.begin(), str_list.end(), "l");
	auto R = find(str_list.begin(), str_list.end(), "r"); // 값을 못찾으면 str_list.end() 반환

	if (L < R) {
		str_list.erase(L, str_list.end());
	}
	else if (L > R) {
		str_list.erase(str_list.begin(), R + 1);
	}
	else {
		return{};
	}
	return str_list;

	/* 내가 제출한 풀이
	auto L = find(str_list.begin(), str_list.end(), "l");
	auto R = find(str_list.begin(), str_list.end(), "r"); // 값을 못찾으면 str_list.end() 반환

	if (L != str_list.end() || R != str_list.end() ) {

		if (L < R) {
			str_list.erase(L, str_list.end());
		}

		else { // if (L > R) {
			str_list.erase(str_list.begin(), R+1);
		}

		return str_list;

	}
	else {
		return{};
	}
	*/

}


int main() {

	/*
	str_list				result
	["u", "u", "l", "r"]	["u", "u"]
	["l"]					[]
	*/
	
	printVector(solution({ "u", "u", "l", "r" }));

	printVector(solution({ "u", "u", "r", "l" }));
	
	printVector(solution({ "u", "l", "u", "r" }));

	printVector(solution({ "u", "r", "d", "l" }));

	printVector(solution({ "l", "d", "d", "r" }));

	printVector(solution({ "r", "l", "r" }));

	printVector(solution({ "l", "r", "l" }));

	printVector(solution({ "r", "l", "r" }));

	printVector(solution({ "r", "u", "u" }));

	printVector(solution({ "u", "u", "u" }));

	printVector(solution({ "d", "l", "u" }));

	printVector(solution({ "r", "r", "d" }));
	
	printVector(solution({ "u", "l", "u" }));

	return 0;
}