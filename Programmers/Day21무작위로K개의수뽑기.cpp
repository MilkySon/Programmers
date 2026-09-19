#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

#include <unordered_map> // unordered_map 을 쓰기 위한 lib.

using namespace std;

static void printVector(vector<int> arr) {

    cout << "{ ";

    for (int ar : arr) {
        //cout << "{ ";
        cout << ar << " ";
        // cout << "}";
    }

    cout << "}" << endl;

}


static vector<int> solution(vector<int> arr, int k) {



    //unordered_map으로 푸는 방법
    vector<int> answer;
    unordered_map<int, int> counter;

    for (const auto& i : arr)
    {
        if (counter[i]++ == 0)
            answer.push_back(i);
    }
    answer.resize(k, -1);
    return answer;
    


    /* 내가 제출한 풀이
    vector<int> answer;

    // 일정한 범위 내에서 무작위로 수를 뽑는다.
    // 지금까지 나온적이 없는 수이면 배열 맨 뒤에 추가한다.


    // 확인 시작.
    for (int i = 0; i < arr.size(); i++) {
        
        if (answer.empty()) {
            answer.push_back(arr[i]); // first mover는 킹정이야.
        }


        if (answer.size() < k) { // answer의 크기가 k를 넘지 못하도록 한다.

            if (find(answer.begin(), answer.end(), arr[i]) == answer.end()) { // 이때까지 못 본 수라면 넣는다.

                answer.push_back(arr[i]);  // 쑤욱
            }
        }

        else { // answer에 들어간 배열 크기 = k이면 그대로 끝내기.
        
            break;
        }

        // 끝까지 가도 배열크기가 k가 되지 않는다면 다음으로 넘어가기
    }

    // 만약 k값을 못 넘으면 남은 부분은 {-1}로 채운다.
    while (answer.size() < k) {

        answer.push_back(-1);
    }

    return answer;
    */

}


int main() {
    
    /*
    arr	                k	result
    [0, 1, 1, 2, 2, 3]	3	[0, 1, 2]
    [0, 1, 1, 1, 1]	    4	[0, 1, -1, -1]
    */

    printVector(solution({ 0, 1, 1, 2, 2, 3 }, 3));
    printVector(solution({ 0, 1, 1, 1, 1 }, 4));

    return 0;
}