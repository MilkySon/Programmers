#include <iostream>
#include <vector>


using namespace std;

static vector<int> solution(vector<int> num_list, int n) {


    // 깔끔한 풀이
    vector<int> answer(num_list.begin(), num_list.begin() + n);
    return answer;


    /* 
    내가 제출한 풀이.(while을 써보고 싶었음.
    // 0번째부터 (n-1)번째 까지 출력해야함.
    // 리스트 크기가 X라 할 때, 0부터 n까지를 표현하려면...
    // n-n 부터 n-0 이렇게 표현해야함. 
    
    vector<int> answer;

    int n2 = n - 1;
    while (n--) {
        answer.push_back(num_list[n2 - n]);
    }

    return answer;
    */
}



static void printVector(vector<int> vec) {

    cout << "{ ";

    for (int vv : vec) {
        cout << vv << " ";
    }

    cout << "}" << endl;
    
}

int main() {

    /*
    num_list	    n	result
    [2, 1, 6]	    1	[2]
    [5, 2, 1, 7, 5]	3	[5, 2, 1]
    */


    printVector(solution({ 2, 1, 6 }, 1));
    printVector(solution({ 5, 2, 1, 7, 5 }, 3));

    return 0;
}