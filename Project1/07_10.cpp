//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	int n; cin >> n;
//	vector<vector<char>> keyboard = { {' '},{'1','.',',','?','!'}, {'2','A','B','C'},{'3','D','E','F'},
//									  {'4','G','H','I'},{'5','J','K','L'},{'6','M','N','O'},
//									  {'7','P','Q','R','S'},{'8','T','U','V'},{'9','W','X','Y','Z'}};
//	vector<pair<char, int>>pair;
//	string answer = "";
//	int k = 0;
//	string str; cin >> str;
//	if (str.length() != n) return 0;
//
//	for (int i = 0; i < n; i++) {
//		if (pair.empty()) {
//			pair.push_back(make_pair(str[i], 0));
//		}
//		else {
//			if (str[i] == pair[k].first) {
//				++pair[k].second;
//			}
//			else {
//				pair.push_back(make_pair(str[i], 0));
//				++k;
//			}
//		}
//	}
//	for (auto& check : pair) {
//		if (check.first == '1' || check.first == '7' || check.first == '9') {
//			answer.push_back(keyboard[(check.first-'0')][check.second % 5]);
//		}
//		else {
//			answer.push_back( keyboard[(check.first - '0')][check.second % 4]);
//		}
//	}
//
//	cout << answer;
//
//	return 0;
//}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string answer[2] = { "YES","NO" };


	int n, m, k; cin >> n >> m >> k;
	vector<int>bridge(n,0);
	vector<int, vector<int>>island(n, vector<int>(n, 0));

	for (int i = 0; i < m; i++) {
		int a, b; 
		cin >> a >> b;
		island[a][b] = 1;

	}
	return 0;
}