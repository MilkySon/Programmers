#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

static int solution(vector<string> order) {
    int answer = 0;
    
    // 아메리카노 (Hot, Ice) 4500원
    // 카페 라떼  (Hot, Ice) 5000원

    // default = Ice
    // anything = 차가운 아메리카노


    // 어차피... 가격 아님???
    for (const auto& coffee : order) {
        (coffee.find("latte") != string::npos)
            ? answer+=5000 : answer+=4500;
    }

    /*
    accumulate(order.begin(), order.end(), order.begin(),
        [](const auto& coffee : order) {
            (coffee.find("latte") != string::npos)
                ? 5000 : 4500;
        });
    */
    
    return answer;
}


int main() {
    /*
    order[i]	    팀원의 적은 음료	실제 주문 음료
    "cafelatte"	    카페 라테	        차가운 카페 라테
    "americanoice"	차가운 아메리카노	차가운 아메리카노
    "hotcafelatte"	따뜻한 카페 라테	따뜻한 카페 라테
    "anything"	    아무거나	        차가운 아메리카노
    
    order	                                                    result
    ["cafelatte", "americanoice", "hotcafelatte", "anything"]	19000
    ["americanoice", "americano", "iceamericano"]	            13500
    
    */

    cout << solution({ "cafelatte", "americanoice", "hotcafelatte", "anything" }) << endl;
    cout << solution({ "americanoice", "americano", "iceamericano" }) << endl;

    return 0;
}