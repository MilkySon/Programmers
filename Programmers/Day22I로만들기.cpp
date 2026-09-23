#include <string>
#include <vector>
#include <algorithm>

#include <iostream>

using namespace std;

static string solution(string myString) {

    // transform을 활용한 풀이
    transform(myString.cbegin(), myString.cend(), myString.begin(), 
        [](char c) { 
            return c < 'l' 
                ? 'l'
                : c; 
        }
    );

    return myString;

    /* 내가 제출한 풀이
    for (int i = 0; i < myString.size(); i++) {
        if (myString[i] < 'l') {
            myString[i] = 'l';
        }
    }
    return myString;
    */

}

int main() {

    /*
    
    myString	    result
    "abcdevwxyz"	"lllllvwxyz"
    "jjnnllkkmm"	"llnnllllmm"
    
    */

    cout << solution("abcdevwxyz") << endl;
    cout << solution("jjnnllkkmm") << endl;

    return 0;
}