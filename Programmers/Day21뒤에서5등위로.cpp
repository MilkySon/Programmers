#include <string>
#include <vector>

#include <iostream>

#include <algorithm>

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
    vector<int> answer;

    sort(num_list.begin(), num_list.end());
    num_list.erase(num_list.begin(), num_list.begin() + 5);

    return num_list;
}


int main() {

    /*
    
    num_list	                            result
    [12, 4, 15, 46, 38, 1, 14, 56, 32, 10]	[15, 32, 38, 46, 56]
    */

    printVector(solution({ 12, 4, 15, 46, 38, 1, 14, 56, 32, 10 }));


    return 0;
}