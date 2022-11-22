#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;

///*1041 주사위*/
///* 3개인 면 4개 (n-2)*4 + (n-1)*4 + (n-2)^2 + (n-2)*(n-1) */
//
//int main() {
//
//	int n;
//	cin >> n;
//	long long int arr[6];
//	long long int max = 0;
//	int k;
//	for (int i = 0; i < 6; i++) {
//		cin >> arr[i];
//		if (arr[i] > max)
//			k = i;
//	}
//	arr[k] = 0;
//	sort(arr, arr + 6);
//	long long int answer = 0;
//	long long int a = arr[0];
//	if (n > 2) {
//		answer += (a * 4 * ((n - 2) * (n - 1) + (n - 2) * (n - 2)));
//	}
//	a += arr[1];
//
//	answer += (a * 4 * ((2 * n) - 3));
//
//	a += arr[2];
//
//
//	cout << answer;
//}

///*11728 배열합치기*/
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	set<long long int>s;
//	for (int i = 0; i < n; i++) {
//		long long int a;
//		cin >> a;
//		s.insert(a);
//	}
//	for (int i = 0; i < m; i++) {
//		long long int a;
//		cin >> a;
//		s.insert(a);
//	}
//
//	for (auto c : s) {
//		cout << c << " ";
//	}
//}

///*8979 올림픽*/
//
//class Medal {
//public:
//	int num = 0;
//	int gold = 0;
//	int silver = 0;
//	int bronze = 0;
//};
//
//bool com(Medal m1,Medal m2) {
//	if (m1.gold == m2.gold) {
//		if (m1.silver == m2.silver) {
//			return m1.bronze > m2.bronze;
//		}
//		return m1.silver > m2.silver;
//	}
//	return m1.gold > m2.gold;
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	;
//	int n, k;
//	cin >> n >> k;
//	Medal* medal = new Medal[n];
//	Medal m;
//	for (int i=0; i < n; i++) {
//		cin >> medal[i].num >> medal[i].gold >> medal[i].silver >> medal[i].bronze;
//		if (medal[i].num == k)
//			m = medal[i];
//	}
//	sort(medal, medal + n, com);
//
//	int answer=0;
//
//	for (int i = 0; i < n; i++) {
//		if (medal[i].gold== m.gold && medal[i].silver== m.silver && medal[i].bronze== m.bronze ) {
//			answer = i + 1;
//			break;
//		}
//	}
//	delete[]medal;
//	cout << answer;
//}