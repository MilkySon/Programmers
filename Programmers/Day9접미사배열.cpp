#include <string>
#include <vector>
#include <iostream>
#include <algorithm> // sort 함수를 쓰기 위해 들고옴.

using namespace std;


// 정렬 순서를 지정하는 코드. (지금은 필요x) --> 지금도 필요해 !!!
static bool comp(string s1, string s2) {
    return s1 > s2; // string 사전 순서.
}
    

static vector<string> solution(string my_string) {
    vector<string> answer;

    
    // 비구니(?) 풀이
    // 접미사 리스트 생성
    for (int i = 0; i < my_string.size(); i++) {

        // 접미사를 담는 바구니 비우기
        string temp_zupmisa = "";

        for (int j = i; j < my_string.size(); j++) {
            temp_zupmisa += my_string[j];
        }
        answer.push_back(temp_zupmisa);
    }

    // answer를 사전 순으로 정렬.
    
    for (int isa_gago_sipo = 0; isa_gago_sipo < answer.size(); isa_gago_sipo++) {

        // 정렬을 위한 임시 버퍼(?) & 포인터(?)
        string temp = "";
        int isa_spot = isa_gago_sipo;

        for (int nado_gago_sipo = 1; isa_gago_sipo + nado_gago_sipo < answer.size(); nado_gago_sipo++) {
            
            if (answer[isa_gago_sipo + nado_gago_sipo] < answer[isa_spot]) {
                isa_spot = isa_gago_sipo + nado_gago_sipo;
            }
        }

        // 바꿔치기
        temp = answer[isa_spot];
        answer[isa_spot] = answer[isa_gago_sipo];
        answer[isa_gago_sipo] = temp;

    }
    return answer;


    /* 제일 깔끔한 풀이.
    vector<string> answer;
    for (int i = 0; i < my_string.length(); i++) {
        answer.push_back(my_string.substr(i));
    }
    sort(answer.begin(), answer.end()); // rbegin, rend 와 begin,end 의 차이점?
    return answer;

    */

    /* 내가 제출한 풀이
    // 접미사 리스트 생성 -> substr을 활용한 풀이
    // int k = my_string.length();
    // while (k--) { // my_string.size()-- 으로 하면 '식은 수정할 수 있는 value 여야 합니다'라는 오류가 출력되는데 왜이런걸까?

    int k = my_string.length();
    for (int i = 0; i <= my_string.size(); i++) {
        string qq = "";
        qq = my_string.substr(my_string.length() - i, my_string.length()); // 

        answer.push_back(qq);
    }

    // answer에 넣어둔 접미사 리스트를 배열.

    sort(answer.rbegin(), answer.rend(), comp); // sort함수 정렬 법의 디폴트 값이 [사전순]이라서 굳이 필요x


    return answer;

    */

}

int main() {

    cout << "{ ";
    string input = "banana";
    for (string a : solution(input)) {
        cout << a << " ";
    }
    cout << "}";

    return 0;
}