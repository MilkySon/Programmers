#include <string>
#include <vector>
#include <iostream>

#include <cmath> // 제곱 연산
#include <set>   // set 써먹기.

using namespace std;

static int solution(int a, int b, int c) {
    
    // if문 활용 깔끔 풀이
    int answer = a + b + c;

    if (a == b || b == c || c == a) {
        answer *= a * a + b * b + c * c;
    }
    if (a == b && b == c) {
        answer *= a * a * a + b * b * b + c * c * c;
    }
    
    return answer;


    /*
    // SET 활용 풀이
    set<int> s{ a,b,c };
    if (s.size() == 3) {
        return a + b + c;
    }
    if (s.size() == 2) {
        return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
    }
    if (s.size() == 1) {
        return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2)) * (pow(a, 3) + pow(b, 3) + pow(c, 3));
    }
    */


    /* 최초 제출 풀이
    int answer = 0;

    if (a != b && b != c && c != a) {
        return answer = a + b + c;
    }
    else {
        if (a == b && b == c && c == a) {
            return answer = (a + b + c) * (a * a + b * b + c * c) * (a * a * a + b * b * b + c * c * c); 
        }
        else {
            if (a == b || b == c || c == a) {
                return answer = (a + b + c) * (a * a + b * b + c * c);
            }
        }
    }
    return answer;
    */

}

int main() {

    int a = 4;
    int b = 4;
    int c = 4;
    cout << solution(4, 4, 4);

    return 0;
}