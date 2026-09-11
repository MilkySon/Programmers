#include <iostream>
#include <vector>

using namespace std;

static int solution(vector<int> num_list) {

	// 홀수 연산이나 짝수 연산이나 같은 결과라는걸 
	// 활용한 풀이
	// '결국 어떤 숫자를 이진수로 나타내면 몇자리 수가 되는 건지 묻는 것과 같은 의미'

	int answer = 0;
	for (int num : num_list)
	{
		while (num != 1)
		{
			num /= 2;
			answer++;
		}
	}
	return answer;


	/* 내가 제출한 풀이
	int cnt = 0;
	for (auto &num : num_list) { // auto &num 대신 int num이라고 해도 됨. 어차피 num 자체를 바꿀건 아니니까.

		while (num != 1) {

			if ((num % 1) == 0) {
				num /= 2;
			}
			else { // if ((num % 1) == 1) {
				num = (num - 1) / 2;
			}
			cnt++;
		}

	}

	return cnt;
	*/
}



int main() {
	/*
	num_list			result
	[12, 4, 15, 1, 14]	11
	*/


	cout << solution({ 12, 4, 15, 1, 14 }) << endl;

	return 0;
}