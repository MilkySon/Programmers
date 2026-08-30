// Raw String Literal 사용
// 특수문자가 많거나 긴 문자열을 출력할 때는 Raw String Literal을 사용하면 편리합니다.이 경우 문자열 안의 이스케이프 시퀀스는 무시됩니다

#include <iostream>

using namespace std;

int main(void) {
    cout << R"(!@#$%^&*(\'"<>?:;)" << endl;
}
