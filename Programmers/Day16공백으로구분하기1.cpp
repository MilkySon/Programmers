
// chatGPT regex 해설
// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa6a501-e924-83ee-94f0-c3122c3ea502


#include <string>
#include <vector>
#include <iostream>

#include <regex> // regex 함수를 쓰기 위한 lib.

using namespace std;

static void printVector(vector<string> arr) {

    cout << "{ ";

    for (string ar : arr) {
        cout << "{ ";
        cout << ar << " ";
        cout << "}";
    }

    cout << "}" << endl;

}

static vector<string> solution(string my_string) {
    
    

    // 고인물 풀이 (이거 대체 뭐야;;)
    // " "(공백)을 기준으로 문자열을 잘라서, 공백이 아닌 조각들을 하나씩 꺼내는 iterator
    regex rx(" ");
    sregex_token_iterator iter(
        my_string.begin(), 
        my_string.end(), 
        rx, 
        -1
    ), end;

    return { iter, end };
    
    /*
    // 매우 깔끔하고 정석적인 풀이 (내가 가장 좋아하는 풀이)
    vector<string> answer;
    string a;
    for (int i = 0; i < my_string.size(); i++)
    {
        if (my_string[i] == ' ')
        {
            answer.push_back(a);
            a.clear();  // 이런게 있었구나..
        }
        else
        {
            a.push_back(my_string[i]);
        }
    }
    answer.push_back(a);
    return answer;
    */
    
    
    /* 내가 제출한 풀이
    vector<string> answer;

    int pos = 0;
    my_string = my_string + " "; // 만약 pos 가 없으면 my_string.end()를 반환하는 느낌을 내도록 세팅. 

    while (pos != my_string.size()) {

        int old_pos = pos;
        pos = my_string.find(" ", pos);
        
        string candy(my_string.begin() + old_pos, my_string.begin() + pos); 
        
        answer.push_back(candy);

        pos++;
    }

    return answer;
    */
}

int main() {


    /*
    my_string	    result
    "i love you"	["i", "love", "you"]
    "programmers"	["programmers"]
    */

    printVector(solution("i love you"));
    printVector(solution("programmers"));

    return 0;
}