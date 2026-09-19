// chatGPT sstream 해설
// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa7e505-30b8-83ee-8cb6-da0866e9d48a

#include <string>
#include <vector>
#include <iostream>
#include <sstream> // 문자열 스트림을 활용하기 위해 도입.

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
    
 
    // sstream을 활용한 풀이
    vector<string> answer;

    string str;
    stringstream ss; // sstream -> string을 cin함수 처럼 만들어주는 친구.
    ss.str(my_string);
    while (ss >> str)   // >> 연산자는 기본적으로 앞의 공백을 건너뛰고, 다음 공백이 나타날 때까지 읽기 때문입니다.
    {
        answer.emplace_back(str);
    }

    return answer;


    /* 내가 제출한 풀이 
    vector<string> answer;
    char previous1 = ' ';
    string wrapping = "";
    my_string += " ";


    for (char const& candy : my_string) {
        
        // cout << candy << " ";


        if (candy == ' ' ) {
            if ((previous1 != ' ')) {
                answer.push_back(wrapping);
                wrapping = "";
            }
            else {
                continue;
            }
        }
        else if (candy != ' ') {
            wrapping += candy;
            // cout << wrapping << " ";
        }
        
        previous1 = candy;
        // cout << previous1 << " ";
    }

    return answer;
    */

    /*  최초로 시도한 풀이 (실패했습니다.)
    vector<string> answer;
    my_string += " ";
    size_t start = 0;
    size_t end = my_string.find(' ', start);

    while(start != my_string.size()) {

        string candy(my_string.begin() + start, my_string.begin() + end);        
        answer.push_back(candy);

        size_t start = end++;
        
        end = my_string.find(' ', start);
    }
    
    return answer;
    */
}

int main() {

    printVector(solution(" i    love  you"));
    printVector(solution("    programmers  "));
    
    return 0;
}