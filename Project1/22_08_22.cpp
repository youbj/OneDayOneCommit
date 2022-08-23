#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//int main() {
//	int n;
//	cin >> n;
//	vector<int> answer;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		int ans = 0;
//		cin >> a>> b;
//
//		if (a == b) {
//			answer.push_back(1);
//			continue;
//		}
//		else if (a == 1) {
//			answer.push_back(b);
//		}
//		else {
//			b -= a - 1;		
//			for (int k = b; k > 0; k--) {
//				int m = b;
//				while (m > 0) {
//					for (int j = m; j > 0; j--) {
//						ans += j;
//						cout << j << " ";
//					}cout << endl;
//					m--;
//				}
//				b--;
//			}
//			answer.push_back(ans);
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << answer[i]<<"\n";
//	}
//
//}

///*1009 분산*/
//
//#include <cmath>
//
//int main() {
//	int t;
//	cin >> t;
//	vector<int> answer;
//
//	for (int i = 0; i < t; i++) {
//		int a, b;
//		cin >> a >> b;
//		a %= 10;
//		int k;
//
//		if (a == 1 || a == 5 || a == 6 || a == 0) {
//			if (a == 0)
//				a = 10;
//			answer.push_back(a);
//		}
//		else if (a == 4 || a == 9) {
//			if (b %2 == 0) {
//				if (a == 4)
//					answer.push_back(6);
//				else
//					answer.push_back(1);
//			}
//			else {
//				answer.push_back(a);
//			}
//
//		}
//		else {
//			b %= 4;
//			if (b == 0)
//				b = 4;
//			k = pow(a, b);
//			k %= 10;
//			answer.push_back(k);
//		}
//	}
//
//		for (int i = 0; i < t; i++) {
//			cout << answer[i] << "\n";
//		}
//	}

///*강의실 배정*/
//
//int main() {
//	int n;
//	cin >> n;
//	vector<pair<int, int>>v;
//
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		v.push_back(make_pair(a, b));
//	}
//	sort(v.begin(), v.end());
//
//	vector<pair<int, int>>ans;
//	ans.push_back(make_pair(v[0].first, v[0].second));
//	for (int i = 1; i < n; i++) {
//		int a = 0;
//		for (int j = 0; j < ans.size(); j++) {
//			if (ans[j].first <= v[i].first && ans[j].second > v[i].first) {
//				a++;
//			}
//			else {
//				ans[j].second = v[i].second;
//				a--;
//			}
//		}
//		if (a == ans.size()) {
//			ans.push_back(make_pair(v[i].first, v[i].second));
//		}
//	}
//
//	cout << ans.size();
//}