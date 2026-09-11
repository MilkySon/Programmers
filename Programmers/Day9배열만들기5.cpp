#include <string>
#include <vector>

#include <iostream>

using namespace std;

static vector<int> solution(vector<string> intStrs, int k, int s, int l) {

    // substr 활용 풀이
    vector<int> answer;
    for (int i = 0; i < intStrs.size(); i++) {
        string a = intStrs[i].substr(s, l);
        int b = stoi(a);
        if (b > k) answer.push_back(b);
    }
    return answer;
    /* 

    C++ substr 뜻
    C++에서 substr 함수는 문자열의 특정 부분을 복사하여 새로운 문자열 객체로 반환하는 함수입니다. 
    이 함수는 [문자열의 시작 인덱스]와 [추출할 부분 문자열의 길이]를 인수로 전달하여 사용할 수 있습니다. 
    예를 들어, 
    std::string str = "Hello World!"; 
    std::string sub1 = str.substr(6, 5);
    ... 는 "World" 부분 문자열을 반환합니다.

    */


    /* 내가 제출한 풀이 
    vector<int> answer;

    for (const string& query : intStrs) { // for (string query : intStrs) {

        // answer_Candidate 초기화.
        string answer_Candidate = "";

        for (int n = s; n < s + l; n++) {
            // s부터 시작하는 길이 l짜리 부분 문자열 제작.
            int ss = query[n] - '0'; // char 자료형 숫자를 int형 숫자로 바꾸는 코드.
            answer_Candidate += to_string(ss);
        }
        // cout << stoi(answer_Candidate) << " "; // 잘 돌아가나 확인.

        // 정수로 변환된 [부분 문자열] > k 이라면, answer에 담기.
        if (stoi(answer_Candidate) > k) {
            answer.push_back(stoi(answer_Candidate));
        }
    }
    return answer;
    */
}


int main() {

    /*
                                       intStrs	    k	s	l	result
    ["0123456789","9876543210","9999999999999"]	50000	5	5	[56789, 99999]
    
    */


    vector<string> intStrs = { "0123456789","9876543210","9999999999999" };
    int k = 50000;
    int s = 5;
    int l = 5;

    vector<int> answer = solution(intStrs, k, s, l);

    cout << "\n ------------ \n";

    cout << "{ ";

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }

    cout << "}";

    return 0;
}

