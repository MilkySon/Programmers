#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string answer = "";
static string solution(vector<string> str_list, string ex) {

    // 고인물 풀이
    for_each(str_list.cbegin(), str_list.cend(), 
        [ex](string n) { 
            if (n.find(ex) == -1) {
                answer += n;
            }
        }
    );
    return answer;

    /* 내가 제출한 풀이
    string answer = "";

    for (const auto& s : str_list) {
        if (s.find(ex) == string::npos) {
            answer += s;
        }
    }
    return answer;

    */

}



int main() {

    /*
    str_list	            ex	    result
    ["abc", "def", "ghi"]	"ef"	"abcghi"
    ["abc", "bbc", "cbc"]	"c"	    ""
    */

    cout << solution({ "abc", "def", "ghi" }, "ef") << endl;
    cout << solution({ "abc", "bbc", "cbc" }, "c") << endl;

    return 0;
}
