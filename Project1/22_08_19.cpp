#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//int main() {
//	int n;
//	cin >> n;
//	vector<int> arr;
//
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		if (a > 10000)
//			return 0;
//		arr.push_back(a);
//	}
//	sort(arr.begin(), arr.end());
//	int answer = arr.front() * n;
//
//	cout << answer;
//	return 0;
//}

///*1789 ������ ��*/
//
//int main() {
//	long long int n;
//	cin >> n;
//	int count = 0;
//	int i = 1;
//	while (n > 0) {
//		n -= i;
//		i += 1;
//		count++;
//	}
//	if (n == 0)
//		cout << count;
//	else
//		cout << count-1;
//}

///*10610 30�� ���*/
///*
//30 60 90 120 150 180 210 240 270 300
//*/
//bool com(int a, int b) {
//	if (a < b)
//		return a > b;
//}
//int main() {
//	long long int n;
//	cin >> n;
//	vector<int>v;
//	int a = n;
//	while (a > 0) {
//		v.push_back(a % 10);
//		a /= 10;
//	}
//
//	sort(v.begin(), v.end(),com);
//	if (v.back() != 0) {
//		cout << -1;
//		return 0;
//	}
//
//	a = v.size();
//}

///*1439 ���� ������*/
//
//int main() {
//	string s;
//	cin >> s;
//	int answer = 0;
//	for (int i = 0; i < s.length()-1; i++) {
//		if (s[i] != s[i + 1]) {
//			answer++;
//		}
//	}
//	if (answer % 2 == 0)
//		cout << answer / 2;
//	else
//		cout << (answer / 2) + 1;
//}

///*1715 ī�������ϱ�*/
///*
//1. ù�ٿ� n���� ī�� ������ ���� �־���
//2. �������� ī�幭���� 2������ ��� ��ħ -> ���� �ΰ��� ī�� ������ �ϳ��� ī�幭������ ó��
//3. �̶� ���ī�幭���� ���� ���Ͻÿ�
//*/
//bool comp(int a, int b) {
//	return a > b;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v;
//	for (int i = 0; i < n; i++) {
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	sort(v.begin(), v.end(), comp);
//	int min = v.back();
//	v.pop_back();
//
//	int com = 1001;
//	vector<int> arr;
//	vector<int>::iterator it = v.begin();
//
//	int k = v.size() - 1;
//	while (1) {
//		for (int i = 0; i < v.size(); i++) {
//			cout << v[i] << "  ";
//		}cout << endl;
//
//		if (min <= v[k]) {
//			min += v[k];
//			v.pop_back();
//			arr.push_back(min);
//		}
//		else {
//			int i;
//			if (v.front() < min) {
//				v.insert(v.begin(), min);
//			}
//			for (i = k ; i > -1; i--) {
//				if (min < v[i]) {
//					it = v.insert(it + i, min);
//				}
//			}
//			min = v.back();
//			v.pop_back();
//			k+=1;
//		}
//		k--;
//		if (k == -1)
//			break;
//	}
//
//	int answer = 0;
//	for (int i = 0; i < arr.size(); i++) {
//		answer += arr[i];
//	}
//	cout << answer;
//	return 0;
//
//}

