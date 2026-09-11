#include <string>
#include <vector>
#include <algorithm> // reverse, swap 함수를 사용하기 위함.

#include <iostream>

using namespace std;


static string solution(string my_string, int s, int e) {

    // reverse 함수를 활용한 풀이.
    reverse(my_string.begin() + s, my_string.begin() + e + 1);
    return my_string;


    /* swap 함수를 활용한 풀이.
    for (int i = 0; i <= (e - s) / 2; i++)
        swap(my_string[s + i], my_string[e - i]);
    return my_string;
    */


    /* 내가 제출한 풀이
    while (e > s) {
        swap(my_string[s], my_string[e]);
        e--; s++;
    }
    return my_string;
    */
}


int main() {

    cout << solution("Progra21Sremm3", 6, 12) << endl;
    cout << solution("Stanley1yelnatS", 4, 10) << endl;

    return 0;
}


