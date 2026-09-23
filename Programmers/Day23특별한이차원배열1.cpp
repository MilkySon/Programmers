#include <string>
#include <vector>
#include <iostream>

using namespace std;

static void printVector(vector<int> arr) {

    cout << "{ ";

    for (int ar : arr) {
        cout << ar << " ";
    }

    cout << "}" << endl;

}

static void printVector(vector<vector<int>> arr) {

    cout << "{ ";

    for (vector<int> ar : arr) {
        printVector(ar);
    }

    cout << "}" << endl;

}

static vector<vector<int>> solution(int n) {


    // 내가 해보고 싶었던 풀이 (아니 벡터 크기 정의 도대체 어떻게 하는겨???)
    vector<vector<int>> answer(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i)
    {
        answer[i][i] = 1;
    }
    return answer;

    
    /*
    // 람다식을 활용한 풀이
    return [=] { vector<vector<int>> a(n, vector<int>(n)); for (int i = 0; i < n; i++) a[i][i] = 1; return a; }();
    */


    /* 내가 제출한 풀이 
    vector<vector<int>> answer;
    vector<int> temp;

    for (int i = 0; i < n; i++) {
        temp.push_back(0);
    }
    for (int j = 0; j < n; j++) {
        answer.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        answer[i][i] = 1;
    }

    return answer;
    */

}

int main() {

    /*
    n	result
    3	[[1, 0, 0], [0, 1, 0], [0, 0, 1]]
    6	[[1, 0, 0, 0, 0, 0], [0, 1, 0, 0, 0, 0], [0, 0, 1, 0, 0, 0], [0, 0, 0, 1, 0, 0], [0, 0, 0, 0, 1, 0], [0, 0, 0, 0, 0, 1]]
    1	[[1]]
    */



    return 0;
}