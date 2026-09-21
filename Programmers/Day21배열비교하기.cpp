
//chatGPT 해설
//https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aae2eac-bb8c-83e9-ac0e-54873a00cfd1

#include <string>
#include <vector>
#include <iostream>

#include <numeric>  // accumulte 활용을 위한 lib.

using namespace std;

static int solution(vector<int> arr1, vector<int> arr2) {
    
    // 캡쳐 풀이
    auto key = [](const vector<int>& v) { //[&] --> 외부 변수 '참조' [=] -> 외부 변수 '복사' [] -> 외부 변수 '필요없음' . 
        int s = accumulate(v.begin(), v.end(), 0); // v라는 값으로 정의된 arr에 대한 [가중합] 구하기.
        return (v.size() << 14) | s;    // v.size에 대한 정보는 저 멀~~~~리 시프트해서 저장해둔다. 그리고 가중합 s 는 그냥 그대로 저장해두어서 OR 연산 (|)을 한다. 그래서 두 정보가 모두 보존 됨.
        };

    int A = key(arr1), B = key(arr2);
    
    return (A > B) - (A < B); // 어차피 v.size()가 같으면 둘의 가중합 차이 가 나옴. v.size()가 다르면 저 멀~~~~리 시프트 되었기 때문에, 충분히 큰 값끼리 빠져서 s는 사실상 뺄셈의 결과에 영향x
                              // 게다가 A가 더 크면 1, B가 더 크면 -1, A,B가 같으면 0이라는 값이 나올 수 있도록 세팅되어 있음.

    // accumulate를 활용한 풀이
    if (arr1.size() != arr2.size())
        return arr1.size() > arr2.size() ? 1 : -1;
    int sum1 = accumulate(begin(arr1), end(arr1), 0);
    int sum2 = accumulate(begin(arr2), end(arr2), 0);
    return sum1 > sum2 ? 1 : sum1 == sum2 ? 0 : -1;


    /* 내가 제출한 풀이
    int answer = 0;
    // 
    if (arr1.size() > arr2.size()) {
        return 1;
    }

    else if (arr1.size() < arr2.size()) {
        return -1;
    }
    else {

        int sum1 = 0;
        int sum2 = 0;

        // 분노의 원소 합 연산
        for (const auto& a : arr1) {
            sum1 += a;
        }

        for (const auto& a : arr2) {
            sum2 += a;
        }

        if (sum1 > sum2) {
            return 1;
        }

        else if (sum1 < sum2) {
            return -1;
        }
        else {
            return 0;
        }

    }
   
    // "what's happpening?"
    return 8282;
    */
}

int main() {

    /*
    arr1	            arr2	            result
    [49, 13]	        [70, 11, 2]	        -1
    [100, 17, 84, 1]	[55, 12, 65, 36]	1
    [1, 2, 3, 4, 5]	    [3, 3, 3, 3, 3]	    0
    */

    cout << solution({ 49,13 },{ 70, 11, 2 }) << endl;
    cout << solution({ 100, 17, 84, 1 }, { 55, 12, 65, 36 }) << endl;
    cout << solution({ 1, 2, 3, 4, 5 }, { 3, 3, 3, 3, 3 }) << endl;

    return 0;
}