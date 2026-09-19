#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

#include <regex> // 정규식을 써보자.

using namespace std;

static string solution(string rny_String) {

    // regex를 활용한 풀이
    string answer = "";
    rny_String = regex_replace(rny_String, regex("m"), "rn");
    answer = rny_String;
    return answer;

    /* 내가 제출한 풀이
    while (1) {
        
        int mPlace = rny_String.find("m");

        if (mPlace != string::npos) {
            rny_String.insert(mPlace+1, "n");
            rny_String.replace(mPlace, 1, "r");
        }
        else {
            break;
        }
    }

    return rny_String;
    */
}

int main() {

    /*
    rny_string	    result
    "masterpiece"	"rnasterpiece"
    "programmers"	"prograrnrners"
    "jerry"	        "jerry"
    "burn"	        "burn"
    */

    cout << solution("masterpiece") << endl;
    cout << solution("programmers") << endl;
    cout << solution("jerry") << endl;
    cout << solution("burn") << endl;
    cout << solution("mom") << endl;

}