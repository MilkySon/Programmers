#include <string>
#include <vector>

#include <iostream>

#include <algorithm>    // transform을 활용한 풀이

using namespace std;

static void printVector(vector<int> arr) {

    cout << "{ ";

    for (int ar : arr) {
        cout << "{ ";
        cout << ar << " ";
        cout << "}";
    }

    cout << "}" << endl;

}

static vector<int> solution(vector<int> arr, int k) {


    // 내가 직접 만들어본 transform 활용 풀이
    transform(arr.begin(), arr.end(),
        arr.begin(),
        [k](int x) {
            if (k % 2 == 1) {
                return x * k;
            }
            else {
                return x + k;
            }
        }
    );
    return arr;

    /*
    // transform을 활용한 풀이
    transform(arr.begin(), arr.end(), 
        arr.begin(), 
        [k](int x) {
            return k & 1 
                ? x * k 
                : x + k; 
        }
    );
    */

    /* 내가 제출한 풀이
    if (k % 2 == 1) { // k가 홀수ramen
        for (int& a : arr) {
            a *= k;
        }
    }
    else { // k가 짝수ramen
        for (int& a : arr) {
            a += k;
        }
    }

    return arr;
    */
}


int main() {

    /*
    arr	                    k	result
    [1, 2, 3, 100, 99, 98]	3	[3, 6, 9, 300, 297, 294]
    [1, 2, 3, 100, 99, 98]	2	[3, 4, 5, 102, 101, 100]
    */

    printVector(solution({ 1, 2, 3, 100, 99, 98 }, 3));
    printVector(solution({ 1, 2, 3, 100, 99, 98 }, 2));

    return 0;
}