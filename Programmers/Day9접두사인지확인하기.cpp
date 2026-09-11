#include <string>
#include <vector>

#include <iostream>

using namespace std;

static int solution(string my_string, string is_prefix) {

    // 풀이 from c++ 전문가
    return my_string.substr(0, is_prefix.size()) == is_prefix;
    
    /* 내가 제출한 풀이 
    if (is_prefix.length() > my_string.length()) {
        return 0;
    }

    string check_string = "";
    for (int i = 0; i < is_prefix.length(); i++) {
        check_string += my_string[i];
    }

    return check_string == is_prefix;
    */
}

int main() {


    cout << solution("banana", "abcd") << endl;

    return 0;
}