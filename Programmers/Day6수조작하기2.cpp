#include <string>
#include <vector>

#include <iostream>

using namespace std;

static string solution(vector<int> numLog) {
    
    string answer = "";
    
    for (int i = 1; i < numLog.size(); i++) {
        
        int whoAreYou = numLog[i] - numLog[i-1];
        
        switch (whoAreYou) {
            case 1: answer += "w"; break;
            case -1: answer += "s"; break;
            case 10: answer += "d"; break;
            case -10: answer += "a"; break;
        }
    }

    return answer;
}

int main() {

    vector<int> numLog = { 0,1,0,10, 0, 1, 0, 10, 0, -1, -2, -1 };

    cout << solution(numLog) << endl;

    return 0;
}