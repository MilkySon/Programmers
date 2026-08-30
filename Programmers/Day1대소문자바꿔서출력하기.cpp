#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(void) {

	// 답안 (고인물 버전)
	string str;
	cin >> str;
	for (auto c : str)
	{
		if ('a' <= c && c <= 'z')
			c -= 'a' - 'A'; // 일반적인 아스키 환경에서는 'a' - 'A' = 32 입니다. 즉, 이 코드는 32를 빼서 [소문자 -> 대문자]로 바꿔주는 코드입니다.
		else
			c += 'a' - 'A'; // 32를 더해서 대문자를 소문자로 바꿔준다.
		cout << c; // 마지막으로 변환된 문자 c를 곧바로 출력
	}
	return 0;
}



	/*
	// 답안 (교정 버전)
	string str;
	cin >> str;

	for (char& c : str) // &가 중요. c가 복사본이 아니라 str 내부 문자를 직접 가리킴. 따라서 c를 바꾸면 str도 바뀜.
	{
		if (isupper(static_cast<unsigned char>(c)))
			c = tolower(static_cast<unsigned char>(c));
		else
			c = toupper(static_cast<unsigned char>(c));
	}

	cout << str << '\n';

	return 0;
	*/



	/* 처음 제출했던 답안 
	string str;
	cin >> str;

	// str의 요소를 하나씩 비교해서 바꾸기.
	
	int i = 0;

	while (str[i]) // str[i]대신 ( i < str.size() ) 사용하기.
	{
		if (str[i] == toupper(str[i])) // isupper함수로 비교하는게 좋음
		{
			str[i] = tolower(str[i]);
			i++; 
		} 
		else 
		{
			str[i] = toupper(str[i]);
			i++; // i++가 두번씩이나 쓰였는데, 그냥 if-else문 빠져나온 다음에 i++ 적으면 한번만 적어도 됨.
		}
	}

	cout << str << endl;

	*/
