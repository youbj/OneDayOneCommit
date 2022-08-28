#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

///*2217 로프*/
///*
//로프를 모두 사용할 필요는 없다.
//*/
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> arr;
//
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		arr.push_back(a);
//	}
//	sort(arr.begin(), arr.end());
//	int a = 0;
//	int answer = arr.back();
//	int max = arr.back();
//	while (a<n) {
//		if (arr[a] * (n - a) > max) {
//			max = arr[a] * (n - a);		
//		}
//		else
//			a++;
//	}
//	answer = max;
//	cout << answer;
//	return 0;
//}

///*11000 강의실 배정*/
//
//#include<map>
//
//int main() {
//	ios_base::sync_with_stdio(NULL);
//	cin.tie(NULL); cout.tie(NULL);
//
//	int n;
//	cin >> n;
//	map<int, int>mp;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		for (int j = a; j < b; j++) {
//			++mp[j];
//		}
//	}
//
//	auto pr = max_element(mp.begin(), mp.end(), [](const auto& x, const auto& y) {
//		return x.second < y.second;
//		});
//	cout << pr->second;
//}