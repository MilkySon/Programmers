#include <string>
#include <vector>

#include <iostream>

using namespace std;

static vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    // 매우 깔끔깔끔 풀이
    for (const vector<int>& q : queries) {
        swap(arr[q[0]], arr[q[1]]);
    }
    return arr;


    /* 내가 제출한 풀이
    for (int idx = 0; idx < queries.size(); idx++) {
        
        // i, j가 뭘까.
        int i = queries[idx][0];
        int j = queries[idx][1];

        // i <-> j 교환
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;

    }
    return arr;
    */

}

void printVector(vector<int> arr) {
    cout << "{ ";
    for (int a : arr) {
        cout << a << " ";
    }
    cout << "}";
}


int main() {
    vector<int> arr = { 0,1,2,3,4 };
    vector<vector<int>> queries = { {0,3},{1,2},{1,4} };

    printVector(solution(arr,queries));

}