#include <string>
#include <vector>

#include <iostream>

using namespace std;

static vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (vector<int>& query : queries) {
        int s = query[0];
        int e = query[1];
        int k = query[2];

        // s와 e 사이를 시찰해보기.
        int min_now = -1;
        for (int i = s; i <= e; i++) {
            if (arr[i] > k) { // k보다 큰 경우
                if ( (min_now == -1) || (arr[i] < min_now)) { // 최초로 조건 만족한 case  이거나, 기존 최솟값보다 더 작은 경우
                    min_now = arr[i]; // 기존 arr[i] 보다 더 작은 값이 있다면 갱신.
                }
            }
        }

        // 가장 작은 arr[i]가 k보다 크면 answer에 넣어주자.
        if (min_now > k) {
            answer.push_back(min_now);
        }
        else {
            answer.push_back(-1);
        }

    }

    return answer;
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
    vector<vector<int>> queries = { {0,4,2},{0,3,2},{0,2,2} };

    printVector(solution(arr, queries));

}