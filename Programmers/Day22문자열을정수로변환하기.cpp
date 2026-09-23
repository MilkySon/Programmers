#include <string>
#include <vector>
#include <iostream>

using namespace std;

static int solution(string n_str) {


    // stoi를 직접구현한 풀이;
    int answer = 0;
    for (int i = 0; n_str[i]; i++)
    {
        answer = answer * 10 + n_str[i] - '0';
    }
    return answer;



    /* 내가 제출한 풀이
    
    
    return stoi(n_str);

    
    */

}


int main() {
    /*
    n_str	result
    "10"	10
    "8542"	8542
    */

    cout << solution("10") << endl;
    cout << solution("8542") << endl;

    return 0;
}