
// chatGPT 해설
// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa3cbc2-8444-83ee-a2be-162edc90dc3d

#include <string>
#include <vector>
#include <iostream>

#include <algorithm>

using namespace std;

static int solution(string myString, string pat) {

    // transform을 활용한 풀이. toupper은 덤.
    transform(myString.begin(), myString.end(), myString.begin(), ::toupper);
    transform(pat.begin(), pat.end(), pat.begin(), ::toupper);


    return myString.find(pat) != string::npos;

    // transform(시작, 끝, 결과를_저장할_위치, 변환함수)
    // string::find() --> 문자열 안에서 부분 문자열을 찾음.
    //                --> 못 찾으면 string::npos 라는 특별한 값을 반환함.


    /* 내가 제출한 풀이 
    if (myString.size() >= pat.size()) {

        // 대소 구분을 고려x니까 죄다 대문자로 변경.
        for (char& strAlone : myString) {
            if (strAlone > 'Z') {
                strAlone -= 32;
            }
        }
        // pat에 대해서도 마찬가지로 대문자로 변경
        for (char& strAlone : pat) {
            if (strAlone > 'Z') {
                strAlone -= 32;
            }
        }

        //위풀이는
        //
        //문제에서 입력이 영문 알파벳뿐이라는 보장이 있을 때 괜찮습니다.

        //왜냐하면 'Z'보다 큰 ASCII 문자가 꼭 소문자인 것은 아니기 때문입니다.
        // 
        //예를 들어 '[' , '\\' , ']' , '^' , '_' , '`' ... 도 'Z' 보다 큽니다.
        //
        //일반적으로 쓰려면 차라리

        //if ('a' <= strAlone && strAlone <= 'z') {
        //    strAlone -= ('a' - 'A');
        //}
        //가 논리적으로 더 정확합니다.


        // time for comparison.
        
        int i = 0;
        while (myString.begin() + i + pat.size() != myString.end() || i == 0) {
            string comparer(myString.begin() + i, myString.begin() + i + pat.size());
            
            if (comparer == pat) {
                return 1;
            }
            i++;
        }
    }
    return 0;
    */

    /* 이터레이터 활용 ㄱㄴ?? --> 아래처럼 쓰는 건 안됨. (chatGPT 풀이 참조)
    auto it = find(myString.begin(), myString.end(), pat);
    return it.empty();
    */
}


int main() {

    /*
    myString	pat	    return
    "AbCdEfG"	"aBc"	1
    "aaAA"	    "aaaaa"	0
    */


    cout << solution("AbCdEfG", "aBc") << endl;
    cout << solution("aaAA", "aaaaa") << endl;
    
    cout << solution("aaAA", "123aeasd") << endl;
    cout << solution("aaAA", "aaAA") << endl;

    return 0;
}