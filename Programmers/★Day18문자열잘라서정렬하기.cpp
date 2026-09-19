#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

static void printVector(vector<string> arr) {

    cout << "{ ";

    for (string ar : arr) {
        cout << "{ ";
        cout << ar << " ";
        cout << "}";
    }

    cout << "}" << endl;

}

static vector<string> solution(string myString) {


    // 일단 배열 제조.
    vector<string> answer;
    string container = "";
    myString += "x";
    for (int i = 0; i < myString.size(); i++) {
        if (myString[i] != 'x') {
            container += myString[i];
        }
        else if (container != "") {
            answer.emplace_back(container);
            container = "";
        }
    }  // 배열 제조 완료.


    // 정렬만 추가 하면 됨.
    int j = 1;
    for (int i = 0; i < answer.size(); i++) {
        
        string bolmo = answer[i]; // 누구랑 바꿀지 정해둠.

        // cout << "bolmo " << bolmo << endl;

        int YouWillBeChanged = i;

        for (j = i+1; j < answer.size(); j++) {

            string stayer = answer[j];  // 이미 박힌 돌 stayer와 굴러들러오는 돌 mover를 비교하기 위한 변수.

            // 문자열끼리 비교하기
            int len_of_comparing = min(bolmo.length(), stayer.length());
                
            for (int indicator = 0; indicator <= len_of_comparing; indicator++) {
                
                // 끝까지 비교했는데도 결론이 나지 않아 더 긴걸 선택한 경우
                if (indicator == len_of_comparing) {
                    if (bolmo.size() > stayer.size()) {
                        bolmo = stayer;
                        YouWillBeChanged = j;
                    }
                }

                // OR 한글자씩 비교하는 도중에 결정된 경우
                else if ((bolmo[indicator] > stayer[indicator])) { // stayer가 bolmo보다 작으면, 바뀜 당하도록 한다.
                    bolmo = stayer;
                    YouWillBeChanged = j;
                    break; // 바뀜 설정이 중간에 끝나면 두 문자 끼리의 비교를 바로 끝내버린다. 이후 j에 대한 for문을 순회하면서, 다른 문자끼리 비교함.
                }

                // OR  어림도 없는 경우
                else if ((bolmo[indicator] < stayer[indicator])) {
                    break;
                }
            }

        }

        swap(answer[i], answer[YouWillBeChanged]);

        // 각 i에 대한 비교가 끝나고, 바꿈. 이후 나머지 i에 대해서도 반복함
    }
    return answer;
}

int main() {
    /*
    myString	    result
    "axbxcxdx"	    ["a","b","c","d"]
    "dxccxbbbxaaaa"	["aaaa","bbb","cc","d"]
    */

    printVector(solution("axbxcxdx"));
    printVector(solution("dxccxbbbxaaaa"));

	return 0;
}





/*
static string WhoBig(string A, string B) {
    //  각 문자를 비교하기 위한 코드.

    int len_of_comparing = min(A.length(), B.length());
    for (int indicator = 0; indicator <= len_of_comparing; indicator++) {

        // 끝까지 비교했는데도 결론이 나지 않은 경우
        if (len_of_comparing == indicator) {
            if (A.size() < B.size()) {
                cout << A << "<" << B << endl;
                return B;
            }
        }

        // 끝까지 비교하기 전에 결론이 나는 경우
        else if (A[indicator] < B[indicator]) {

            cout << A << "<" << B << endl;
            return B;
        }
        else {

            cout << A << ">" << B << endl;
            return A;
        }
    }

    return "What's Happening?";
}
*/