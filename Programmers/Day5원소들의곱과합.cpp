#include <vector>
#include <iostream>

#define all(x) (x).begin() , (x).end() // 그냥 메크로. all(num_list) 라고 입력하면 ( x.begin(), x.end() ) 이렇게 입력하는거랑 똑같게 되는거임.

// #include <functional> 
#include <numeric> // accumulate, multiplies,pow 활용을 위한 라이브러리.

using namespace std;

static int solution(vector<int> num_list) {

	//고인물 풀이 ( accumulate 관련 설명은 맨 아래에 따로 주석에 적어 놓았으니 참고 ㄱㄱ!)

	// return 줄이 너무 길어서.. 내가 멋대로 변수 정의함. 원래는 변수 조차 없었던 한줄짜리 코드였음.
	int multiply_all = accumulate(all(num_list), 1, multiplies<int>());
	int sum_of_zegop = pow(accumulate(all(num_list), 0), 2);
	
	return multiply_all < sum_of_zegop ? 1 : 0;


	/*
	int multiply_all = 1;
	int sum_of_zegop = 0;

	for (int i : num_list) { // vector 순회시 항상 이런 유형의 간단 법을 염두에 두자. (int i = 0; i < num_list.size(); i++) {
		multiply_all *= num_list[i];0
		sum_of_zegop += num_list[i];
	}

	sum_of_zegop *= sum_of_zegop;

	return (multiply_all < sum_of_zegop);
	*/
}

int main() {
	vector<int> num_list1 = { 3,4,5,2,1 };
	vector<int> num_list2 = { 5,7,8,3 };
	cout << solution(num_list1) << endl;
	cout << solution(num_list2) << endl;

	return 0;
}


/*  3. 그럼 accumulate는 뭔가요?

이건 반대로 진짜 C++ 표준 라이브러리 함수입니다.

기본 형태를 아주 단순화하면:

accumulate(시작, 끝, 초기값)

입니다.

예를 들어

vector<int> v{1, 2, 3, 4};

accumulate(v.begin(), v.end(), 0);

이면

0 + 1 + 2 + 3 + 4

해서 10을 얻습니다.

즉 작성하신

int sum_of_zegop = 0;

for (int i = 0; i < num_list.size(); i++) {
	sum_of_zegop += num_list[i];
}

를 STL로 표현하면 사실상

int sum = accumulate(num_list.begin(), num_list.end(), 0);

이 됩니다.

여기까지는 개인적으로 배워둘 가치가 매우 높습니다.


*/


/* 4. 그런데 이건 또 뭐죠?

accumulate(all(num_list), 1, multiplies<int>())

accumulate는 덧셈만 하는 함수가 아닙니다.

네 번째 인자로 "어떤 연산으로 누적할 것인지"를 줄 수 있습니다.

기본적으로는

0 + a + b + c + ...

인데,

multiplies<int>()

를 주면

1 × a × b × c × ...

를 하라는 뜻입니다.

그래서

accumulate(
	num_list.begin(),
	num_list.end(),
	1,
	multiplies<int>()
)

은 작성하신

int multiply_all = 1;

for (...) {
	multiply_all *= num_list[i];
}

와 같은 역할입니다.

여기서 초기값이 왜 1인지도 중요합니다.

합은

0 + x = x

이므로 0에서 시작하고,

곱은

1 * x = x

이므로 1에서 시작합니다.

작성하신 코드에서도 정확히 그렇게 하셨죠.

int multiply_all = 1;
int sum_of_zegop = 0;

이 두 초기값은 그냥 우연히 정한 숫자가 아니라 각각 곱셈과 덧셈의 항등원(identity element)입니다.

이걸 이미 자연스럽게 사용하고 계신 겁니다.

*/