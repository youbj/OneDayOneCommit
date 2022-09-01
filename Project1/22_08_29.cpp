#include <iostream>
#include <vector>

using namespace std;

///*2847 게임을 만든 동준이*/
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	int n;
//	cin >> n;
//
//	vector<int>v;
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//	int max = v.back();
//	int count = 0;
//	for (int i = n - 2; i >= 0; i--) {
//		if (max <= v[i]) {
//			count += v[i] - max + 1;
//			--max;			
//		}
//		else
//			max = v[i];
//	}
//	cout << count;
//}

int main() {
	int n ,m;
	cin >> n >> m;

	int max = n > m ? n : m;
	int min = n <= m ? n : m;
	int answer = 1;




}