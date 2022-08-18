#include <iostream>
#include <vector>
#include <string>

using namespace std;

///*10828 스택*/
//
//int main() {
//	int n = 0;
//	vector<int>v;
//	vector<int>answer;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		string s;
//		cin >> s;
//
//		if (s == "top") {
//			if (v.size() == 0) {
//				answer.push_back(-1);
//			}
//			else {
//				answer.push_back(v.back());
//			}
//		}
//		else if (s == "pop") {
//			if (v.size() == 0) {
//				answer.push_back(-1);
//			}
//			else {
//				answer.push_back(v.back());
//				v.pop_back();
//			}
//		}
//		else if (s == "size") {
//			answer.push_back(v.size());
//		}
//		else if (s == "empty") {
//			if (v.size() == 0) {
//				answer.push_back(1);
//			}
//			else
//				answer.push_back(0);
//		}
//		else {
//			int a;
//			cin >> a;
//			v.push_back(a);
//		}
//	}
//
//	for (int i = 0; i < answer.size(); i++) {
//		cout << answer[i] << "\n";
//	}
//	return 0;
//}

///*10773 제로*/
//
//int main() {
//	int n;
//	vector<int> arr;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//
//		if (a == 0) {
//			arr.pop_back();
//		}
//		else
//			arr.push_back(a);
//	}
//	int answer = 0;
//	for (int i = 0; i < arr.size(); i++) {
//		answer += arr[i];
//	}
//	cout << answer;
//}

///*9012 괄호*/
//
//int main() {
//	int n;
//	vector<string>answer;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		string s="";
//		int count = 0;
//		cin >> s;
//		for (int j = 0; j < s.length(); j++) {
//			if (s[j] == '(') {
//				count++;
//			}
//			else
//				count--;
//			if (count < 0)
//				break;
//
//		}
//
//		if (count == 0) {
//			answer.push_back("YES");
//		}
//		else
//			answer.push_back("NO");
//		
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << answer[i] << "\n";
//	}
//}