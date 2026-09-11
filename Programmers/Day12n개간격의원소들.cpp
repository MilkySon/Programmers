

// push_back() vs emplace_back() in C++ STL Vectors
// https://www.geeksforgeeks.org/cpp/push_back-vs-emplace_back-in-cpp-stl-vectors/
// 이해가 안되지만... 일단 읽어보자.

#include <iostream>
#include <vector>

using namespace std;

static void printVector(vector<int> vec) {

	cout << "{ ";

	for (int vv : vec) {
		cout << vv << " ";
	}

	cout << "}" << endl;
}

static vector<int> solution(vector<int> num_list, int n) {
    
	vector<int> answer;

    for (int i = 0; i < num_list.size(); i += n) {

		answer.emplace_back(num_list[i]);
	}

    return answer;
}


int main() {

	/*
	num_list			n	result
	[4, 2, 6, 1, 7, 6]	2	[4, 6, 7]
	[4, 2, 6, 1, 7, 6]	4	[4, 7]
	*/

	auto s1 = solution({ 4, 2, 6, 1, 7, 6 }, 2);
	auto s2 = solution({ 4, 2, 6, 1, 7, 6 }, 4);

	printVector(s1);
	printVector(s2);

	return 0;
}