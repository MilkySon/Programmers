#include <string>
#include <vector>

using namespace std;

static string solution(int n) {

    // 직접 구현해낸 풀이
    string answer = "";
    while (n > 0) {
        char a = n % 10 + '0';
        answer.push_back(a);
        n /= 10;
    }
    reverse(answer.begin(), answer.end());
    return answer;    
    
    //// 내가 제출한 풀이
    //string answer = "";
    //answer = to_string(n);
    //return answer;
}

int main() {


    return 0;
}