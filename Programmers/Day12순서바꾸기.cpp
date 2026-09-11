#include <iostream>
#include <vector>

#include <algorithm>	// roatate 활용 풀이

using namespace std;

static void printVector(vector<int> vec) {

	cout << "{ ";

	for (int vv : vec) {
		cout << vv << " ";
	}

	cout << "}" << endl;

}


static vector<int> solution(vector<int> num_list, int n) {


	// rotate를 활용한 풀이
	rotate(num_list.begin(), num_list.begin() + n, num_list.end());
	return num_list;


	/* 내가 제출한 풀이
	vector<int> front(num_list.begin(), num_list.begin() + n);
	vector<int> tail(num_list.begin() + n, num_list.end());

	// 에드...오빠...
	tail.insert(tail.end(), front.begin(), front.end());

	return tail;	// tale 완성!
	*/

}

int main() {

	/* 
	num_list		n	result
	[2, 1, 6]		1	[1, 6, 2]
	[5, 2, 1, 7, 5]	3	[7, 5, 5, 2, 1]
	*/

	auto sol1 = solution({ 2,1,6 }, 1);
	auto sol2 = solution({ 5,2,1,7,5 }, 3);

	printVector(sol1);
	printVector(sol2);

	return 0;
}