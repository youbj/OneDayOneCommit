//#include <string>
//#include <vector>
//
//vector<vector<int>> arr;
//
//using namespace std;
//
//int arr_change(pair<int, int> x, pair<int, int> y, vector<vector<int>> arr) {
//    int x_ch[4] = { 1,-1,0,0 };
//    int y_ch[4] = { 0,0,1,-1 };
//    int buf;
//
//
//
//}
//
//vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
//    vector<int> answer;    
//    int a = 0;
//    for (int i = 0; i < rows * columns; i++) {
//        if (a % rows == 0)
//            ++a;
//        arr[a].push_back(i + 1);
//    }
//
//    for (int i = 0; i < queries.size(); i++) {
//        pair<int, int> x = { queries[i][0],queries[i][2] };
//        pair<int, int> y = { queries[i][1],queries[i][3] };
//
//
//
//    }
//    return answer;
//}

//#include <iostream>
//#include <vector>
//#include <map>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//bool sort_condition(pair<int, int>a, pair<int, int>b) {
//	if (a.second == b.second)
//		return a.first > b.first;
//	return a.second > b.second;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	vector<int>answer;
//	int T; cin >> T;
//	for (int i = 0; i < T; i++) {
//		map<int, int>m;
//		vector<pair<int, int>> buf;
//		for (int j = 0; j < 1000; j++) {
//			int score; cin >> score;
//			
//			if (m.find(score) != m.end()) {
//				++m[score];
//			}
//			else {
//				m.insert({ score,1 });
//			}
//		}
//
//		for (auto& k : m) {
//			buf.push_back(k);
//		}
//		sort(buf.begin(), buf.end(), sort_condition);
//		answer.push_back(buf[0].first);
//		m.clear();
//		buf.clear();
//	}
//
//	for (int i = 1; i <= T; i++) {
//		cout << "#" << i << " " << answer[i] << "\n";
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    int n; cin >> n;
//    for (int i = 1; i <= n; i++) {
//        string s = to_string(i);
//        bool check = false;
//        for (int j = 0; j < s.length(); j++) {
//            if (s[j] == '3' || s[j] == '6' || s[j] == '9') {
//                check = true;
//                s[j] = '-';
//            }
//        }
//        if (check) {
//            string st = "";
//            for (auto k : s) {
//                st.push_back('-');
//            }
//            if (st != s)
//                s = "-";
//        }
//        cout << s << " ";
//    }
//
//
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int check_sdocu(vector<int> v) {
//	bool arr[10] = { 1, };
//	for (int i = 0; i < 9; i++) {
//		arr[v[i]] = false;
//	}
//	for (int i = 1; i <= 9; i++) {
//		if (arr[i] == true)
//			return 1;
//	}
//	return 0;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	int T; cin >> T;
//
//	for (int i = 0; i < T; i++) {
//		vector<vector<int>>arr;
//		int check = 1;
//		for (int y = 0; y < 9; y++) {			
//			for (int x = 0; x < 9; x++) {
//				int a; cin >> a;
//				arr[y][x] = a;
//			}
//			if (check_sdocu(arr[y])) {
//				check = 0;
//				break;
//			}
//		}
//
//		if (check) {
//			for (int j = 0; j < 9; j++) {
//				vector<int>v;
//				for (int k = 0; k < 9; k++) {
//					v.push_back(arr[j][j]);
//				}
//				if (check_sdocu(v)) {
//					check = 0;
//					break;
//				}
//			}
//
//			if (check) {
//
//			}
//		}
//
//	}
//}
