#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//void main() {
//	int n, m, k;
//	cin >> n >> m >> k;
//	vector<int> v1;
//
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		v1.push_back(a);
//	}
//	sort(v1.begin(), v1.end());
//
//	int answer = 0;
//	for (int i = 0; i < m; i++) {
//		if (i % k == 0 && i != 0) {
//			answer += v1[n - 2];
//		}
//		else
//			answer += v1.back();
//	}
//	cout << answer;
//}