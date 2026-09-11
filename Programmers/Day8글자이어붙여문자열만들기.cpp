#include <string>
#include <vector>
#include <iostream>

using namespace std;

static string solution(string my_string, vector<int> index_list) {
    string answer = "";


    /*
    for (int i = 0; i < index_list.size(); i++) {
        answer += my_string[index_list[i]];
    }
    */
    
    for (int i : index_list) {
        answer += my_string[i];
    }
    

    return answer;
}

int main() {


    string my_string1 = "cvsgiorszzzmrpaqpe";	
    vector<int> index_list1 = {16, 6, 5, 3, 12, 14, 11, 11, 17, 12, 7};
    string my_string2 = "zpiaz";	
    vector<int> index_list2 = {1, 2, 0, 0, 3};


    cout << solution(my_string1, index_list1) << endl;
    cout << solution(my_string2, index_list2) << endl;

    return 0;
}