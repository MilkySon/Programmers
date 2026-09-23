#include <string>
#include <vector>
#include <iostream>

using namespace std;

static int checkHol(int num) {
    return num % 2 == 1 ? 1 : 0;
}

static int solution(int a, int b) {
    
    // 한줄 풀이 (이게 대체 무슨 일이고..)
    int pa = a & 1, pb = b & 1, d = a - b, ad = (d ^ (d >> 31)) - (d >> 31);
    return (pa & pb) * (a * a + b * b) + (pa ^ pb) * ((a + b) << 1) + (!(pa | pb)) * ad;
    

    /* 내가 제출한 풀이
    int answer = 0;

    if (checkHol(a) && checkHol(b)) {
        return a* a + b * b;
    }

    if (checkHol(a) || checkHol(b)) {
        return 2 * (a + b);
    }

    if (~checkHol(a) && ~checkHol(b)) {
        return abs(a-b);
    }

    return answer;
    */

}

int main() {

    /*
    a	b	result
    3	5	34
    6	1	14
    2	4	2
    */

    cout << solution(3, 5) << endl;
    cout << solution(6, 1) << endl;
    cout << solution(2, 4) << endl;

    return 0;
}