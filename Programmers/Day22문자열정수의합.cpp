#include <string>
#include <iostream>

#include <numeric> // accumulate를 활용하기 위한 lib.

using namespace std;

static int solution(string num_str) {
    

    // accumulate를 활용한 풀이
    return accumulate(num_str.cbegin(), num_str.cend(), 0, 
        [](int x, char y) { 
            return x + (y - '0'); 
        }
    );

    
    // 내가 제출한 풀이
    int answer = 0;

    for (const auto& i : num_str) {
        // cout << i << " ";
        answer += i - '0';
    }

    return answer;
}


int main() {

    /*
    num_str	    result
    "123456789"	45
    "1000000"	1
    */

    cout << solution("123456789") << endl;
    cout << solution("1000000") << endl;


    return 0;
}