#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <set>
using namespace std;

///*+1343 �������̳�*/
//int main() {
//	cin.tie(NULL); cout.tie(NULL);
//
//	string s;
//	cin >> s;
//
//	istringstream str(s);
//	char sep = '.';
//	string str_buf;
//
//	string answer="";
//
//	while (getline(str, str_buf, sep)) {
//
//		if (str_buf == "") {
//			answer += ".";
//			continue;
//		}
//
//		if (str_buf.length() % 2 == 0) {
//			int a = str_buf.length();
//			for (int i = 0; i < (a / 4); i++) {
//				answer+= "AAAA";				
//			}a %= 4;
//			for (int i = 0; i < (a / 2); i++) {
//				answer += "BB";
//			}
//			answer += ".";
//		}
//		else {
//			cout << -1;
//			return 0;
//		}
//	}
//	if (answer.length() != s.length()) {
//		answer = answer.substr(0, answer.length() - 1);
//	}
//
//	cout << answer;
//
//
//}

///*-18310 ���׳�*/
//
//int main() {
//	cin.tie(NULL); cout.tie(NULL);
//	int n;
//	cin >> n;
//
//	int answer = 0;
//	int min_m=100001;
//	int min = 0;
//	vector<int>v;
//
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		answer += a;
//		v.push_back(a);
//	}
//	answer /= n;
//	
//	for (int i = 0; i < n; i++) {
//		int a = v[i] - answer;
//		if (a < 0)
//			a *= -1;
//
//		if (a < min_m) {
//			min_m = a;
//			min = v[i];
//		}
//	}
//	cout << min;
//}

///*+92378 ����� �ʴ�*/
///*
//1. ���� 1���� �ɴµ� �ɸ��� �ð��� 1��
//2. ������ �ڶ�µ� �ɸ��� �ð��� t�� �־���
//3. ������ ������ ���� 1������ ��� ���� ������ 1�� ��
//*/
//bool com(int a, int b)
//{
//	return a > b;
//}
//int main() {
//	cin.tie(NULL); cout.tie(NULL);
//	vector<int> v;
//	int n;
//	cin >> n;
//	int max=0;
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		a += 1;
//		v.push_back(a);
//	}
//	sort(v.begin(), v.end(), com);
//	for (int i = 0; i < n; i++) {
//		int a = v[i] + i + 1;
//		if (max < a)
//			max = a;
//	}
//	cout << max;
//}

///*25304 ������*/
//
//int main() {
//	cin.tie(NULL);
//	int sum; cin >> sum;
//	int n; cin >> n;
//	string answer;
//	for (int i = 0; i < n; i++) {
//		int a, b; cin >> a >> b;
//		sum -= (a * b);
//		if (sum < 0)
//			break;
//	}
//	if (sum == 0) answer = "Yes";
//	else answer = "No";
//	cout << answer;
//}

///*-13023 ABCDE*/
///* 
//1. �� n���� ģ���� ���� m�� �־�����.
//2. �� ��  5���� ģ���� 4���� ���迡�� ����Ǿ�� �Ѵ� ex) a->b b->c c->d d->e 
//
//pair�� �̿��Ͽ� ����ϸ� �ɰ��̴�.
//*/
//
//int main() {
//	vector<pair<int, int>>vp;
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		vp.push_back(make_pair(a, b));
//	}
//	sort(vp.begin(), vp.end());
//
//	int fir;
//
//	for (int i = 0; i < m-4; i++) {
//		pair<int, int>comp = vp[i];
//		for (int j = i + 1; j < m; j++) {
//			
//		}
//	}
//}

///*+1929 �Ҽ� ���ϱ�*/
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//
//	vector<bool>v(m + 1);
//	v[0] = true;
//	v[1] = true;
//	for (int i = 2; i <= m; i++) {
//		if (v[i])
//			continue;
//		for (int j = 2; j*i <= m; j++)
//			v[i*j] = true;
//	}
//
//	for (int i = n; i <= m; i++) {
//		if (!v[i])
//			cout << i << "\n";
//	}
//}

///*11656 ���̻� �迭*/
//
//int main() {
//	string s;
//	cin >> s;
//	vector<string>str;
//	str.push_back(s);
//	for (int i = 1; i < s.length(); i++) {
//		string st = s.substr(s.length() - i);
//		str.push_back(st);
//	}
//	sort(str.begin(), str.end());
//
//	for (int i = 0;i<str.size();i++) {
//		cout << str[i] << "\n";
//	}
//}