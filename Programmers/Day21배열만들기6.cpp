#include <string>
#include <vector>
#include <iostream>

#include <stack> // stack을 활용한 풀이

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

static vector<int> solution(vector<int> arr) {
    

    // 스택을 활용한 풀이
    stack<int> stk;
    for (int i = 0; i < arr.size(); i++)
    {
        if (stk.empty()) stk.push(arr[i]);
        else if (stk.top() == arr[i]) stk.pop();
        else                          stk.push(arr[i]);
    }

    if (stk.empty()) return { -1 };

    int idx = stk.size();
    vector<int> answer(idx, 0);
    while (!stk.empty()) {
        answer[--idx] = stk.top();
        stk.pop();
    }
    return answer;


    /* 내가 제출한 풀이 
    vector<int> stk;
    int i = 0;

    while (i < arr.size()) {

        if (stk.empty()) {
            stk.push_back(arr[i]);
        }
        else if (stk.back() == arr[i]) {
            stk.pop_back();
        }
        else {
            stk.push_back(arr[i]);
        }
        i++;
    }

    if (stk.empty()) {
        stk.push_back(-1);
    }

    return stk;
    */
}

int main() {

    /*
    arr	            result
    [0, 1, 1, 1, 0]	[0, 1, 0]
    [0, 1, 0, 1, 0]	[0, 1, 0, 1, 0]
    [0, 1, 1, 0]	[-1]
    */

    printVector(solution({ 0, 1, 1, 1, 0 }));
    printVector(solution({ 0, 1, 0, 1, 0 }));
    printVector(solution({ 0, 1, 1, 0 }));

    return 0;
}