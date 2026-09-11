#include <string>
#include <vector>

#include <iostream>

using namespace std;

static bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    answer = (x1 || x2) && (x3 || x4);
    return answer;
}

int main() {

    bool x1 = false;
    bool x2 = true;
    bool x3 = true;	
    bool x4 = true;

    cout << solution(x1,x2,x3,x4) << endl;
    return 0;
}