#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

static void printVector(vector<int> arr) {

    cout << "{ ";

    for (int ar : arr) {
        cout << "{ ";
        cout << ar << " ";
        cout << "}";
    }

    cout << "}" << endl;

}

static vector<int> solution(string myString) {
    
    
    // 변수메이킹 최소화 풀이
    vector<int> answer;
    string temp = "";

    for (const char &c : myString) {
        if (c != 'x') {
            temp += c;
        }
        else {
            answer.emplace_back(temp.length());
            temp = "";
        }
    }

    answer.emplace_back(temp.length());

    return answer;
    

    /* 최초 성공
    myString += "x";
    vector<int> answer;
    int parts = 0;
    int cnt = 0;
    for (const char& isX : myString) {
        if (isX == 'x') {
            answer.emplace_back(parts);
            parts = 0;
        }
        else {
            parts++;
        }
    }
    return answer;
    */

    /* 최초 시도
    vector<int> answer;
    int yamete = myString.find("x");

    while (yamete != myString.length()) {
        cout << yamete;
        answer.emplace_back(yamete);
        yamete = myString.find("x", yamete + 1);
        // yamete = myString.find("x", static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(yamete) + 1);
    }

    return answer;
    */
}




int main() {

    /*
    myString	    result
    "oxooxoxxox"	[1, 2, 1, 0, 1, 0]
    "xabcxdefxghi"	[0, 3, 3, 3]
    */

    printVector(solution("oxooxoxxox"));
    printVector(solution("xabcxdefxghi"));

    return 0;
}