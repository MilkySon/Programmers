#include <string>
#include <vector>
#include <iostream>

using namespace std;

static void printVector(vector<int> arr) {

    cout << "{ ";

    for (int ar : arr) {
        
        cout << ar << " ";

    }

    cout << "}" << endl;

}


static vector<int> solution(vector<int> arr, int n) {
    
    // 한줄 풀이 (it's mathematics, idiot!)
    for (int i = (arr.size() + 1) % 2; i < arr.size(); i += 2)
        arr[i] += n;
    return arr;
    
    
    /* 내가 제출한 풀이
    vector<int> answer;

    if (arr.size() % 2 != 0) { // arr의 길이가 홀수ramen
        for (int i = 0; i < arr.size(); i += 2) {
            arr[i] += n;
        }
    }
    else { // arr의 길이가 짝수ramen
        for (int i = 1; i < arr.size(); i += 2) {
            arr[i] += n;
        }
    }

    return arr;
    */
}


int main() {

    /*


    arr	                    n	result
    [49, 12, 100, 276, 33]	27	[76, 12, 127, 276, 60]
    [444, 555, 666, 777]	100	[444, 655, 666, 877]


    */


    printVector(solution({ 49, 12, 100, 276, 33 }, 27));
    printVector(solution({ 444, 555, 666, 777 }, 100));


    return 0;
}

