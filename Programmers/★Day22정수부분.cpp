
#include <iostream>;

using namespace std;

static int solution(double flo = 0) {
    
    int answer = static_cast<int>(flo);

    return answer;

    // 초간단 풀이
    // return flo;
}

int main() {

    cout << solution(13.54) << endl;
    cout << solution(3.14) << endl;
    cout << solution(5.14) << endl;
    cout << solution(8.16) << endl;
    cout << solution(12.25) << endl;

    return 0;
}