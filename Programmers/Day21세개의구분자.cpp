#include <string>
#include <vector>
#include <iostream>

#include <algorithm>
#include <sstream>


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

static vector<string> solution(string myStr) {
    
    
    // sstream을 활용한 풀이
    vector<string> answer;

    for (auto& c : myStr)
    {
        if (c == 'a' || c == 'b' || c == 'c')
        {
            c = ' ';
        }
    }

    string str;
    stringstream ss;
    ss.str(myStr);
    while (ss >> str)
    {
        answer.emplace_back(str);
    }

    if (answer.empty())
    {
        answer.emplace_back("EMPTY");
    }

    return answer;



    /* 내가 제출한 풀이 
    vector<string> answer;
    string container = "";
    
    for (int i = 0; i < myStr.length(); i++) {
        if (myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c') {

            container += myStr[i];  
            cout << container << " ";
        }
        else if (container != "") {
            answer.push_back(container);
            container = "";
        }
    }

    answer.push_back(container);

    if (answer[0] == "") {

        answer = { "EMPTY" };
    }

    return answer;
    */

    /*
    vector<int> pointer;

    int i = 0;
    while (i < myStr.length()) {
        
        int aBox = myStr.find("a");
        
        if (aBox != string::npos) {
            pointer.push_back(aBox);
        }
        

        int bBox = myStr.find("b");
        
        if (bBox != string::npos) {
            pointer.push_back(bBox);
        }
        
        int cBox = myStr.find("c");
        
        if (cBox != string::npos) {
            pointer.push_back(cBox);
        }
    }

    sort(pointer.begin(), pointer.end());
    
    // myStr.substr(시작위치, 길이)
    
    return answer;
    */
}


int main() {
    
    /*
    myStr	                result
    "baconlettucetomato"	["onlettu", "etom", "to"]
    "abcd"	                ["d"]
    "cabab"	                ["EMPTY"]
    */
    printVector(solution("baconlettucetomato"));
    printVector(solution("abcd"));
    printVector(solution("cabab"));

    return 0;
}