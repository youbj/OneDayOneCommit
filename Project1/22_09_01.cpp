#include <iostream>
#include <vector>
#include <string>

using namespace std;

///*프로그래머스 성격유형 검사*/
//
///*
//1. 4가지의 지표가 있으며 R T / C F / J M / A N 으로 나뉜다
//2. 검사지의 n개의 질문에 7개의 답이 2개의 유형이 각각 +3~+1점부터 0 +3~+1점으로 존재
//3. 각지표에서 더 높은점수를 받은 성격유형이 검사자의 성격이며 점수가 같을 경우 사전순
//4. servey의 요소중 먼저나오는 것이 비동의 후에 나오는 것이 동의이다. => choices의 요소를 4으로 나눈몫이 1이상이면 동의 미만이동 비동의
//5. choices는 1(매우 비동의) ~ 7(매우 동의)까지를 나타낸다 => 4으로 나눈 나머지로 처리
//
//*/
//
//
//
//int main() {
//	vector<string> survey = { "NA", "NA", "NA", "NA", "NA" };
//	vector<int> choices = { 5, 4, 3, 7, 1 };
//
//	int arr[4][2] = { {0,0},{0,0},{0,0},{0,0} };
//
//	string answer = "";
//	vector<string>str = { "RT","CF","JM","AN" };
//
//	for (int i = 0; i < survey.size(); i++) {
//		int n = -1;
//		int rev = 1;
//		if (survey[i] == "RT" || survey[i] == "TR") {
//			n = 0;
//			if (survey[i] == "RT")
//				rev = 1;
//			else
//				rev = 0;
//		}
//		else if (survey[i] == "CF" || survey[i] == "FC") {
//			n = 1;
//			if (survey[i] == "CF")
//				rev = 1;
//			else
//				rev = 0;
//		}
//		else if (survey[i] == "JM" || survey[i] == "MJ") {
//			n = 2;
//			if (survey[i] == "JM")
//				rev = 1;
//			else
//				rev = 0;
//		}
//		else if (survey[i] == "AN" || survey[i] == "NA") {
//			n = 3;
//			if (survey[i] == "AN")
//				rev = 1;
//			else
//				rev = 0;
//		}
//
//		if (choices[i] / 4 != 0) { //agree second
//			if (rev == 1) {
//				arr[n][1] += (choices[i] % 4);
//			}
//			else {
//				arr[n][0] += (choices[i] % 4);
//			}
//		}
//		else { //disagree first
//			if (rev == 1) {
//				arr[n][0] += (choices[i] % 4);
//			}
//			else {
//				arr[n][1] += (choices[i] % 4);
//			}
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		cout << i << arr[i][0] << "   " << arr[i][1] << endl;
//		if (arr[i][0] >= arr[i][1])
//			answer += str[i][0];
//
//		else
//			answer += str[i][1];
//	}
//	
//
//
//	cout<< answer;
//
//}

///*프로그래머스 소수 만들기*/
//
//int main() {
//	vector<int>nums= {1, 2, 7, 6, 4};
//	vector<int>v;
//
//	for (int i = 0; i < nums.size()-2; i++) {
//		for (int j = i + 1; j < nums.size() - 1; i++) {
//			for (int k = j + 1; k < nums.size(); k++) {
//				int a = nums[i] + nums[j] + nums[k];
//				v.push_back(a);
//			}
//		}
//	}
//	for (int x = 0; x < v.size(); x++) {
//		cout << v[x] << endl;
//	}
//
//}

/*17298 오큰수*/

int main() {
	vector<string>answer;

	while(1) {
		string s="";
		getline(cin, s);
		if (s == ".")
			break;

		for (int i = 0; i < s.length(); i++) {

		}
	}
}