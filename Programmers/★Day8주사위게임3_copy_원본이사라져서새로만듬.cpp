// 내일 새벽에 꼭!!! 다시하기.

#include <string>
#include <vector>

#include <iostream>

#include <algorithm> // min 함수 쓰려고 들고옴.
#include <cmath>

using namespace std;

static vector<int> how_겹침(vector<int> list) {
    // 뭐가 어떻게 겹친건지 알려줄게.
    vector<int> cnt = { 0,0,0,0 };

    for (int i = 0; i < list.size(); i++) {

        for (int checker = 0; checker < list.size(); checker++) {
            
            if (list[i] == list[checker]) {
                
                cnt[i]++;
            }
        }
    }

    return cnt;
}

static int solution(int a, int b, int c, int d) {
    int answer = 0;

    vector<int> list = { a, b, c, d };
    vector<int> cnt = how_겹침(list);
    

    // cnt 잘 나왔나 확인.
    cout << "{ ";
    for (int i = 0; i < cnt.size(); i++) {
        cout << cnt[i] << " ";

    }
    cout << "}";


    // cnt의 최대값 찾기.
    int max_val = 0;
    for (int i = 0; i < cnt.size(); i++) {
        max_val = max(max_val, cnt[i]);
        // cout << max_val << " cute ";
    }

    int p = 7;
    int q = 7;
    int r = 7;

    if (max_val == 4) {
        answer = list[0] * 1111;
    }
    
    else if (max_val == 3) { // cnt qqqw

        for (int i = 0; i < cnt.size(); i++) {
            if (cnt[i] == 3) {
                p = list[i];
            }
            else if (cnt[i] == 1) {
                q = list[i];
            }
        }

        answer = (10 * p + q) * (10 * p + q);
    }

    else if (max_val == 2) {
        
        // cnt qqww
        if (cnt == vector<int> {2, 2, 2, 2}) {
            if (list[0] != list[1]) {
                p = list[0];
                q = list[1];
            }
            else {
                p = list[0];
                q = list[2];
            }
            answer = (p + q) * abs(p - q);
        }

        // cnt qqwe
        else {
            // cnt = 2 2 1 1
            for (int i = 0; i < cnt.size(); i++) {
                if (cnt[i] == 2) {
                    // int p = list[i];
                }
                else if (cnt[i] == 1 && q <= 6) { // (cnt[i] == 1) {
                    r = list[i];
                    cout <<  r << " let's go! ";
                }
                else if (cnt[i] == 1) { // (cnt[i] == 1 && q <=6 ) { 여기서 중요한 점은 if의 범위는 좁 -> 넓 순으로 되어야 한다는 점이다.
                    q = list[i];
                    cout << q << " you can do this! ";
                }
            }
            cout << q << " <- q : am I diffenrent? " << r << " <- r : when could we finish?";
            answer = q * r;
        }

    }

    else if (max_val == 1) {
        answer = min(min(a, b), min(c, d));
    }

    return answer;
}

int main() {


    /*  
        a	b	c	d	result
        2	2	2	2	2222
        4	1	4	4	1681
        6	3	3	6	27
        2	5	2	6	30
        6	4	2	5	2
    */

    cout << solution(2, 2, 2, 2) << endl;
    cout << solution(4, 1, 4, 4) << endl;
    cout << solution(6, 3, 3, 6) << endl;
    cout << solution(2, 5, 2, 6) << endl;
    cout << solution(6, 4, 2, 5) << endl;

    return 0;
}

