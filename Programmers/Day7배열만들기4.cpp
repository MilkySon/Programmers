#include <iostream>
#include <string>
#include <vector>

using namespace std;

static void printVector(vector<int> arr) {
	cout << "{ ";
	for (int a : arr) {
		cout << a << " ";
	}
	cout << "}";
}

static vector<int> solution(vector<int> arr) {
	
	vector<int> stk;
	int i = 0;
	while (i < arr.size()) {
		if (stk.empty()) {
			stk.push_back(arr[i]);
			i++;
		}
		else if (!stk.empty() && stk.back() < arr[i]) {
			stk.push_back(arr[i]);
			i++;
		}
		else { // else if (!stk.empty() && stk.back() >= arr[i]) {
			stk.pop_back(); // 마지막 원소 제거
		}
		printVector(stk);
	}
	
	return stk;
}


int main() {

	vector<int> arr = { 1,4,2,5,3 };
	
	printVector(solution(arr));

	return 0;
}