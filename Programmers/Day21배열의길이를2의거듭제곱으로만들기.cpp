#include <string>
#include <vector>
#include <iostream>
#include <cmath>

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

static vector<int> solution(vector<int> arr) {
    

    // chatGPT가 제안한 풀이
    int target = 1;

    while (target < arr.size()) {
        target *= 2;
    }

    arr.resize(target, 0); // STL 속 resize 함수를 알아두자!! (target으로 원하는 크기 설정 -> arr을 resize한다)  <-- arr.size(원하는 크기, 원하는 크기로 만들기 위해 채워넣을 수)

    return arr;

    /*
    // log를 활용한 풀이

    int n = arr.size();
    int dst = pow(2, ceil(log2(n))); // arr크기에 log2한거 올림(ceil. 반올림 x)한거를 제곱한거. arr이 6이면 -> log2(6)의 ceiling은 3 이니까, pow(2,3)이 되고, pow(2,3)은 2의 3제곱이라서 8이라는 값이 나오게 됨.

    for (int t = 0; t < dst - n; ++t) // 그러면 2^3 에다가 원래 크기를 빼면 얼만큼 0를 붙여야하는지 알 수 있다.
    {
        arr.emplace_back(0);
    }
    return arr;
    */

    /* 내가 제출한 풀이 --> 문제 풀이 도중에 while 조건문 설정하는게 자꾸 헷갈려서 시간이 지체됨.
    int what_size_want = 1;
    while (what_size_want < arr.size()) {
        what_size_want *= 2;
    }
    // while (what_size_want != arr.size()) { // !=는 두 값이 다르다는 사실만 확인합니다. 반면 <는 현재 배열의 크기가 목표 크기보다 작을 때만 원소를 추가한다는 의도를 명확하게 표현합니다.
                                              // 또한 예상치 못한 이유로 배열의 크기가 목표 크기를 초과했을 때도 반복문이 무한히 실행되는 상황을 방지할 수 있습니다.
        while (arr.size() < what_size_want) {
        arr.push_back(0);
    }
    
    return arr;
    */
}

int main() {

    /*
    arr	                result
    [1, 2, 3, 4, 5, 6]	[1, 2, 3, 4, 5, 6, 0, 0]
    [58, 172, 746, 89]	[58, 172, 746, 89]
    */

    printVector(solution({ 1, 2, 3, 4, 5, 6 }));
    printVector(solution({ 58, 172, 746, 89 }));

    return 0;
}