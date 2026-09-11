#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


static int solution(vector<int> num_list) {

	// find_if, distance 활용 풀이
	auto it = find_if(num_list.begin(), num_list.end(), [](int num) { return num < 0; });

	return (it != num_list.end()) ? distance(num_list.begin(), it) : -1;


	/* 내가 제출한 풀이
	int isNegative = 0;

	while (num_list[isNegative] >= 0) {
	
		isNegative++;

		if (isNegative == num_list.size()) {
			return -1;
		}
	}

	return isNegative;
	*/

}



int main() {

	vector<int> nL1 = { 12, 4, 15, 46, 38, -2, 15 };
	vector<int> nL2 = { 13, 22, 53, 24, 15, 6 };

	cout << solution(nL1) << endl;
	cout << solution(nL2) << endl;

	return 0;
}