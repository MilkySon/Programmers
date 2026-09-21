
/*
문제 설명
0번부터 n - 1번까지 n명의 학생 중 3명을 선발하는 전국 대회 선발 고사를 보았습니다. 
등수가 높은 3명을 선발해야 하지만, 개인 사정으로 전국 대회에 참여하지 못하는 학생들이 있어 
참여가 가능한 학생 중 등수가 높은 3명을 선발하기로 했습니다.

각 학생들의 선발 고사 등수를 담은 정수 배열 rank와 
전국 대회 참여 가능 여부가 담긴 boolean 배열 attendance가 매개변수로 주어집니다. 
전국 대회에 선발된 학생 번호들을 등수가 높은 순서대로 각각 a, b, c번이라고 할 때 
10000 × a + 100 × b + c를 return 하는 solution 함수를 작성해 주세요.
*/


#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

static void printVector(vector<int> arr) {

    cout << "{ ";

    for (int ar : arr) {
    
        cout << ar << " ";
    }

    cout << "}" << endl;
}

// struct를 활용한 풀이 
struct INFO {
    int idx;
    bool atdc;
};

///* pair를 활용한 풀이
//static bool studentcomp(pair<int, int> stu1, pair<int, int> stu2)
//{
//    return stu1.second < stu2.second;
//}
//*/

static int solution(vector<int> rank, vector<bool> attendance) {


    /*struct를 활용한 풀이*/
    int answer = 0;

    int res = 0, cnt = 0;
    vector<INFO> v(rank.size() + 1);
    for (int i = 0; i < rank.size(); i++)
        v[rank[i]] = { i, attendance[i] };
    for (int i = 0; cnt < 3 && i < v.size(); i++)
    {
        if (v[i].atdc == true)
        {
            res = res * 100 + v[i].idx;
            cnt++;
        }
    }
    answer = res;

    return answer;


    ///* pair를 활용한 풀이
    //vector<pair<int, int>> student;
    //for (int i = 0; i < rank.size(); i++)
    //{
    //    if (attendance[i]) student.push_back({ i,rank[i] });
    //}
    //sort(student.begin(), student.end(), studentcomp);

    //return 10000 * student[0].first + 100 * student[1].first + student[2].first;
    //*/

    ///*
    //vector<vector<int>> candy;
    //
    //for (int i = 0; i < rank.size(); i++) {

    //    if (attendance[i]) {

    //        candy.push_back({ i,rank[i]});
    //    }
    //}
    //
    //sort(candy.begin(), candy.end(),
    //    [](const auto& a, const auto& b) {
    //        return a[1] < b[1];
    //    }
    //);

    //return 10000 * candy[0][0] + 100 * candy[1][0] + candy[2][0];
    //*/
}


int main() {

    /*
    rank	                attendance	                                    result
    [3, 7, 2, 5, 4, 6, 1]	[false, true, true, true, true, false, false]	20403
    [1, 2, 3]	            [true, true, true]	                            102
    [6, 1, 5, 2, 3, 4]	    [true, false, true, false, false, true]	        50200

    */

    cout << solution({ 3, 7, 2, 5, 4, 6, 1 },{ false, true, true, true, true, false, false }) << endl;
    cout << solution({ 1,2,3 }, { true, true, true }) << endl;
    cout << solution({ 6, 1, 5, 2, 3, 4 }, { true, false, true, false, false, true }) << endl;

    return 0;
}