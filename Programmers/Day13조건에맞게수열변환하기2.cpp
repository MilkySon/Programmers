#include <iostream>
#include <vector>
#include <stack>

using namespace std;

static void printVector(vector<int> vec) {

    cout << "{ ";

    for (int vv : vec) {
        cout << vv << " ";
    }

    cout << "}" << endl;
}

static int solution(vector<int> arr) {

    // 매우 깔끔 간결 풀이.
    int answer = -1;

    bool test = true;
    while (test)
    {
        test = false;

        for (auto& v : arr)
        {
            if (v >= 50 && !(v & 1))
            {
                v /= 2;
                test = true;
            }
            else if (v < 50 && (v & 1))
            {
                v = v * 2 + 1;
                test = true;
            }
        }

        answer++;
    }

    return answer;

    /* 내가 제출한 풀이
    vector<vector<int>> arrFactory{ arr };
    vector<int>temp{ 0 };

    while (arrFactory.back() != temp ) {
        temp = arrFactory.back();
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 50 && arr[i] % 2 == 0) {
                arr[i] /= 2;
            }
            else if (arr[i] < 50 && arr[i] % 2 == 1) {
                arr[i] = arr[i] * 2 + 1;
            }
        }
        arrFactory.emplace_back(arr);
        printVector(arrFactory.back());
    }

    return arrFactory.size()-1-1; // 첫 -1은 size에 의한 +1 보정, 마지막 -1은 x와 x+1중 x를 반환해야하니까.
    */
}


int main() {
    /*
    arr	                    result
    [1, 2, 3, 100, 99, 98]	5
    */

    cout << solution({ 1,2,3,100,99,98 }) << endl;

    return 0;
}