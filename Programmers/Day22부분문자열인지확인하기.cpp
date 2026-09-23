#include <string>
#include <vector>
#include <iostream>

using namespace std;

static int solution(string my_string, string target) {
    return my_string.find(target) != string::npos;
}

int main() {
    /*
    my_string	target	result
    "banana"	"ana"	1
    "banana"	"wxyz"	0
    */

    cout << solution("fordharrison", "n") << endl;
    cout << solution("banana", "b") << endl;
    cout << solution("banana", "ana") << endl;
    cout << solution("banana", "wxyz") << endl;

    return 0;
}