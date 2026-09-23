#include <string>
#include <vector>
#include <iostream>
#include <algorithm> // find

using namespace std;

static int solution(vector<int> num_list, int n) {
    
    return find(num_list.begin(), num_list.end(), n) != num_list.end();
}

int main() {

    /*
    num_list	        n	result
    [1, 2, 3, 4, 5]	    3	1
    [15, 98, 23, 2, 15]	20	0
    */

    cout << solution({ 1,2,3,4,5 }, 3) << endl;
    cout << solution({ 15,98,23,2,15 }, 20) << endl;


    return 0;
}