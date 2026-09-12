#include <string>
#include <vector>
#include <iostream>

#include <algorithm>	// transform 활용을 위한 lib.

using namespace std;

static string solution(string myString) {

	// transform 활용 풀이
	transform(myString.begin(), myString.end(), myString.begin(), ::toupper); // :: 를 안붙이면 std namespace에 있는 toupper를 참조해서( ::toupper )이라고 적음.
	return myString;

	/* 내가 제출한 풀이 
	string answer = "";
	for (char& member : myString) {
		member = toupper(member);
	}
	return myString;
	*/
}

int main() {

	/*
	myString	result
	"aBcDeFg"	"ABCDEFG"
	"AAA"		"AAA"
	*/

	cout << solution("aBcDeFg") << endl;
	cout << solution("AAA") << endl;

	return 0;
}