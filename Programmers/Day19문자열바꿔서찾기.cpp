#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

static int solution(string myString, string pat) {
    
    
    // 꺼진 transform도 다시보자.
    transform(pat.cbegin(), pat.cend(), 
        pat.begin(), 
        [](char c) {
            return c == 'A' 
                ? 'B' 
                : 'A'; 
        }
    );
    
    return myString.find(pat) != string::npos;
    

    /* 내가 제출한 풀이
    int answer = 0;

    vector<int> Abox;
    vector<int> Bbox;

    // pat의 "A" <-> "B" 맞바꾸기.
    for (int i = 0; i < pat.size(); i++) {

        if (pat[i] == 'A') {
            pat[i] = 'B';
        }
        else if (pat[i] == 'B') {
            pat[i] = 'A';
        }

    }

    // myString에 변환된pat이 존재하는지 확인하기.
    (myString.find(pat) != string::npos) ? (answer = 1) : (answer = 0);


    return answer;
    */
}

int main() {

    /*
    myString	pat	    result
    "ABBAA"	    "AABB"	1
    "ABAB"	    "ABAB"	0
    */

    cout << solution("ABBAA", "AABB") << endl;
    cout << solution("ABAB", "ABAB") << endl;
}