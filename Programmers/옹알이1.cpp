#include <string>
#include <vector>
#include <iostream>

using namespace std;

static int inspect(string target, vector<int> cntList, int starting_point) {

    // 중복 검사
    for (int i = 0; i < cntList.size(); i++)
    {
        if (cntList[i] > 1) {
            return 0;
        }
    }


    if (target.size() - starting_point >=2) { // 주의!!!! 마지막에 문자열이 1개만 남을 때를 대비하기 위해 어쩌구.size() >= target.size() 이러면 큰일남.

        // 2개로 쪼갠다.
        string split_target = { target[starting_point] , target[starting_point + 1] };
        if (split_target == "ma") {
            starting_point += 2;
            cntList[0] += 1;
        }
        else {
            if (split_target == "ye") {
                starting_point += 2;
                cntList[1] += 1;
            }
            else {
                if (target.size() - starting_point != 2) { // 2랑 같으면 맨 뒤 두 글자가 "ma", "ye" 가 아님.
                    string split_target = { target[starting_point] , target[starting_point + 1], target[starting_point + 2] };
                    if (split_target == "aya") {
                        starting_point += 3;
                        cntList[2] += 1;
                    }
                    else {
                        if (split_target == "woo") {
                            starting_point += 3;
                            cntList[3] += 1;
                        }
                        else {
                            return 0; // 옹알이가 아니네. 
                        }
                    }
                }
                else {
                    return 0; // 옹알이가 아니네. (마지막 두가지 문자 : baby답지 않은 추임새)
                }
                
            }
        }
        return inspect(target, cntList, starting_point); // 이제 다음 starting_point로 넘어가자.
    }

    else {

        if (target.size() - starting_point == 1) {
            return 0; // 마지막에 baby답지 않은 추임새 
        }

        return 1; // 모든 조건을 만족한 채로, starting point가 옹알이 길이와 일치함 -> 즉, 옹알이 조건을 만족한 상태.

    }
}

int solution(vector<string> babbling) {


    int answer = 0;
    // vector<string> compareList = { "aya", "ye", "woo", "ma" };

    for (int i = 0; i < babbling.size(); i++) {
        string target = babbling[i];
        vector<int> cntList = { 0,0,0,0 };
        int starting_point = 0;
        answer += inspect(target, cntList, starting_point);
    }

    return answer;
}

int main(void) {

    vector<string> babbling = { "ayaye" , "uuuma", "ye", "yemawoo", "ayaa" };
    cout << solution(babbling) << endl;
            
    return 0;
}








/*
"aya", "ye", "woo", "ma" 네 가지 발음을 최대 한 번씩 사용해 조합한(이어 붙인) 발음
*/

/*
babbling을 나눠보는거에요.
처음 3개로 나눠서 aya, woo 존재? or 2개로 나눠서 ye, ma 존재?
이 행위를 끝날 때 까지 반복하는거죠.

for (int i = start ; i < start + 2 ; i++) {
    string 옹알이[start:start+1] == "ye" 또는 "ma"

}
*/




/*
int inspect(string target, int starting_point) {
    if (target.size() >= starting_point+2 || target.size() >= starting_point+3) { // 주의!!!! 마지막에 문자열이 1개만 남을 때를 대비하기 위해 어쩌구.size() >= target.size() 이러면 큰일남.
        // 2개로 쪼갠다.
        string split_target = { target[starting_point] , target[starting_point + 1] };
        if (split_target == "ye" || split_target == "ma") {
            starting_point += 2;
        }
        else {
            string split_target = {target[starting_point] , target[starting_point+1], target[starting_point + 2]};
            if (split_target == "aya" || split_target == "woo") { // 주의!!!!!! split_target == "aya", "woo" 라고 하면, 절대 안돼!!
                starting_point += 3;
            }
            else
                return 0; // 옹알이가 아니네.
        }
        return inspect(target, starting_point); // 이번 inspect가 끝났으니 다음 point에서 inspect. (주의!!!! return을 써야 함!!!)
    }
    else {
        return 1; // 모든 조건을 만족한 채로, starting point가 옹알이 길이를 초과함 -> 즉, 옹알이 조건을 만족한 상태.
    }
}
*/