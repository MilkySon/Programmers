#include <string>
#include <vector>
#include <iostream>

using namespace std;

static string solution(string n_str) {
    
    
    string answer = "";

    answer = to_string(stoi(n_str));

    return answer;
}


int main() {

    /*
    n_str	result
    "0010"	"10"
    "854020"	"854020"
    */

    cout << solution("0010") << endl;
    cout << solution("854020") << endl;

    return 0;
}