#include <string>
#include <vector>

#include <iostream>

using namespace std;

static string solution(string my_string, int m, int c) {
    string answer = "";

    for (int i = 0; i < my_string.length(); i += m) {
        answer += my_string[i + c - 1];
    }

    return answer;
}

int main() {

    /*
    입출력 예
    my_string	            m	c	result
    "ihrhbakrfpndopljhygc"	4	2	"happy"
    "programmers"	        1	1	"programmers"
    */


    cout << solution("ihrhbakrfpndopljhygc", 4, 2) << endl;
    cout << solution("programmers", 1, 1) << endl;

    return 0;
}