
// chatGPT 해설
// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6ab10f7e-188c-83e8-8d1f-76b65b02952e

#include <string>
#include <vector>
#include <iostream>

using namespace std;

static void printVector(vector<int> arr) {

    cout << "{ ";

    for (int ar : arr) {
        // cout << "{ ";
        cout << ar << " ";
        // cout << "}";
    }

    cout << "}" << endl;

}

static vector<int> solution(vector<int> arr, vector<int> delete_list) {

    // remove_if와 람다식을 활용한 풀이
    for (const int& i : delete_list) {

        arr.erase(
            remove_if(arr.begin(), arr.end(),
                [i](const int& x) {
                    return x == i;
                }),
            arr.end()
        );
    }

    return arr;

    /*내가 제출한 풀이　（중복된　원소는　제거하지　못한다는　한계가　존재　ｃｒｉｔｉｃｉｚｅｄ　ｂｙ　ＣｈａｔＧＰＴ）
    vector<int> answer;
    for (const auto& lookingFor : delete_list) {
        auto ff = find(arr.begin(), arr.end(), lookingFor);
        if (ff != arr.end()) {
            arr.erase(ff);
        }
    }
    
    return arr;
    */
}

int main() {
    /*
    
    arr	                        delete_list	                result
    [293, 1000, 395, 678, 94]	[94, 777, 104, 1000, 1, 12]	[293, 395, 678]
    [110, 66, 439, 785, 1]	    [377, 823, 119, 43]	        [110, 66, 439, 785, 1]
    */

    printVector(solution({ 293, 1000, 395, 678, 94 }, { 94, 777, 104, 1000, 1, 12 }));
    printVector(solution({ 110, 66, 439, 785, 1 }, { 377, 823, 119, 43 }));

    return 0;
}