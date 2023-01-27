//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	cin.tie(0); cout.tie(0);
//
//	int n;
//	cin >> n;
//
//	vector<string> strv;
//	for (int i = 0; i < n; i++) {
//		strv.push_back("YES");
//	}
//
//	for (int i = 0; i < n; i++) {
//		string str;
//		cin >> str;
//		int length = str.length();
//		if (length == 1) continue;
//		length  /= 2 + 1;
//		int j = 1;
//		while (length != 0&&length-j>=0) {
//			if (str[length - j] - str[length + j] != 1) {
//				strv[i] = "NO";
//				length = 0;
//			}
//			else
//				++j;
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << strv[i] << "\n";
//	}
//}