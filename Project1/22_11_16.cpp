#include <iostream>

using namespace std;

/*���� 2810�� ��Ȧ��*/

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
���� 11004�� K��° ��
1. 1���� 5,000,000������ N���� ���� �ִ� �迭 A
2. �� �� K��°�� �ִ� �� ���
-------------------------------------------------
�����ؾ� �� ��
1. 5,000,000���� ���� ��� ������ ���ΰ�
2. A�� ��Ұ� -10�� 9�������� 10�� 9���������̹Ƿ� longlong�� �����ؾ��Ѵ�
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

