#include <string>
#include <vector>
#include <iostream>

using namespace std;

static vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    

    // switch를 활용한 풀이.
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    switch (n) {
        
        case 1: return vector<int>(num_list.begin(), num_list.begin() + b + 1);
        
        case 2: return vector<int>(num_list.begin() + a, num_list.end());
        
        case 3: return vector<int>(num_list.begin() + a, num_list.begin() + b + 1);
        
        case 4: {
         
            vector<int> answer;
        
            for (int i = a; i <= b; i += c) {
            
                answer.push_back(num_list[i]);
            }
                
        return answer;
    
        }
    }

    /* 내가 제출한 풀이.
    vector<int> answer;

    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];

    if (n == 1) {
        for (int i = 0; i <= b; i++) {
            answer.push_back(num_list[i]);
        }
    }
    else if (n == 2) {
        for (int i = a; i < num_list.size(); i++) {
            answer.push_back(num_list[i]);
        }
    }
    else if (n == 3) {
        for (int i = a; i <= b; i++) {
            answer.push_back(num_list[i]);
        }
    }
    else {// if (n==4)

        for (int i = a; i <= b; i += c) {
            answer.push_back(num_list[i]);
        }
    }

    return answer;
    */
}


int main() {

    /*
    n	slicer	    num_list	                result
    3	[1, 5, 2]	[1, 2, 3, 4, 5, 6, 7, 8, 9]	[2, 3, 4, 5, 6]
    4	[1, 5, 2]	[1, 2, 3, 4, 5, 6, 7, 8, 9]	[2, 4, 6]    
    */

    cout << "{ ";

    auto sol1 = solution(3, { 1,5,2 }, { 1,2,3,4,5,6,7,8,9 });
    auto sol2 = solution(4, { 1,5,2 }, { 1,2,3,4,5,6,7,8,9 });

    for (int i = 0; i < sol1.size(); i++) {

        cout << sol1[i] << " ";
    }

    cout << "}" << endl;


    cout << "{ ";
    for (int i = 0; i < sol2.size(); i++) {

        cout << sol2[i] << " ";
    }


    cout << "}" << endl;

    return 0;
}