#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*백준 2292번*/
/* 6n 단위로 상승
2<=7
8<=19
*/
//int main() {
//	int a;
//	cin >> a;
//	if (a == 1)
//	{
//		cout << 1;
//		return 0;
//	}
//
//	int i = 1;
//	int x = 2, y = 7;
//	while (1) {
//		if (x <= a && a <= y) {
//			break;
//		}
//		x += (6 * i);
//		i++;
//		y += (6 * i);
//	}
//
//	cout << i + 1;
//
//	return 0;
//	
//}

///*2798번*/
//
//void main() {
//	int a, max;
//	cin >> a >> max;
//
//	vector<int> v1;
//	vector<int> v2;
//	int b;
//	for (int i = 0; i < a; i++) {
//		cin >> b;
//		v1.push_back(b);
//	}
//
//	for (int i = 0; i < a-2; i++) {
//		for (int j = i+1; j < a - 1; j++) {
//			for (int k = j + 1; k < a; k++) {
//				if (v1[i] + v1[j] + v1[k] <= max)
//					v2.push_back(v1[i] + v1[j] + v1[k]);
//			}
//		}
//	}
//	sort(v2.begin(), v2.end());
//	cout << v2.back();
//}

///*백준 2798번*/
//int main() {
//	vector<int> v;
//
//	for (int i = 1; i < 10001; i++) {
//		int a = i;
//		int count = i;
//		while (a > 0) {
//			count += a % 10;
//			a /= 10;
//		}
//		if (count < 10001) {
//			v.push_back(count);
//		}
//	}
//	sort(v.begin(), v.end());
//	v.erase(unique(v.begin(), v.end()), v.end());
//	int k = 0;
//
//	for (int i = 1; i < 10001;i++) {
//		if (k < v.size() && i != v[k])
//			cout << i << "\n";
//		else
//			k++;
//	}
//}

///*백준 2231번*/
//int main() {
//	int a;
//	cin >> a;
//
//	int answer;
//	int n;
//	for (int i = 1; i < a; i++) {
//		n = i;
//		answer = i;
//		while (n > 0) {
//			answer += n % 10;
//			n /= 10;
//		}
//		if (answer == a)
//		{
//			cout << i;
//			return 0;
//		}
//	}
//	cout << 0;
//	return 0;
//}

///*백준 7568번*/
//
//int main() {
//	vector< pair<int, int>>v;
//	int n, a, b;
//	cin >> n;
//	vector<int>v1(n,1);
//
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		v.push_back(make_pair(a, b));
//
//	}
//
//
//	for (int i = 0; i < n-1; i++) {
//		for (int j = i+1; j < n; j++) {
//			if (v[i].first > v[j].first && v[i].second > v[j].second) {
//				v1[j] += 1;
//			}
//			else if (v[i].first < v[j].first && v[i].second < v[j].second) {
//				v1[i] += 1;
//			}
//		}
//		
//	}
//	for (int i = 0; i < n; i++)
//		cout << v1[i] << " ";
//}

