#include <string>
#include <vector>
#include <iostream>

using namespace std;

static string solution(string a, string b) {

	string answer = "";

	// to_string(stoi(a) + stoi(b)) <-- 이 친구를 구현하면 된다.

	// 일단 a.length() 랑 b.length() 둘을 비교한 다음 ->  짧은 친구에 대해서 긴 친구 길이에 맞게끔 '0'을 이어 붙인다. (일단은 이 방법밖에 안 떠오름)

	int len_a = a.length();
	int len_b = b.length();

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	if (len_a > len_b) {
		while (len_b != len_a) {
			b += "0";
			len_b = b.length();
		}
	}
	else if (len_a < len_b) {
		while (len_a != len_b) {
			a += "0";
			len_a = a.length();
		}
	}
	
	/* 통합 */

	string sum_result = "";
	int over_jari = 0; 
	for (int i = 0; i < len_a; i++) {

		// 한자릿수 씩 더하기를 진행한 다음 -> answer에 insert한다.두자릿수가 나왔다면 한자릿수 씩 더하기한거에 +1을 한다. (over_jari 초깃값이 0이니까 첫째자리수에 +1 잘못 더해질 염려는 x)
		sum_result = to_string((a[i] - '0') + (b[i] - '0') + over_jari);
		
		// 만약 두자릿수가 나왔다면, 일의 자릿수에 대해서만 insert를 한다.
		sum_result.length() == 1 ? over_jari = 0 : over_jari = 1;
		answer.push_back(sum_result.back());

	}

	// 마지막 자릿수가 10을 넘을 수 있으니 끝까지 방심 x.
	if (over_jari == 1) {
		answer.push_back('1');
	}

	reverse(answer.begin(), answer.end());

	/* 단계별 정리 
	// 그리고 나서 한자릿수 씩 더하기를 진행한 다음 -> answer에 insert한다.

	string sum_result = to_string((a[0] - '0') + (b[0] - '0'));
	answer.push_back(sum_result.back());

	// 그런데 주의할점은, 만약 두자릿수가 나왔다면, 일의 자릿수에 대해서만 insert를 한다.
	int over_jari = 0;
	sum_result.length() == 1 ? over_jari = 0 : over_jari = 1;

	// 그리고 나서 다시 진행한다. 두자릿수가 나왔다면 한자릿수 씩 더하기한거에 +1을 한다. 
	sum_result = to_string((a[0] - '0') + (b[0] - '0') + over_jari);

	// 긴 친구 길이 만큼 무한반복.
	for (int i = 0; i < len_a; i++) {

	}

	// 마지막 자릿수가 10을 넘을 수 있으니 끝까지 방심 x.
	if (over_jari == 1) {
		sum_result.push_back('1');
	}
	*/

	return answer;
}

int main() {
	/*
	a						b						result
	"582"					"734"					"1316"
	"18446744073709551615"	"287346502836570928366"	"305793246910280479981"
	"0"						"0"						"0"
	*/


	// 실험실
	string  aa = "aa";
	aa += "b";
	cout << aa << endl;


	cout << solution("582", "734") << endl;
	cout << solution("18446744073709551615", "287346502836570928366") << endl;
	cout << solution("0", "0") << endl;

	return 0;
}


/*
	// 일단 자릿수가 다를 경우를 대비해서, reverse한 다음, 더하자.
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int aORb = a.length() >= b.length();
	int num_to_plus = min(a.length(), b.length());
	int num_to_attach = max(a.length(), b.length());

	// 일단 공통자릿수를 모두 더해줍니다~
	for (int i = 0; i < num_to_plus; i++) {

		int a_int = a[i] -'0';
		int b_int = b[i] -'0';

		answer_int *= 10;
		answer_int += a_int + b_int;
	}

	cout << answer_int << " yamete!" << endl;

	// num_to_plus가 자릿수를 나타냅니다~ 이어붙여주는 느낌으로 접근해요~
	if (a.length() > b.length()) {
		for (int att = num_to_plus; att < num_to_attach; att++) {
			int att_now = pow(a[att] - '0', att);
			answer_int += att_now;
		}
	}
	else if (a.length() < b.length()) {
		for (int att = num_to_plus; att < num_to_attach; att++) {
			int att_now = pow(b[att] - '0', att);
			answer_int += att_now;
		}
	}

	// answer를 string으로 석방하라!
	answer = to_string(answer_int);
	reverse(answer.begin(), answer.end());
*/


/* double을 활용하여 시도해봄. (실패 ㅠㅠ)

	string answer = "";

	// to_string(stoi(a) + stoi(b)) <-- 이 친구를 구현하면 된다.

	double a_large = 0;
	double b_large = 0;

	for (int i = 0; i < a.size(); i++) {
		double current_a = a[i] - '0';
		a_large *= 10;
		a_large += current_a;
	}

	for (int i = 0; i < b.size(); i++) {
		double current_b = b[i] - '0';
		b_large *= 10;
		b_large += current_b;
	}

	answer = to_string(a_large + b_large);

	cout << answer;

	return string (answer.begin(), answer.begin() + answer.find('.'));


*/