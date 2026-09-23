#include <iostream>
#include <vector>

using namespace std;

static int solution(vector<vector<int>> arr) {

    // 계산량을 반으로 줄인 풀이
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i][j] != arr[j][i]) {
                return 0;
            }
        }
    }
    return 1;

    /* 내가 제출한 풀이
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            if (arr[i][j] != arr[j][i]) {
                return 0;
            }
        }
    }
    return 1;
    */
}

int main() {
    
    /*
    arr	                                                                                result
    [[5, 192, 33], [192, 72, 95], [33, 95, 999]]	                                    1
    [[19, 498, 258, 587], [63, 93, 7, 754], [258, 7, 1000, 723], [587, 754, 723, 81]]	0
    */

    cout << solution({ {5, 192, 33}, { 192, 72, 95}, { 33, 95, 999} }) << endl;
    cout << solution({ {19, 498, 258, 587 }, { 63, 93, 7, 754 }, { 258, 7, 1000, 723 }, { 587, 754, 723, 81 } }) << endl;
    
    return 0;
}