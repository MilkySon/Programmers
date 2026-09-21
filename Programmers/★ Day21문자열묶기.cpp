// chatGPT 해설
// https://chatgpt.com/g/g-p-6a6d9e1507608191ade5d834b76deed0-c/c/6aae3d54-c2f8-83e8-aff2-751d9cb6155b

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

static int solution(vector<string> strArr) {

    // unordered_map을 활용한 풀이
    int answer = 0;

    unordered_map<int, int> arc;

    for (const auto& s : strArr)
    {
        arc[s.size()]++;
    }

    for (const auto& v : arc)
    {
        answer = max(answer, int(v.second));
    }

    return answer;


    /*
    // 문제 조건 (strArr의 길이는 최대 30) 을 활용한 풀이
    vector<int> lengths(31, 0);
    for (string str : strArr)
    {
        lengths[str.length()]++;
    }
    return *max_element(lengths.begin(), lengths.end());
    */

    /* 내가 제출한 풀이
    int answer = 0;
    vector<int> lenArr;

    // str 벡터를 -> 각len 벡터로
    for (const auto& st : strArr) {
        lenArr.push_back(st.length());

    }


    int candy = 0;
    for (const auto& len : lenArr) {

        size_t current_searching = count(lenArr.begin(), lenArr.end(), len);

        if (current_searching > candy) {
            candy = current_searching;
        }
    }
    return candy;
    */
}

int main() {

    /*
    strArr	                    result
    ["a","bc","d","efg","hi"]	2
    */

    cout << solution({ "a","bc","d","efg","hi" }) << endl;


    return 0;
}