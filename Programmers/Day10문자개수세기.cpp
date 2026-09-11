#include <string>
#include <vector>

#include <iostream>

using namespace std;

static vector<int> solution(string my_string) {
    

    // 감탄한 풀이.
    vector<int> answer(52, 0);       // 미리 배열의 크기 설정!
    for (const auto& ch : my_string) // 적절한 자료형 지정!
    {
        if (ch >= 'a')                  // 조건문을 지정. (소문자 char가 더 크다는 점을 이용한듯)
        {
            answer[(ch - 'a') + 26]++;  // 헷갈리는 숫자 대신 'a'로 인덱스 지정. 그리고 앞서 대문자가 26칸을 잡쉈으니 나머지 26칸을 쓰기 위해 +26 적어준 것도 보기 쉬움.
        }
        else
        {
            answer[ch - 'A']++;         // 마찬가지로 헷갈리지 않도록 'A'로 인덱스 지정함. 그리고 +=1 대신 ++로 더하여나아가는 것도 매우 c++ 스러운 느낌.
        }

    }
    return answer;



    
    /* 내가 제출한 풀이
    vector<int> answer;

    // 대문자 : 65~90
    // 소문자 : 97~122

    // 일단 알파벳을 담을 그릇을 만들자.
    for (int i = 0; i < (90 - 65) + 1 + (122 - 97) + 1; i++) { // 그냥 알파벳 개수 지정하는거라서 엉성하게 만들어도 다이죠부!
        answer.push_back(0); // 일단 죄다 0 개임.
    }

    for (const auto& str: my_string) { // (int str : my_string) {
        
        // 대문자
        for (int dai = 65; dai <= 90; dai++) {
            if (str == dai) {
                answer[dai - 65]++;
            }        
        }

        // 소문자
        for (int so = 97; so <= 122; so++) {
            if (str == so) {
                answer[so + 26 - 97]++;
            }
        }

    }

    return answer;
    */

}


int main() {

    vector<int> sol = solution("Programmers");

    cout << "{ ";

    for (int i = 0; i < sol.size(); i++) {
        cout << sol[i] << " ";
    }

    cout << "}";
    
    return 0;
}



