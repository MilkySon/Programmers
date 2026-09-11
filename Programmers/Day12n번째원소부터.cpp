

// chatGPT 해설
// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa11b23-0354-83e9-9c11-a0916bebebb5

#include <vector>
#include <iostream>

using namespace std;

static vector<int> solution(vector<int> num_list, int n) {
    
    // assign을 활용한 풀이
    vector<int> answer;
    answer.assign(num_list.begin() + n - 1, num_list.end());
    return answer;


    /* 내가 제출한 풀이
    vector<int> answer;
    answer = vector<int>(num_list.begin() + (n - 1), num_list.end());
    return answer;
    */
}

static void printVector(vector<int> vec) {

    cout << "{ ";

    for (int vv : vec) {
        cout << vv << " ";
    }

    cout << "}" << endl;

}



int main() {

    /*
    num_list	    n	result
    [2, 1, 6]	    3   [6]
    [5, 2, 1, 7, 5]	2   [2, 1, 7, 5]
    */

    auto sol1 = solution({ 2,1,6 }, 3);
    auto sol2 = solution({ 5,2,1,7,5 }, 2);

    printVector(sol1);
    printVector(sol2);

    return 0;
}


/*

assign()은 말 그대로

answer라는 이미 존재하는 벡터의 내용을 이 범위의 원소들로 교체해라.

*/


/*

answer = vector<int>(num_list.begin() + (n - 1), num_list.end());

얘는 생각하는 방식이 약간 다릅니다.

vector<int>(num_list.begin() + (n - 1), num_list.end())

이 부분에서 먼저 새로운 vector<int> 객체를 하나 생성합니다.

즉,

vector<int> temp(num_list.begin() + n - 1, num_list.end());

와 같은 일을 하는 셈이고, 그 다음

answer = temp;

처럼 answer에 대입합니다.

실제로는 임시 객체에 대한 move 등이 적용되기 때문에 단순히 "전부 한 번 더 복사한다"고 생각하면 정확하지는 않습니다.

*/



