
// chatGPT 해설 꼭 읽어보기!!!(왜 static_cast<char> 을 써야만 하는지 등) --> 41번 Line 참조

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

static string solution(string my_string, string alp) {

    /*
    // 깔끔한 풀이
    for (auto& v : my_string)
    {
        if (v == alp[0])
        {
            v -= 32;
        }
    }

    return my_string;
    */

    /* 내가 제출한 풀이 (그저 람다를 써보고 싶었던 청년)
   */
   transform(my_string.begin(),
        my_string.end(),
        my_string.begin(),
        
       
        // 이거도 ㄱㄴ함.
        [alp](char& is_it_alp) { // [alp] 대신 [=]을 쓰면 모든 외부변수가 입장함. [alp]를 써서 '아! alp 쓰시는구나!' 생각이 들게끔 만들어둔것. 
            return (is_it_alp == alp[0]) 
                ? toupper(is_it_alp) 
                : is_it_alp; 
        }
       
        /* chatGPT 해설 꼭 읽어보기!!!(왜 static_cast<char> 을 써야만 하는지 등)
        // https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa52f36-cbb8-83ee-8443-49e2513f46e3
        [alp](char& is_it_alp) { // [alp] 대신 [=]을 쓰면 모든 외부변수가 입장함. [alp]를 써서 '아! alp 쓰시는구나!' 생각이 들게끔 만들어둔것. 
            if (is_it_alp == alp[0]) { 
                return static_cast<char>(toupper(is_it_alp)); 
            } 
            else { 
                return is_it_alp; 
            } 
        }
       */
    );
    
    return my_string;
   

}


int main() {
    /*
    my_string	    alp	result
    "programmers"	"p"	"Programmers"
    "lowercase"	    "x"	"lowercase"
    */

    cout << solution("programmers", "p") << endl;
    cout << solution("lowercase", "x") << endl;

    return 0;
}