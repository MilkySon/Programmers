#include <vector>
#include <iostream>

using namespace std;

static int solution(vector<int> num_list) {

    // 전문가(?)의 간결한 풀이
    int odd = 0, even = 0;
    for (int i = 0; i < num_list.size(); i++)
        (i & 1) ? odd += num_list[i] : even += num_list[i];
    return max(odd, even);
    
    /* 내가 제출한 풀이 
    int oddSum = 0;
    int evenSum = 0;

    // 홀수
    for (int i = 0; i < num_list.size(); i += 2) {
        oddSum += num_list[i];
    }

    // 짝수
    for (int i = 1; i < num_list.size(); i += 2) {
        evenSum += num_list[i];
    }

    // oddSum >= evenSum ? return oddSum : return evenSum; // 이렇게 적으면 대참사.
    
    return oddSum >= evenSum ? oddSum : evenSum;
    */

}

int main() {

    /*
    num_list	        result
    [4, 2, 6, 1, 7, 6]	17
    [-1, 2, 5, 6, 3]	8
    */

    cout << solution({ 4, 2, 6, 1, 7, 6 }) << endl;
    cout << solution({ -1, 2, 5, 6, 3 }) << endl;

    return 0;
}