
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//int main() {
//	int t;
//	cin >> t;
//
//	vector<int>answer;
//	for (int i = 0; i < t; i++) {
//		int h, w, n;
//		cin >> h >> w >> n;
//
//		if (n%h == 0)
//			answer.push_back(h * 100 + (n/h));
//		else
//			answer.push_back((n%h) * 100 + (n/h)+1);
//	}
//
//	for (int i = 0; i < answer.size(); i++) {
//		cout << answer[i] << "\n";
//	}
//}

///*11651 좌표정렬하기 2*/
//bool com(const pair<int, int> p1, const pair<int, int> p2) {
//	if (p1.second == p2.second)
//		return p1.first < p2.first;
//	return p1.second < p2.second;
//}
//int main() {
//	vector< pair<int, int >>v;
//	int n;
//	cin >> n;
//
//	int a, b;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		v.push_back(make_pair(a, b));
//	}
//
//	sort(v.begin(), v.end(),com);
//	/*cout << "=======================\n";*/
//	for (int i = 0; i < n; i++) {
//		cout << v[i].first << " " << v[i].second << "\n";
//	}
//	return 0;
//}

///*10814 나이순 정렬*/
//
//bool com(const pair<int, string> p1, const pair<int, string> p2) {
//	return p1.first < p2.first;
//}
//
//int main() {
//	vector< pair<int, string >>v;
//	
//	int n;
//	cin >> n;
// 
//	int a;
//	string s;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> s;
//		v.push_back(make_pair(a, s));
//	}
//
//	stable_sort(v.begin(), v.end(),com);
//
//	for (int i = 0; i < n; i++) {
//		cout << v[i].first << " " << v[i].second << "\n";
//	}
//
//	return 0;
//}

///*1181 단어 정렬*/
//
//bool com(const pair<string, int> p1, const pair<string, int> p2) {
//	if (p1.second == p2.second)
//		return p1.first < p2.first;
//	return p1.second < p2.second;
//}
//
//int main() {
//	vector< pair<string, int >>v;
//	
//	int n;
//	cin >> n;
//
//	string s;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		v.push_back(make_pair(s, s.length()));
//	}
//
//	sort(v.begin(), v.end(), com);
//	v.erase(unique(v.begin(), v.end()),v.end());
//
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i].first << "\n";
//	}
//
//	return 0;
//}

///*1427 소트 인사이트*/
//bool com(const int a, const int b) {
//	return a > b;
//}
//int main() {
//	long long int n;
//	vector<int>v;
//	cin >> n;
//	while (n > 0) {
//		v.push_back(n % 10);
//		n /= 10;
//	}
//	sort(v.begin(), v.end(),com);
//
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i];
//	}
//	return 0;
//}

///*1193번 분모찾기*/
//
//int main() {
//	int a = 1, b = 1;//a=분모 b=분자
//	int k = 1;
//	int x;
//	cin >> x;
//
//	while (1) {
//		if (a <= x && x <= b)
//		{
//			break;
//		}
//		a += k;
//		b += k + 1;
//		k++;
//	}
//	a += k - x;
//	b -= (x + k);
//	b *= -1;
//
//	if (k % 2 == 1) {
//		cout << a << "/" << b;
//	}
//	else {
//		cout << b << "/" << a;
//	}
//	return 0;
//
//}

///*단어의 개수*/
//
//int main() {
//	string s;
//	int n;
//	cin >> n;
//
//	int count = n;
//	for (int i = 0; i < n; i++) {
//		vector<char>ch;
//		int a=0;
//		cin >> s;
//		ch.push_back(s[0]);
//		for (int j = 1; j < s.length(); j++) {
//			for (int k = 0; k < ch.size(); k++) {
//				if (s[j] == ch[k]&& s[j] != s[j - 1]) {
//						a--;
//						break;
//				}								
//			}
//			ch.push_back(s[j]);
//		}
//		if (a < 0)
//			count--;
//		ch.clear();
//	}
//	cout << count;
//}

int main() {
    int n, m, a, k;

    cin >> n >> m >> a >> k;
    int max, min;
    if (n <= a - k)
        max = n;
    else
        max = a - k;
    min = (a - k) % m == 0 ? ((a - k) / m) + 1 : ((a - k) / m) + 2;

    cout << max << " " << min;
    return 0;
}