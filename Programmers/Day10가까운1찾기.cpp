#include <iostream>
#include <string>
#include <vector>

using namespace std;

static int solution(vector<int> arr, int idx) {
    
    // 고인물(?) 풀이.
    const auto& it{ find(arr.cbegin() + idx,arr.cend(),1) };
    return it != arr.cend() ? distance(arr.cbegin(), it) : -1;
    
    
    /* 내가 제출한 풀이
    int answer = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1 && i >= idx) {
            return i;
        }
    }
    
    return answer;
    */

}

int main() {

    /*
    
    arr	                idx	result
    [0, 0, 0, 1]	    1	3
    [1, 0, 0, 1, 0, 0]	4	-1
    [1, 1, 1, 1, 0]	    3	3
    
    */

    cout << solution({ 0,0,0,1 }, 1) << endl;
    cout << solution({ 1,0,0,1,0,0 }, 4) << endl;
    cout << solution({ 1,1,1,1,0 }, 3) << endl;


    return 0;
}