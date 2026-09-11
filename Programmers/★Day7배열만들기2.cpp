#include <string>
#include <vector>
#include <algorithm> // reverse 쓰려고 도입.
#include <queue> // 큐 쓰려고 도입.
#include <iostream>


using namespace std;



static vector<int> solution(int l, int r) {
		

	// 고인물 풀이.
	vector<int> answer;
	queue<int> q;

	q.push(5);
	while (!q.empty()) {
		int n = q.front();
		q.pop();

		if (n > r) continue;
		if (n >= l) {
			answer.push_back(n);
		}

		q.push(n * 10);
		q.push(n * 10 + 5);
	}

	if (answer.empty()) {
		answer.push_back(-1);
	}
	return answer;


	/* 내가 제출한 풀이
	vector<int> answer;

	// 이진수 구현을 위한 몸부림.
	int n = 0;
	r = r / 5;
	l = l / 5;

	while (n <= r) {

		n += 1; // 일단 하나씩 더해가며 n을 비교해보자.

		string nStr = to_string(n);
		reverse(nStr.begin(), nStr.end()); // 이진수를 뒤집어 둔다.
		nStr += "0"; // 자릿수 증가에 대비한 flag 추가.

		for (int i = 0; i < nStr.size() - 1; i++) {
			if (nStr[i] == '2') { // 만약 '2' 라면 '10'으로 표현해야 하는 코드.
				nStr[i] = '0';
				nStr[i + 1] += 1; // char의 +1 이니까 '1'으로 될거임.
			}
			else { // '2'가 없으면 굳이 할 필요가 없으니까 for문 끝내기.
				break;
			}
		}

		if (nStr[nStr.size() - 1] != '1') {
			nStr.pop_back(); // 자릿수 증가 안했으면 0 빼버리고, 증가 했으면 내비두자.
		}

		reverse(nStr.begin(), nStr.end()); // 다시 뒤집어서 원상 복구.

		n = stoi(nStr);


		if (!(n < l) && !(n > r)) {
		
			answer.push_back(n*5);
		}

	}


	// 조건을 만족하지 않으면 -1 담은 배열 반환.
	if (answer.size() == 0) {
		return { -1 };
	}


	return answer;
	*/

}


static void printVec(vector<int> solution) {
	
	cout << "{ ";
	
	for (int i = 0; i < solution.size(); i++) {
	
		cout << solution[i] << " ";
	}
	
	cout << "}" << endl;

}


int main() {


	vector<int> sol1 = solution(5, 555);
	vector<int> sol2 = solution(10, 20);
	vector<int> sol3 = solution(1, 12);


	printVec(sol1);
	printVec(sol2);
	printVec(sol3);


	return 0;
}







/*
static int making_upper_bound(int r) {

	string r_str = to_string(r);
	size_t r_jarisu = to_string(r).size();
	string im_max = "";

	// r에 대해서 해보자.
	for (int n = 0; n < r_jarisu; n++) {
		r_str[n] < '5' ? im_max += "0" : im_max += "5";

		// 5보다 작으면 --> 0
		// 5보다 크거나같으면 --> 5
	}

	return stoi(im_max);
}

static int making_lower_bound(int l) {


	string l_str = to_string(l);
	size_t l_jarisu = to_string(l).size();
	string im_min = "";

	// l에 대해서 해보자.
	// 
	// 일단 자기 자리수보다 한자리 더 큰  0 0 0 0 배열 설정.
	for (int n = 0; n <= l_jarisu; n++) {
		im_min += "0"; // <-- 뒤에 = "5"는 안되는데 여기서 += "0"이 되는 이유??

	}

	for (int n = 1; n < l_jarisu; n++) {
		// im_min 
		if (l_str[n] > '5') {
			// 5보다 크면 -> 나보다 큰 자리수 -> 5 나의 자리수 -> 0 break. 
			im_min[n - 1] = '5';
			break;
		}
		else { // else if (to_string(l)[n] < 5)
			l_str[n] == '0' ? im_min[n] = '0' : im_min[n] = '5';
			// 0이라면 -> 그냥 0
			// 5보다 작으면 -> 그냥 5
		}
	}

	return stoi(im_min);
}
*/

/*
static vector<int> solution(int l, int r) {

	vector<int> zeroFive;

	// 심플함.

	//처음엔 "5" 박아둠.
	//그다음에 "0" + "0"
	//그다음엔 "0" + "5"
	//그다음엔 "5" + "0"
	//그다음엔 "5" + "5"
	//더 단순화 해보면 그냥
	//"5"
	//"5" + "0"
	//"5" + "5"
	//"5" + "0" + "0"
	//"5" + "0" + "5"
	//.
	//.
	//.
	//.
	//눈치챘니? 그냥 원래 있던 string 에다가 "0" 또는 "5"를 덧붙인게 계속 무한 증식되는거임.
	

	// 일단 상한, 하한 구해둠.
	int up_bd = making_upper_bound(r);
	int lo_bd = making_lower_bound(l);



	// 이제 min과 max 사이에서 0과 5로 이루어진 배열을 만들어야함. ㄹㅇ 산넘어 산.

	// im_min이랑 im_max 사이에 무슨 관계가 있는지 알아보자.

	// 만약 자릿수가 다르다면?

	// ex) 005 550 --> 
	// 동일 자리수의 0먼저할지 5먼저할지
	// 그다음 자리수 전부
	// 다음다음 자리수 자리수의 im_max 까지.

	// 만약 자릿수가 같다면?
	// ex) 505 555 --> 505, 550, 550
	// 자리수의 im_max 까지.

	if (lo_bd > up_bd) {
		zeroFive.push_back(-1);
	}

	else {
		// answer에 추가할 새로운 원소를 new_part로 정의한다.
		int new_part = lo_bd;

		// 최대값이랑 같아질 때 까지 계속 추가하면 된다.
		while (new_part != up_bd) {
			zeroFive.push_back(new_part); // 값을 넣어준 다음
			new_part = making_lower_bound(new_part+1); // 새로운 배열을 만들기 위해 +1 && 조건을 만족하는 "0", "5" only 배열 만들기. 이후 up_bd와 일치하는지 확인.
		}

		zeroFive.push_back(up_bd);
	}

	return zeroFive;
}


static void printVector(vector<int> arr) {
	cout << "{ ";
	for (int a : arr) {
		cout << a << " ";
	}
	cout << "}" << endl;
}

int main() {

	int left = 314;
	int right = 514;


	int left2 = 5;
	int right2 = 555;

	int left3 = 10;
	int right3 = 20;


	printVector(solution(left, right));
	printVector(solution(left2, right2));
	printVector(solution(left3, right3));

	return 0;
}


*/





















