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

static vector<int> solution(vector<int> arr) {

    //  insert를 활용한 풀이
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++)
        answer.insert(answer.end(), arr[i], arr[i]);
        //answer.insert(지정한 위치 앞에, 동일한 값(value)을, count개수만큼 반복 삽입)
    return answer;

    /* 내가 제출한 풀이
    vector<int> answer;

    for (const auto& a : arr) {
        for (int i = 0; i < a; i++) {
            answer.push_back(a);
        }
    }

    return answer;
    */

}

int main() {
    /*
    * arr	    result
    [5, 1, 4]	[5, 5, 5, 5, 5, 1, 4, 4, 4, 4]
    [6, 6]	    [6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6]
    [1]	        [1]
    */

    printVector(solution({ 5,1,4 }));
    printVector(solution({ 6,6 }));
    printVector(solution({ 1 }));
    
    return 0;
}