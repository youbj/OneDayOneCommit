#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

//int main() {
//	long long int a, b, v;
//	long long int answer=1;
//
//	cin >> a >> b >> v;
//
//	v -= a;
//	if (v  < a - b|| v % (a - b) != 0) {
//		answer += 1;
//	}
//	answer += v / (a - b);
//	cout << answer;
//	return 0;
//}

///*10872 팩토리얼*/
//
//int fac(int a) {
//	if (a == 1)
//		return a;
//	
//	return a*fac(a - 1);
//}
//
//int main() {
//	int a;
//	cin >> a;
//	if (a < 1)
//		a = 1;
//	cout << fac(a);
//}

///*10870 피보나치*/
//
//int fibo(int a) {
//	
//	if (a == 1)
//		return 1;
//	else if (a == 2)
//		return 1;
//	else 
//		return fibo(a - 1) + fibo(a - 2);
//
//}
//int main()
//{
//	int a;
//	cin >> a;
//	if (a == 0) {
//		cout << 0;
//		return 0;
//	}
//	cout << fibo(a);
//
//}

///*10828 스택*/
//
//int main() {
//	int n;
//	vector<int>v;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		string s;
//		int a;
//		getline(cin,s);
//
//		if (s == "top") {
//
//		}
//		else if (s == "pop") {
//
//		}
//		else if (s == "size") {
//
//		}
//		else if (s == "empty") {
//			if (v.empty() != 0) {
//
//			}
//		}
//		else {
//			stringstream ss(s);
//			ss >> a;
//
//		}
//	}
//}
