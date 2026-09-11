#include <string>
#include <vector>

#include <iostream>

using namespace std;

static string solution(string my_string, int n) {

    // substr을 활용한 풀이
    string answer = "";
    answer = my_string.substr(my_string.length() - n); // string.substr(추출할 문자의 시작점) --> 이렇게 하면 시작점 부터 ~~ 끝까지 추출하는듯..?!
    return answer;


    /* 내가 제출한 풀이
    

    string answer = "";
    
    for (int i = my_string.size() - n; i<my_string.size(); i++) {
        answer += my_string[i];
    }
    
    return answer;

    
    */


}

int main() {



    /*          my_string	n	result
        "ProgrammerS123"	11	"grammerS123"
            "He110W0r1d"	5	"W0r1d"
    */


    cout << solution("ProgrammerS123", 11) << endl;
    cout << solution("He110W0r1d", 5) << endl;

    return 0;
}