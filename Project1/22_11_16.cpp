#include <iostream>

using namespace std;

/*백준 2810번 컵홀더*/

//int main() {
//	ios::sync_with_stdio(0); cin.tie(0);
//	string s;
//	int n;
//	cin >> n;
//	cin >> s;
//	int cnt = 0;
//	int answer = 1;
//	for (int i = 0; i < n; i++) {
//		if (s[i] == 'S') ++answer;
//		else {
//			if (cnt == 0) {
//				++answer;
//				cnt = 1;
//			}
//			else cnt = 0;
//		}
//	}
//	if (answer > n)answer = n;
//	cout << answer;
//}

/*
백준 11004번 K번째 수
1. 1부터 5,000,000까지의 N개의 수가 있는 배열 A
2. 그 중 K번째에 있는 수 출력
-------------------------------------------------
주의해야 할 점
1. 5,000,000개의 수를 어떻게 정렬할 것인가
2. A의 요소가 -10의 9제곱부터 10의 9제곱까지이므로 longlong을 선언해야한다
*/
#include <algorithm>
#include <vector>
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	vector<vector<long long int>>v;
	int n, k; cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		v[a / 1000].push_back(a);
	}
	int cnt = 0, check = -1;
	for (int i = 0; i < 500; i++) {
		cnt += v[i].size();
		if (k <= cnt) {
			check = i;
			break;
		}
	}
	k -= cnt;

	sort(v[check].begin(), v[check].end());

	cout << v[check][cnt];
}

