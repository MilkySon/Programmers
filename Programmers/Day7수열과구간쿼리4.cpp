#include <string>
#include <vector>

#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    for (const vector<int>& query : queries) {
        
        int s = query[0];
        int e = query[1];
        int k = query[2];

        for (int i = s; i <= e; i++) {
            if (i % k == 0) {
                arr[i] += 1; // arr[i]++; 이렇게 적어도 좋다.
            }
        }
    }

    return arr;
}

static void printVector(vector<int> arr) {
    cout << "{ ";
    for (int a : arr) {
        cout << a << " ";
    }
    cout << "}";
}


int main() {

    vector<int> arr = { 0,1,2,4,3 };
    vector<vector<int>> queries = { {0,4,1},{0,3,2},{0,3,3} };

    printVector(solution(arr, queries));

    return 0;
}