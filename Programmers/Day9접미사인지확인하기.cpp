#include <string>
#include <vector>

#include <iostream>

using namespace std;

static int solution(string my_string, string is_suffix) {
    

    // C++에 뇌가 지배당한 사람 풀이
    if (my_string.size() < is_suffix.size())
    {
        return 0;
    }
    return my_string.substr(my_string.size() - is_suffix.size()) == is_suffix; 
    // 츌발점 포인트를 이렇게 (my_string.size() - is_suffix.size()) 표현한게 ㅎㄷㄷ..
    
    
    /* 내가 제출한 풀이
    int answer = 0;
    int i = 0;
    for (int i = 0; i < my_string.length(); i++) {
        if (is_suffix == my_string.substr(i)) {
            answer = 1;
        } // while을 써서 i 를 my_string.length() 까지 가도록 억제(?) 하는 법?
    }
    return answer;
    */

}

int main() {
    
    /* 
    my_string	is_suffix	result
    "banana"	"ana"	    1
    "banana"	"nan"	    0
    "banana"	"wxyz"	    0
    "banana"	"abanana"	0
    */

    cout << solution("banana", "ana") << endl;
    cout << solution("banana", "nan") << endl;
    cout << solution("banana", "wxyz") << endl;
    cout << solution("banana", "abanana") << endl;

    return 0;
}