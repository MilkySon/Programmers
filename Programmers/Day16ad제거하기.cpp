
// chatGPT의 remove_if 해설 (이해가 잘 안되니 여러번 읽어보자.)
//https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa6814f-9ccc-83e8-b890-1e8c62acb9c6 

#include <iostream>
#include <string>
#include <vector>

using namespace std;



static void printVector(vector<string> strArr) {

	cout << "{ ";

	for (string ele : strArr) {

		cout << ele << " ";
	}

	cout << "}" << endl;

}

static vector<string> solution(vector<string> strArr) {

	// 고인물 풀이
		return vector(
			strArr.begin(),	// 새 vector의 시작점은 strArr.begin()
			
			remove_if(					// remove_if는 조건을 만족하는 녀석들을 뒤로 치워버린 다음, 조건을 만족하는 녀석들 직전의 iterator를 반환한다.
				strArr.begin(),		// strArr 처음부터 
				strArr.end(),		//			끝까지 검사해서
				[](string s) {	// 각 원소를 s로 받아서 검사 (s는 벡터의 원소를 하나씩 넣어주는 '매개변수'를 의미함.)
					return s.find("ad") != string::npos;	// "ad"가 있으면 true -> 즉, remove_if의 제거 대상.
				}
			)	// 살아남은 원소들이 끝나는 위치(new_end)를 반환
		); // [strArr.begin(), new_end)로 새로운 vector 생성



		/* 내가 제출한 풀이
		vector<string> answer;
		for (string& target : strArr) {

			auto ad_here = target.rfind("ad");

			if (ad_here == string::npos) {
				answer.push_back(target);
			}
		}

		return answer;
		*/


		/* 문제를 잘 못 이해한 경우 : 문자 속 ad만 제거하는건가? ^^ (아니거든요~!)
		while (ad_here != string::npos) {

			target.erase(target.begin() + ad_here, target.begin() + ad_here + 2); // 왜 debug assertion : cannot seek iterator after end. 라고 말쌈하시는지..
			ad_here = target.rfind("ad"); // 여기서 auto ad_here = target.어쩌구 ; 이렇게 정의헤버리면 iterator after end가 호출되어버림. 변수를 초기화 해버렸으니까 while문 안에서. 그래서 while 속 ad_here가 변하질 않음. while 속 ad_here는 함수 바깥쪽 변수니까.
		}

		return answer;

		*/
}

int main() {

	vector<string> str1 = {"and", "notad", "abcd"};
	vector<string> str2 = { "there","are","no","a","ds" };

	printVector(solution(str1));
	printVector(solution(str2));

	return 0;
}