
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

static string solution(string myString) {
    

    // transform 활용 풀이
    transform(myString.begin(), 
        myString.end(), 
        myString.begin(), 
        [](char& c) {
            return (c == 'a' || c == 'A') 
                ? 'A' 
                : tolower(c); 
        }
    );
    
    return myString;


    /* 내가 제출한 풀이 
    for (char& is_it_a : myString) {

        (is_it_a == 'a' || is_it_a == 'A') 
            ? is_it_a = toupper(is_it_a) 
            : is_it_a = tolower(is_it_a);
    }

    return myString;
    */
}


int main() {

    /*
    myString	        result
    "abstract algebra"	"AbstrAct AlgebrA"
    "PrOgRaMmErS"	    "progrAmmers"
    */

    cout << solution("abstract algebra") << endl;
    cout << solution("PrOgRaMmErS") << endl;

    return 0;
}






