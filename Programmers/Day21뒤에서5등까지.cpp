#include <string>
#include <vector>
#include <iostream>
#include <algorithm> // sort 활용을 위한 lib.

using namespace std;

static void printVector(vector<int> arr) {

    cout << "{ ";

    for (int ar : arr) {
        //cout << "{ ";
        cout << ar << " ";
        // cout << "}";
    }

    cout << "}" << endl;

}

static vector<int> solution(vector<int> num_list) {
    
    sort(num_list.begin(), num_list.end());

    vector<int> answer(num_list.begin(), num_list.begin() + 5);

    return answer;
}

int main() {
    
    /*
    num_list	                result
    [12, 4, 15, 46, 38, 1, 14]	[1, 4, 12, 14, 15]
    */

    printVector(solution({ 12, 4, 15, 46, 38, 1, 14 }));

    return 0;
}