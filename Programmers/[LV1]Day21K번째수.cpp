#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

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

static vector<int> solution(vector<int> array, vector<vector<int>> commands) {

    vector<int> answer;

    for (int cmd = 0; cmd < commands.size(); cmd++) {

        int i = commands[cmd][0];
        int j = commands[cmd][1];
        int k = commands[cmd][2];

        // i번째 부터 j번쨰 까지 자른다
        vector<int> mid_step(array.begin() + i-1, array.begin() + j); // 자르고
        
        // printVector(mid_step);

        sort(mid_step.begin(), mid_step.end()); // 정렬했을 때,
        answer.push_back(mid_step[k-1]); // k 번째에 있는 수를 배열에 담는다.

        // printVector(answer); cout << "Eureka!";

    }

    return answer;
}

int main() {

    /*
    
    array	                commands	                        return
    [1, 5, 2, 6, 3, 7, 4]	[[2, 5, 3], [4, 4, 1], [1, 7, 3]]	[5, 6, 3]
    */

    printVector(solution({ 1, 5, 2, 6, 3, 7, 4 }, { {2,5,3},{4,4,1}, {1,7,3} }));

    return 0;
}