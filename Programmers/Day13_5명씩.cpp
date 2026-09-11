

#include <iostream>
#include <vector>
#include <string>

using namespace std;

static void printVector(vector<string> vec) {

	cout << "{ ";

	for (string vv : vec) {
		cout << vv << " ";
	}

	cout << "}" << endl;
}

static vector<string> solution(vector<string> names) {

	vector<string> answer;

	for (int i = 0; i < names.size(); i += 5) {
		answer.emplace_back(names[i]);
	}

	return answer;
}










int main() {
	/*
	names														result
	["nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx"]	["nami", "vex"]
	*/


	auto sol = solution({ "nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx" });
	printVector(sol);


	return 0;
}