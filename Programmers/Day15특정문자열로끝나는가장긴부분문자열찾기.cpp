#include <string>
#include <vector>
#include <iostream>
#include <algorithm>    // reverse 쓰기

using namespace std;

static string solution(string myString, string pat) {


    // substr을 활용한 풀이 : substr(시작 위치, 가져올 문자 개수) : *가져올 문자 개수*는 [pat에 해당하는 인덱스+pat의 길이]로 찾은듯?
    return myString.substr(0, myString.rfind(pat) + pat.length());


    /* 내가 제출한 풀이
    string answer = "";

    // pat으로 끝나는 가장 긴 문자열을 필요로 하므로, 뒤집어서 카운트. (왜 뒤집는지는 나중에)
    reverse(myString.begin(), myString.end());
    reverse(pat.begin(), pat.end());

    // pat에 해당하기 '직전'의 인덱스를 발견
    auto pat_house = myString.find(pat);

    // 그러면 제일 끝 부터 pat의 직전 인덱스 까지만 제거하고.. 
    myString.erase(myString.begin(), myString.begin() + pat_house);

    // 제거한 다음 다시 뒤집어버리면 끝!
    reverse(myString.begin(), myString.end());
    
    return myString;
     */
}


int main() {

    /* 
    myString	pat	    result
    "AbCdEFG"	"dE"	"AbCdE"
    "AAAAaaaa"	"a"	    "AAAAaaaa"
    */

    cout << solution("AbCdEFG", "dE") << endl;
    cout << solution("AAAAaaaa", "a") << endl;

    return 0;
}