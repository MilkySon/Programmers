


// chatGPT 해설 읽어보기!!!!
// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aa3690a-b36c-83ee-a147-957a0802ccf3


#include <iostream>
#include <string>
#include <vector>

using namespace std;

static void printVector(vector<int> vec) {

    cout << "{ ";

    for (int vv : vec) {
        cout << vv << " ";
    }

    cout << "}" << endl;
}

static vector<int> solution(vector<int> arr) {

    /*
    for (int element : arr)   // arr 원소의 복사본
    for (int& element : arr)  // arr 원소 자체를 참조
    읽기만 할 거면 const auto&, 
    원소 자체를 바꿀 거면 auto&, 
    복사해서 써도 되면 auto.
    */


    for (int& element : arr) {


        if ((element & 1) == 0 && element >= 50) { // 비트연산자에 (괄호)를 추가해야 하는 이유?
            element /= 2;
        }
        else if ((element & 1) == 1 && element < 50) {
            element *= 2;
        }
    }

    return arr;

    /* 내가 제출한 풀이
    for (int i = 0; i < arr.size(); i++) {


        if ((arr[i] & 1) == 0 && arr[i] >= 50) { // 비트연산자에 (괄호)를 추가해야 하는 이유?
            arr[i] /= 2;
        }
        else if ((arr[i] & 1) == 1 && arr[i] < 50) {
            arr[i] *= 2;
        }
    }

    return arr;
    */

}



int main() {

    /*
    arr	                    result
    [1, 2, 3, 100, 99, 98]	[2, 2, 6, 50, 99, 49]
    */

    printVector(solution({ 1, 2, 3, 100, 99, 98 }));


    return 0;
}