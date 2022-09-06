#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


//map<int, int>m;
//int n;
//
//int find() {
//	auto pr = max_element(m.begin(), m.end(), [](const auto& x, const auto& y) {
//		return x.second < y.second;
//		});
//	return  pr->second;
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		for (int j = a; j < b; j++) {
//			++m[j];
//		}
//	}
//	cout << find();
//
//}

///*18310 ¾ÈÅ×³ª*/
//
//int n;
//vector<long long int>v;
//long long int answer = 0;
//
//void solve() {
//	sort(v.begin(), v.end());
//	answer = v[(n - 1) / 2];
//}
//
//int main() {
//	cin.tie(NULL); cout.tie(NULL);
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//	solve();
//	cout << answer;
//}

///*16953 A -> B*/
//
//int main() {
//	long long int count = 1;
//	long long int a, b;
//	cin >> a >> b;
//	while (1) {
//		if (a/ 10 > 0) {
//			if (b % 10 == 2) {
//				b /= 2; ++count;
//			}
//			else if (b % 10 == 1) {
//				b /= 10; ++count;
//
//			}
//			else {
//				if (b % 2 == 0) {
//					b /= 2;
//					++count;
//				}
//				else {
//					count = -1;
//					break;
//				}
//			}
//			if (a == b) {
//				++count;
//				break;
//			}
//		}
//		else {
//			if (b % 2 == 0) {
//				b /= 2; ++count;
//				if (a == b)
//					break;
//			}			
//			else {
//				count = -1;
//				break;
//			}
//		}
//	}
//	cout << count;
//}

