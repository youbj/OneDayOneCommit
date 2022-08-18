#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

///*설탕 배달 2839*/
//
//int main() {
//	int n;
//	cin >> n;
//	int answer = -1;
//
//	int a = n / 5;
//	int b = 1;
//	if (n % 5 == 0)
//	{
//		answer = n / 5;
//	}
//	else if (n % 3 == 0) {
//		answer = n / 3;
//	}
//
//	for (a; a > 0; a--) {
//		if ((n - (5 * a)) % 3 == 0) {
//			b = (n - (5 * a)) / 3;
//			if (answer != -1) {
//				answer = answer < a + b ? answer : a + b;
//				break;
//			}
//			else {
//				answer = a + b;
//				break;
//			}
//			
//		}
//	}
//	cout << answer;
//}

///*10828 스택*/
//
//int main() {
//	int n=0;
//	vector<string>v;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		string s;
//		getline(cin, s);
//
//		if (s == "top") {
//			if (v.empty() != 0) {
//				v.push_back("-1");
//			}
//			else {
//				v.push_back(v.back());
//			}
//		}
//		else if (s == "pop") {
//			if (v.empty() != 0) {
//				v.push_back("-1");
//			}
//			else {
//				v.push_back(v.back());
//				v.pop_back();
//			}
//		}
//		else if (s == "size") {
//			v.push_back(to_string(v.size()));
//		}
//		else if (s == "empty") {
//			if (v.empty() != 0) {
//				v.push_back("1");
//			}
//			else
//				v.push_back("0");
//		}
//		else {
//			string str="";
//			for (int k = 5; k < s.length(); k++)
//				str += s[k];
//			v.push_back(str);
//		}
//	}
//
//	for (int i = 0; i < v.size(); i++) {
//		cout <<i<<" 번째 : " << v[i] << "\n";
//	}
//	return 0;
//}
