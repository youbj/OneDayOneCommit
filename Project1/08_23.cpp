//#include <iostream>
//using namespace std;
//int main() {
//	long long int n;
//	int answer = 0;
//	cin >> n;
//
//	answer += n / 14;
//	n %= 14;
//	answer += n / 7;
//	n %= 7;
//	answer += n;
//
//	cout << answer;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	int h, m; cin >> h >> m;
//
//	for (int i = 0; i < n; i++) {
//		int a; cin >> a;
//		h += a / 60;
//		m += a % 60;
//	}
//	h += m / 60;
//	m %= 60;
//	h %= 24;
//	cout << h << " " << m;
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n; cin >> n;
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		int a, b; char c;
//		cin >> a >> c >> b;
//		switch (c) {
//		case '+':
//			sum += (a + b);
//			break;
//		case '*':
//			sum += (a * b);
//			break;
//		case '-':
//			sum += (a - b);
//			break;
//		case '/':
//			sum += (a / b);
//			break;
//		
//		}
//	}
//	cout << sum;
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int answer = 0;
//	int n; cin >> n;
//	int check = 0;
//	int num = -1;
//
//
//	for (int i = 0; i < n; i++) {
//		int a; cin >> a;
//		if (i == 0 || i == n - 1) {
//			answer += a;
//		}
//		else {
//			if (i == 1){
//				num = a;
//				answer += a;
//			}
//			else if (i == 2) {
//				check = num - a;
//				answer += a;
//			} 
//			else {
//				if (check == 0) {
//					answer += a;
//					check = num - a;
//				}
//				else if (check < 0) {
//					answer += a;
//					if (num - a > 0) {
//						answer = 0;
//						break;
//					}
//					num = a;
//				}
//				else {
//					answer += a;
//					if (num - a < 0) {
//						answer = 0;
//						break;
//					}
//					num = a;
//				}
//			}
//		}
//	}
//
//	cout << answer;
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int answer = 0;
//	int n; cin >> n;
//	vector<int>v;
//	int num = -1;
//	for (int i = 0; i < n; i++) {
//		int k; cin >> k;
//		if (i == 0 || i == n - 1) {
//			answer += k;
//			continue;
//		}
//		else {
//			v.push_back(k);
//
//	}
//	vector<int>v1(v);
//	sort(v1.begin(), v1.end());
//	vector<int>v2(v);
//	sort(v2.rbegin(), v2.rend());
//	bool check = false;
//	for (int i = 0; i < n - 2; i++) {
//		if (v1[i] != v[i]) {
//			check = true;
//			answer = 0;
//			break;
//		}
//		answer += v1[i];
//	}
//	if (check) {
//		for (int i = 0; i < n - 2; i++) {
//			if (v2[i] != v[i]) {
//				check = true;
//				answer = 0;
//				break;
//			}
//			answer += v1[i];
//		}
//	}
//	cout << answer;
//}

//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int bunary_check(long long int n) {
//	int count = 0;
//	while (n != 0) {
//		if (n % 2 == 1)
//			++count;
//		n /= 2;
//	}
//	return count;
//}
//
//bool condition(pair<int, int>a, pair<int, int>b) {
//	if (a.second == b.second)
//		return a.first > b.first;
//	return a.second > b.second;
//}
//
//int main() {
//	int n, k;
//	cin >> n >> k;
//	vector<pair<long long int, int>>v;
//	for (int i = 0; i < n; i++) {
//		long long int a; cin >> a;
//		int ba = bunary_check(a);
//		v.push_back(make_pair(a, ba));
//	}
//	sort(v.begin(), v.end(), condition);
//	cout << v[k].second;
//	return 0;
//}

