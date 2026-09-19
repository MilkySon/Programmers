#include <string>
#include <vector>
#include <iostream>

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

static vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;

    for (int i = 0; i < flag.size(); i++) {
        if (flag[i]) {
            answer.insert(answer.end(), arr[i] * 2, arr[i]);
        }
        else {
            answer.erase(answer.end()-arr[i], answer.end());
        }
    }

    return answer;
}

int main() {

    /*    
    arr	            flag	                            result
    [3, 2, 4, 1, 3]	[true, false, true, false, false]	[3, 3, 3, 3, 4, 4, 4, 4]
    */

    printVector(
        solution(
            { 3, 2, 4, 1, 3 }, 
            { true, false, true, false, false }
        )
    );

    return 0;
}