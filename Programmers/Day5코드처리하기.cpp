// 주의!!! 포인터 안써도 잘만 돌아가는 코드임.


#include <string>
#include <vector>
#include <iostream>

using namespace std;

static string solution(string code) {
	string ret = "";
	int mode = 0;
	int* p_mode = &mode; // mode의 메모리 주소 &mode
	
	for (int idx = 0; idx < code.size(); idx++) {
		if (*p_mode == 0) {
			if (code[idx] == '1') {
				// mode를 바꿉니다.
				*p_mode = 1;
			}
			else {
				if ((idx % 2) == 0) {
					ret += code[idx];
				}
			}
		}
		else {
			if (*p_mode == 1) {
				if (code[idx] == '1') {
					// mode를 바꿉니다.
					*p_mode = 0;
				}
				else {
					if ((idx % 2) == 1) {
						ret += code[idx];
					}
				}
			}
		}
	}
	if (ret.empty()) {
		return "EMPTY";
	}
	return ret;
}

int main() {
	cout << solution("abc1abc1abc") << endl;

	return 0;
}


/*
* 
* 아 ㅋㅋㅋ 포인터는 정상입니다. mode가 안 바뀌는 원인은 전혀 다른 곳에 있어요.

범인은 이 줄입니다:

if (to_string(code[idx]) == "1")

code[idx]는 char입니다. 그런데 to_string()은 char를 문자로 취급하지 않고 정수로 변환해서 처리합니다.

즉,

code[idx] == '1'

일 때 '1'의 문자 코드 값은 보통 49이므로,

to_string(code[idx])

는 사실상

to_string(49)

가 되어 결과가

"49"

가 됩니다.

따라서 지금 코드는 사실상 계속

if ("49" == "1")   // false

를 검사하고 있었던 겁니다. 😭

고치는 건 정말 간단합니다.

if (code[idx] == '1')

로 바꾸세요.


---

결론적으로 이번 버그에서 꼭 기억할 포인트는 하나입니다:

'1'       // char, 문자 하나
"1"       // const char[], 문자열
to_string(1)   // "1"
to_string('1') // "49" (보통!)

char와 string을 구별하는 감각을 익히기에 아주 좋은 버그를 밟으셨습니다. 포인터는 억울하게 범인으로 몰렸습니다 ㅋㅋㅋ.

---


*/