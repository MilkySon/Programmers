#include <string>
#include <vector>

#include <iostream>
#include <numeric> // iota 함수를 쓰기 위해서 들고옴.

using namespace std;

static vector<int> solution(int start_num, int end_num) {
    
    // iota를 활용한 풀이.
    // C++의 std::iota는 지정한 범위의 컨테이너나 배열에 
    // 1씩 증가하는 연속된 숫자를 채워 넣는 
    // 표준 라이브러리 함수
    vector<int> answer(end_num - start_num + 1);
    iota(answer.begin(), answer.end(), start_num);
    return answer;

    /* 내가 제출한 풀이 
    vector<int> answer;

    for (int i = start_num; i <= end_num; i++) {
        answer.push_back(i);
    }
    return answer;
    */
}

static void printVector(vector<int> arr) {
    cout << "{ ";
    for (int a : arr) {
        cout << a << " ";
    }
    cout << "}";
}


int main() {

    printVector(solution(3, 10));

    return 0;
}