/*
temp_ans = 5*10^n + 5*10^(n-1) .... 5*10^0
			0,1      0,1             0,1


5
50
55
500     00
505     01
550     10
555     11

5000    000
5005    001
5050    010
5055    011
5500    100
5505    101
5550    110
5555    111

*/



/*

문제 설명
정수 l과 r이 주어졌을 때, l 이상 r이하의 정수 중에서 숫자 "0"과 "5"로만 이루어진 모든 정수를 오름차순으로 저장한 배열을 return 하는 solution 함수를 완성해 주세요.

만약 그러한 정수가 없다면, -1이 담긴 배열을 return 합니다.

제한사항
1 ≤ l ≤ r ≤ 1,000,000


입출력 예
l	r	result
5	555	[5, 50, 55, 500, 505, 550, 555]
10	20	[-1]


입출력 예 설명
입출력 예 #1

5 이상 555 이하의 0과 5로만 이루어진 정수는 작은 수부터 5, 50, 55, 500, 505, 550, 555가 있습니다. 따라서 [5, 50, 55, 500, 505, 550, 555]를 return 합니다.
입출력 예 #2

10 이상 20 이하이면서 0과 5로만 이루어진 정수는 없습니다. 따라서 [-1]을 return 합니다.




*/




/*

static vector<int> solution(int l, int r) {

	vector<int> answer;

	int first_tested_num = 0;



	vector<int> new_answer_indicator;


	int l = 5;
	int r = 555;
	string l_str = to_string(l);
	string r_str = to_string(r);

	int n = l_str.size();

	for (int n = l_str.size(); n < r_str.size(); n++) {



		// 일단 new_answer_indicator를 만들어버리고 난 다음에
		// l 인근의 값을 l 이랑 비교해서 더 작음 제거해버림.
		// r 인근의 값을 r 이랑 비교해서 더 크면 제거해버림.

		// 그래서 new_answer_indicator는 어떻게 만들거임?

		// 1. 일단 자릿수를 구하고 난 다음에 자릿수에 해당하는 0,5로만 이루어진 값을 만들면 됨.



		// 자리수가 1이면

		answer.push_back(n * 5);

		// 자리수가 2이면
		answer.push_back()


	}




	// 일단 l보다 큰 어떤 값을 [출발 값]으로 정해두자.

	// l의 요소를 산산조각 내버리기.
	string l_str = to_string(l);
	vector<int> l_splited;
	for (int i =0 ; i < l_str.size(); i++) {
		l_splited.push_back(stoi(to_string(l_str[i])));
	}

	// r의 요소를 산산조각 내버리기.
	string r_str = to_string(r);
	vector<int> r_splited;
	for (int i = 0; i < r_str.size(); i++) {
		r_splited.push_back(stoi(to_string(r_str[i])));
	}

	// 최소값 설정.
	// [l의 자리수 확인] -> 그 자리수의 500000 먼저 대입 후 확인. 안되면, 50000005, 50000050, 500000055, ... 이런 순서로 쭉 확인.
	int l_jarisu = l_splited.size();
	int min_val = 0;

	// 최대값 설정.
	// [r의 자리수 확인] -> 그 자리수의 55555 먼저 대입 후 확인. 안되면, 555550, 5555505 , 55555500 ... 이런 순서로 쭉 확인 해서 최대값 설정.
	int r_jarisu = r_splited.size();
	int max_val = 0;

	// 구해보았더니, 만약 (최소값) > (최대값) 이라면? --> 조건을 만족하는 5familiy가 없다는 뜻이니까 [-1] 배열 return.
	if (min_val > max_val) {
		answer.push_back(-1);
		return answer;
	}

	//  최대-최소 사이를 꼼꼼하게 채워주자.
	int suspect = 0;
	while (suspect <= r) {


		cout << " 나중에 하자" << endl;
		r++;
	}






	for (int n = l; n <= r; n+=5) {

		// find starting point.
		int tested_num = 133;
		int mandeun_num = n;

		if ((l <= mandeun_num) && (mandeun_num <= r)) {
			answer.push_back(mandeun_num * 5);
		}
		else {
			answer.push_back(-1);
			break;
		}
	}


	while (만든숫자 <r) {
		만든숫자.push_back;
	}

}

*/



