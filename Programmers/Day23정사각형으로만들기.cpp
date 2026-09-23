#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

static vector<vector<int>> solution(vector<vector<int>> arr)
{

    // 간결한 풀이
    vector<vector<int>> answer;

    int size = max(arr.size(), arr[0].size());
    vector<vector<int>> temp(size, vector<int>(size, 0));
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr[i].size(); j++)
            temp[i][j] = arr[i][j];
    answer = temp;
    
    return answer;

    /* 내가 제출한 풀이
    vector<vector<int>> answer;
    // arr의 행 수가 더 많다면
    int add_num = (arr.size() - arr[0].size());
    if (add_num > 0 ) {
        for (int i = 0 ; i < arr.size(); i++) {
            for (int j = 0; j < add_num; j++) {
                arr[i].push_back(0);
            }
        }
    }
    // arr의 열 수가 더 많다면
    else if (add_num < 0) {
        add_num = abs(add_num);
        int adding_size = arr[0].size();
        vector<int> temp;
        for (int i = 0; i < adding_size; i++) {
            temp.push_back(0);
        }
        for (int i = 0 ; i < add_num; i++) {
            arr.push_back(temp);
        }
    }
    return arr;
    */
}

int main() {
    /*
    arr	                                                                result
    [[572, 22, 37], [287, 726, 384], [85, 137, 292], [487, 13, 876]]    [[572, 22, 37, 0], [287, 726, 384, 0], [85, 137, 292, 0], [487, 13, 876, 0]]
    [[57, 192, 534, 2], [9, 345, 192, 999]]                             [[57, 192, 534, 2], [9, 345, 192, 999], [0, 0, 0, 0], [0, 0, 0, 0]]
    [[1, 2], [3, 4]]                                                    [[1, 2], [3, 4]]
    */

    vector<vector<int>> case1 = { {572, 22, 37 }, { 287, 726, 384 }, { 85, 137, 292 }, { 487, 13, 876 } };
    vector<vector<int>> case2 = { {57, 192, 534, 2 }, { 9, 345, 192, 999 } };
    vector<vector<int>> case3 = { {1,2},{3,4} };

    /*출력문 만들기 귀찮으니.. 나중에 해두자
    cout << solution(case1) << endl;
    cout << solution(case2) << endl;
    cout << solution(case3) << endl;
    */

    return 0;
}