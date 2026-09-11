#include <vector>
#include <iostream>

using namespace std;

static vector<int> solution(vector<int> num_list) {



	// 내가 생각하기에 제일 멋있는 풀이
	int last = num_list.back();
	int previous = num_list[num_list.size() - 2];

	num_list.push_back(last > previous
		? last - previous
		: last * 2);

	return num_list;


	/* GPT 풀이
	int last = num_list.back();
	int second_last = num_list[num_list.size() - 2];

	if (last > second_last) {
		num_list.push_back(last - second_last);
	}
	else {
		num_list.push_back(last * 2);
	}
	

	return num_list;
	*/


	/* 원래 생각해둔 해결책 
	int last = num_list[num_list.size() - 1]; // 보통 num_list.back() 이렇게 씀.
	int last_but_second = num_list[num_list.size() - 2]; // int last_but_second = *(num_list.end() - 2) 이렇게 해도 됨.

	last > last_but_second
		? num_list.push_back({ last - last_but_second })
		: num_list.push_back({ last * 2 });


	return num_list;
	*/
}

static void printVector(const vector<int>& num_list) {
	cout << "{ ";	
	for (int i : num_list) {
		cout << i << " ";
	}
	cout << "}" << endl;

}

int main() {
	vector<int> nL1 = { 2,1,6 };
	vector<int> nL2 = { 5,2,1,7,5 };

	printVector(nL1);
	printVector(solution(nL1));
	printVector(solution(nL2));

	return 0;
}