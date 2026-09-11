
#include <iostream>
#include <vector>


using namespace std;



static vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {

	vector<int> answer;

	for (const vector<int>& itrval : intervals) {

		for (int i = itrval[0]; i <= itrval[1]; i++) {

			answer.push_back(arr[i]);
		}
	}

	return answer;
}


int main() {

	/*
	arr				intervals			result
	[1, 2, 3, 4, 5]	[[1, 3], [0, 4]]	[2, 3, 4, 1, 2, 3, 4, 5]
	*/



	vector<int>  sol = solution({ 1,2,3,4,5 }, { {1,3},{0,4} });



	cout << "{ ";

	for (int element : sol) {
		cout << element << " ";
	}

	cout << "}";


	return 0;
}