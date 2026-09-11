#include <vector>
#include <iostream>

using namespace std;

static int solution(vector<int> numbers, int n)
{


    // 사람들의 풀이
    int answer = 0;
    for (int i = 0; i < numbers.size() && answer <= n; ++i)
    {
        answer += numbers[i];
    }

    /* 내가 제출한 풀이
    
    int answer = 0;

    for (int ns : numbers) {
        if ( answer <= n ) {
            answer += ns;
        }
    }

    
    */

    return answer;
}

int main() {


    /*
    numbers	                    n	result
    [34, 5, 71, 29, 100, 34]	123	139
    [58, 44, 27, 10, 100]	    139	239
    
    */

    cout << solution({ 34, 5, 71, 29, 100, 34 }, 123) << endl;
    cout << solution({ 58, 44, 27, 10, 100 }, 139) << endl;

    return 0;
}