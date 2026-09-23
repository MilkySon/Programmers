#include <string>
#include <vector>
#include <iostream>

using namespace std;

static int solution(string str1, string str2) {
    
    return str2.find(str1) != string::npos;
}

int main() {

    /*
    str1	str2	    result
    "abc"	"aabcc"	    1
    "tbt"	"tbbttb"	0
    */

    cout << solution("abc", "aabcc") << endl;
    cout << solution("tbt", "tbbttb") << endl;

    return 0;
}