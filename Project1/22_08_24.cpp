#include <iostream>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

///*10816 ���� �����ϱ�*/
///*
//1. ����̰� �������ִ� ī�� ������ �����Է¹���
//2. ������ �Ǵ� ī���� ������ �����Է¹���
//3. ����̰� �������ִ� ī���� ��� ������ �Ǵ� ī�忡 ���ϴ��� ��
//
//�ذ��
//1. �ߺ��� �Ǵ� ī�带 ����� 
//*/
//
//int main() {
//	int n, m;
//	vector<int>vn;
//	vector<pair<int,int>>vm;
//	vector < pair<int, pair<int, int>>>vp;
//	vector<int>::iterator it;
//
//	cin >> n;
//	int a;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		vn.push_back(a);
//	}
//	sort(vn.begin(), vn.end());
//
//	cin >> m;
//
//	for (int i = 0; i < m; i++) {
//		int count = 0;
//		cin >> a;
//
//		if (vn[n / 2] <= a) {
//			for (int j = n/2; j < n; j++) {
//				if (a == vn[j]) {
//					count++;
//				}
//			}
//		}
//		else {
//			for (int j = 0; j < n / 2; j++) {
//				if (a == vn[j]) {
//					count++;
//				}
//			}
//		}
//		vm.push_back(make_pair(a,count));
//	}
//
//	for (int i = 0; i < m; i++) {
//		cout << vm[i].second << " ";
//	}
//
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	map<int, int>mp;
//	int n, m;
//	cin >> n;
//
//	int a;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		++mp[a];
//	}
//
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> a;
//		cout << mp[a] << " ";
//	}
//}

///*1764 �躸��*/
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	map<string, int>mp;
//	int n, m;
//	cin >> n >> m;
//	int count=0;
//	for (int i = 0; i < n; i++) {
//		string s;
//		cin >> s;
//		++mp[s];
//	}
//	for (int i = 0; i < m; i++) {
//		string s;
//		cin >> s;
//		++mp[s];
//		if (mp[s] == 2) {
//			++count;
//		}
//	}
//	cout << count << "\n";
//	for (auto a: mp) {
//		if (a.second == 2)
//			cout << a.first << "\n";
//	}
//}

///*-11728 �迭��ġ��*/
//
//int main() {
//
//	int m, n;
//	cin >> n >> m;
//	map<int, int>mp;
//	for (int i = 0; i < n; i++) {
//		long long int a;
//		cin >> a;
//		++mp[a];
//	}
//	for (int i = 0; i < m; i++) {
//		long long int a;
//		cin >> a;
//		++mp[a];
//	}
//
//	for (auto c:mp) {
//		for (int i = 0; i < c.second; i++) {
//			cout << c.first << " ";
//		}
//	}
//}

///*14916 �Ž��� ��*/
//
//int main() {
//	int n;
//	cin >> n;
//	if (n >= 5) {
//		if (n % 5 == 0)
//		{
//			cout << n / 5;
//			return 0;
//		}
//		for (int i = n / 5; i >= 0; i--) {
//			for (int j = 1; j <= n - (5 * i); j++) {
//				if (n == (5 * i) + (2 * j)) {
//					cout << i + j;
//					return 0;
//				}
//			}
//		}
//	}
//	else {
//		if(n%2==0)
//		{
//			cout << n / 2;
//			return 0;
//		}
//	}
//	cout << -1;
//	return 0;
//}

///*-16953 A->B*/
//
//int main() {
//	int a, b;
//	cin >> a >> b;
//	int count = 1;
//
//	int n = a;
//
//	if (b < n || b % 10>2) {
//		cout << -1;
//		return 0;
//	}
//
//	while (1) {
//		if (b % 10 == 1) {
//			++count;
//			b = (b - 1) / 10;
//		}
//		else if (b % 10 == 2) {
//			++count;
//			b /= 2;
//		}
//		else
//			break;
//	}
//
//
//
//	while (n <= b) {
//		if (n != b) {
//			n *= 2;
//			++count;
//		}
//		else {
//			if (count == 1)
//				++count;
//			cout << count;
//			return 0;
//		}
//	}
//		
//	cout << -1;
//	return 0;
//}

///*1744 �� ����*/
//
//int main() {
//	int n;
//	int sum = 0, ssum = 0;
//	vector<int>v;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;		
//		sum += a;
//		v.push_back(a);
//	}
//	sort(v.begin(), v.end());
//	for (int i = v.size()%2==0?0:1; i < n; i += 2) {
//		if (v[i] <= 0) {
//			if(v[0]<0&&v)
//			if (v[i] < 0 && v[i + 1] < 0) {
//				ssum += (v[i] * v[i + 1]);
//
//			}
//			else
//				ssum += v[i] + v[i + 1];
//			continue;
//		}
//		ssum += (v[i] * v[i + 1]);
//
//	}//sum�Ǵ� ssum�� 0�ϰ��,������ ���
//	if (sum > ssum)
//		cout << sum;
//	else
//		cout << ssum;
//	
//	return 0;
//
//}