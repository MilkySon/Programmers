
// chatGPT 해설 (굳이 읽을 필욘x)
// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa54b26-ca08-83e8-8be3-24cf33b3a8ed

#include <iostream>
#include <string>

using namespace std;

static int solution(string myString, string pat) {


	// 매우 쉽게 쓰여진 풀이
	int answer = 0;

	int pos = 0;
	while (true)
	{
		pos = myString.find(pat, pos); //이부분 좋음. 발견한 값의 시작점을 pos로 설정해서 옮겨둠.
		if (pos == string::npos)
		{
			break;
		}

		answer++;
		pos++;	// 다음 위치부터 다시 검색하여 겹치는 패턴도 허용
	}

	return answer;

	/* 내가 제출한 풀이 (이터레이터 중독)
	int answer = 0;

	for (int i = 0; i < myString.size() - pat.size() + 1; i++) {
		
		string temp(myString.begin() + i, myString.begin() + i + pat.size());

		if (temp == pat) { // (temp.find(pat) != string::npos) {
			answer++;
		}

	}
	
	return answer;
	*/
}

int main() {

	cout << solution("banana", "ana") << endl;
	cout << solution("aaaa", "aa") << endl;

	return 0;
}