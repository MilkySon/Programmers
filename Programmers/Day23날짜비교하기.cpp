#include <string>
#include <vector>
#include <iostream>
#include <ctime>

using namespace std;

/* 내가 제출한 풀이
static int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;

    if (date1[0] < date2[0]) {
        return 1;
    }
    else if (date1[1] < date2[1]) {
        return 1;
    }
    else if (date1[2] < date2[2]) {
        return 1;
    }
    return answer;
}
*/

/* 센스있는 풀이(?)
static int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    int val = 10000 * (date1[0] - date2[0]) + 100 * (date1[1] - date2[1]) + (date1[2] - date2[2]);
    answer = (val < 0);
    return answer;
}
*/

// time을 활용한 풀이
static time_t hiz(vector<int> v) {
    tm t = {};
    t.tm_year = v[0] - 1900;
    t.tm_mon = v[1] - 1;
    t.tm_mday = v[2];
    return mktime(&t);
}

static int solution(vector<int> date1, vector<int> date2) {
    return hiz(date1) < hiz(date2);
}

int main() {
    /*
    date1	        date2	        result
    [2021, 12, 28]	[2021, 12, 29]	1
    [1024, 10, 24]	[1024, 10, 24]	0
    */

    cout << solution({ 2021, 12, 28 }, { 2021, 12, 29 }) << endl;
    cout << solution({ 1024, 10, 24 }, { 1024, 10, 24 }) << endl;

    return 0;
}