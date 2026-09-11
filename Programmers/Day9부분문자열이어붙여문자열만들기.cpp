#include <string>
#include <vector>

#include <iostream>

using namespace std;

static string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for (int i = 0; i < parts.size(); i++) {
        int s = parts[i][0];
        int e = parts[i][1];
        // my_strings[i].substr(s,e-s+1);
        answer += my_strings[i].substr(s, e - s + 1);
    }
    return answer;
}

/*

C++ substr 뜻
C++에서 substr 함수는 문자열의 특정 부분을 복사하여 새로운 문자열 객체로 반환하는 함수입니다.
이 함수는 [문자열의 시작 인덱스]와 [추출할 부분 문자열의 길이]를 인수로 전달하여 사용할 수 있습니다.
예를 들어,
std::string str = "Hello World!";
std::string sub1 = str.substr(6, 5);
... 는 "World" 부분 문자열을 반환합니다.

*/

int main() {
    /*
    my_strings	parts	result
["progressive", "hamburger", "hammer", "ahocorasick"]	[[0, 4], [1, 2], [3, 5], [7, 7]]	"programmers"
    
    */

    vector<string> my_strings = { "progressive", "hamburger", "hammer", "ahocorasick" };
    vector<vector <int>> parts = { {0,4},{1,2},{3,5},{7,7} };

    cout << solution(my_strings, parts) << endl;

    return 0;
}