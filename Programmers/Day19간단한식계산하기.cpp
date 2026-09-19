#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

static int solution(string binomial) {

    // substr, find를 활용한 풀이
    int idx = binomial.find(" ");
    char op = binomial[idx + 1];
    int a = stoi(binomial.substr(0, idx));
    int b = stoi(binomial.substr(idx + 3));

    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    

    /* stringstream을 활용한 풀이
    int answer = 0;

    int a,b;
    char op;

    stringstream ss;
    ss.str(binomial);
    ss >> a>> op >>b;

    if(op == '+')
    {
        answer = a+b;
    }
    else if(op == '-')
    {
        answer = a-b;
    }
    else if(op == '*')
    {
        answer = a*b;
    }

    return answer;
    
    
    */


    /* 내가 제출한 풀이 
    int answer = 0;
    vector<string> v;
    string str;
    stringstream ss;
    ss.str(binomial);
    while (ss >> str) {
        v.emplace_back(str);
    }

    if (v[1] == "+") {
        answer = stoi(v[0]) + stoi(v[2]);
    }
    else if (v[1] == "-") {
        answer = stoi(v[0]) - stoi(v[2]);
    }
    else if (v[1] == "*") {
        answer = stoi(v[0]) * stoi(v[2]);
    }

    return answer;
    */
}

int main() {
    /*
    binomial	    result
    "43 + 12"	    55
    "0 - 7777"	    -7777
    "40000 * 40000"	1600000000
    */

    
    cout << solution("43 + 12") << endl;
    cout << solution("0 - 7777") << endl;
    cout << solution("40000 * 40000") << endl;
    

    return 0;
}