#include <string>
#include <vector>

#include <iostream>

#include <algorithm> // reverse 함수 활용을 위한 라이브러리.

using namespace std;

static string solution(string my_string, vector<vector<int>> queries) {
    
    // reverse 활용 풀이
    for (const auto& q : queries) {
        reverse(my_string.begin() + q[0], my_string.begin() + q[1] + 1);
        // reverse(뒤집을 위치 시작점 , 뒤집을 위치 끝점)
    }
    return my_string;
    
    /* 내가 제출한 풀이
    // for (vector<int> query : queries) { 이렇게도 쓸 수 있지만, 연습 겸 아래처럼 const vector<int>&을 적어보자.
    for (const vector<int>& query : queries) {
        int start = query[0];
        int end = query[1];
        int k = 0;
        // cout << k << endl;
        while (start + k < end - k) {
            
            
            swap(my_string[start + k], my_string[end - k]);
           //  cout << my_string << endl;
            k++;
        }
    }
    return my_string;
    */
}

int main() {

    cout << solution("rermgorpsam", { {2,3},{0,7},{5,9},{6,10} }) << endl;

    return 0;
}