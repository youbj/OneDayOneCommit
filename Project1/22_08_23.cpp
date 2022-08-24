#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

///*4796 캠핑*/
//int main() {
//	vector<int>answer;
//	while (1)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (a == 0 && b == 0 && c == 0)
//			break;
//
//		int answ = 0;;
//		int day = c / b;
//		answ = a * day;
//
//		day = c % b;
//		if (day >= a) {
//			answ += a;
//		}
//		else
//			answ += day;
//
//		answer.push_back(answ);
//	}
//	for (int i = 0; i < answer.size(); i++) {
//		cout << "Case " << i+1 << ": " << answer[i] << "\n";
//	}
//}

///*1049 기타줄*/
//
//int main() {
//	int min_set = 1001, min = 1001;
//
//	int chan, n;
//	cin >> chan >> n;
//
//	for (int i = 0; i < n; i++) {
//		int set, pic;
//		cin >> set >> pic;
//		if (min_set > set)
//			min_set = set;
//		if (pic < min)
//			min = pic;
//	}
//	int answer = 0;
//	if (min_set < min * 6) {
//		answer += ((chan / 6) * min_set);
//		if (((chan % 6) * min) < min_set) {
//			answer += ((chan % 6) * min);
//		}
//		else
//			answer += min_set;
//	}
//	else {
//		answer += (chan * min);
//	}
//	cout << answer;
//}

///*1543 문서검색*/
//
//int main() {
//	string str,s,com="";
//	int answer = 0;
//	getline(cin, str);
//	getline(cin, s);
//
//
//	for (int i = 0; i < str.length();) {
//		if (s.length() + i > str.length())
//			break;
//		for (int j = 0; j < s.length(); j++) {
//			com += str[j+i];
//		}
//
//		if (com == s) {
//			answer++;
//			i += s.length();
//			com = "";
//		}
//		else {
//			i++;
//			com = "";
//		}
//	}
//
//	cout << answer;
//}

///*1715 카드정렬하기*/
///*
//1. 첫줄에 n으로 카드 묶음의 수가 주어짐
//2. 여러개의 카드묶음을 2묶음씩 골라 합침 -> 묶인 두개의 카드 묶음은 하나의 카드묶음으로 처리
//3. 이때 모든카드묶음의 합을 구하시오
//*/
//bool comp(int a, int b) {
//	return a > b;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v;
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	sort(v.begin(), v.end(), comp);
//	int min = v.back();
//	v.pop_back();
//
//	int com = 1001;
//	vector<int> arr;
//	vector<int>::iterator it = v.begin();
//
//	int k = v.size() - 1;
//	while (1) {
//
//		if (min <= v[k]) {
//			min += v[k];
//			v.pop_back();
//			arr.push_back(min);
//			k--;
//		}
//		else {
//			if (v.front() <= min) {
//				v.insert(v.begin(), min);
//			}
//			else {
//				for (int i = 0; i < k+1; i++) {
//					if (v[i] <= min) {
//						v.insert(it + i , min);
//						i += k;
//					}
//				}
//			}
//			min = v.back();
//			v.pop_back();
//		}
//
//		if (k == -1)
//			break;
//	}
//
//	int answer = 0;
//	for (int i = 0; i < arr.size(); i++) {
//		answer += arr[i];
//	}
//	cout << answer;
//	return 0;
//
//}

///*10162 전자레인지*/
//
//int main() {
//	int t;
//	cin >> t;
//
//	if (t % 10 != 0) {
//		cout << -1;
//		return 0;
//	}
//	
//	int t_5 = 0, t_1 = 0;
//
//	if (t / 60 >= 5) {
//		t_5 = (t / 60) / 5;
//		t -= (300 * t_5);
//	}
//	if (t / 60 > 0) {
//		t_1 = t / 60;
//		t -= (60 * t_1);
//	}
//	
//	cout << t_5 << " " << t_1 << " " << t / 10;
//	return 0;
//}

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
//			if (ans[j].first <= v[i].first && v[i].first < ans[j].second) {
//				a++;
//			}
//			else {
//				ans[j].second = v[i].second;
//				j = n;
//
//			}
//		}
//		if (a == ans.size()) {
//			ans.push_back(make_pair(v[i].first, v[i].second));
//		}
//	}
//	cout << ans.size();
//}