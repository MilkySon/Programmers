#include <string>
#include <vector>
#include <iostream>

#include <numeric> // reduce 함수 쓰려고 들고온 라이브러리.

using namespace std;

static int solution(string number) {

    // reduce 함수를 활용한 풀이. (매우 modern 하다)
    return reduce(number.cbegin(), number.cend(), -number.size() * '0') % 9;


    // reduce는 정확히 말해보자면 [범위에 있는 요소들을 / 하나의 값으로 / 축소(reduce)하는 데 사용됨]
    // reduce(시작할위치, 종료할위치의 다음위치, 초기값, 이항연산자)
    // 그래서 (처음값 - '0' ) + (두번째값 - '0') + .... + (마지막값 - '0') 이렇게 작동하게됨.

    /* 내가 제출한 풀이
    int answer = 0;

    for (int i = 0; i < number.size(); i++) {
        answer += number[i] - '0';
        cout << answer << " ";
    }
    answer %= 9;

    return answer;
    */
}

int main() {

    cout << solution("123") << endl;
    // cout << solution("78720646226947352489") << endl;

    return 0;
}
