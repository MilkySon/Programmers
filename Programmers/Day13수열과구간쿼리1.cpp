#include <vector>
#include <iostream>


using namespace std;

static void printVector(vector<int> vec) {

	cout << "{ ";

	for (int vv : vec) {
		cout << vv << " ";
	}

	cout << "}" << endl;
}

static vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
	

	for (const auto& query : queries) { // (vector<int> query : queries) {
		int s = query[0];
		int e = query[1];
		
		for (int i = s; i <= e; i++) {
			arr[i]++;
		}
		
		/* 이터레이터로는 어떻게 풀까??
		for (auto it = arr.begin() + s; it < arr.begin() + e; it++) {
			arr.assign(arr(it)++);
		}
		*/

	}

	return arr;

}

int main() {

	/*
	arr				queries					result
	[0, 1, 2, 3, 4]	[[0, 1],[1, 2],[2, 3]]	[1, 3, 4, 4, 4]
	*/

	auto sol = solution({ 0,1,2,3,4 }, { {0,1},{1,2},{2,3} });
	printVector(sol);

	return 0;
}