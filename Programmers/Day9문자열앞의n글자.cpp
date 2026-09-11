#include <string>
#include <iostream>

using namespace std;

static string solution(string s, int n) {
 
	// string 풀이
	return string{ s.begin(), s.begin() + n };

	/* substr 풀이
    return my_string.substr(0, n);
	*/

	/* 내가 제출한 풀이(이 바보야 ㅠㅠ)
	string answer = "";
    int i =0;
    while (i<n) {
        answer += my_string[i];
        i++;
    }
    return answer;
    */

}

int main() {

    cout << solution("ProgrammerS123", 11) << endl;
    cout << solution("He110W0r1d", 5) << endl;

    return 0;
}