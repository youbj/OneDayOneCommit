//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int solution(int num, int n) {
//	string answer=to_string(num);
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		char max = '0';
//		for (int j = count; j < answer.length(); j++) {
//			if (max <= answer[j]) {
//				max = j;
//			}
//		}
//		char swap=answer[count];
//		answer[count] = answer[max];
//		answer[max] = swap;
//		++count;
//		cout << i + 1 << "  " << answer << endl;
//	}
//	return stoi(answer);
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//
//	int t; cin >> t;
//	for (int i = 1; i <= t; i++) {
//		int num,n; cin >> num>>n;
//
//		cout << "#" << t << " " << solution(num,n) << "\n";
//	}
//}

//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	char vt[4] = { 'r','d','l','u' };
//	int t; cin >> t;
//
//	for (int t_start = 1; t_start <= t; t_start++) {
//		int n; cin >> n;
//		int cnt = 0;
//		vector<vector<int>>arr(n, vector<int>(n, 0));
//		int start_x = 0, start_y = 0, end_x = n-1, end_y = n-1;
//		int k = 1;
//		while (k<=n*n) {
//			switch (vt[cnt]) {
//			case 'r':
//				for (int i = start_x; i <= end_x; i++) {
//					arr[start_y][i] = k;
//					++k;
//				}
//				++start_y;
//				break;
//			case 'd':
//				for (int i = start_y; i <= end_y; i++) {
//					arr[i][end_x] = k;
//					++k;
//				}
//				++end_x;
//				break;
//			case 'l':
//				for (int i = end_x; i >= start_x; i--) {
//					arr[start_y][i] = k;
//					++k;
//				}
//				++end_y;
//				break;
//			case 'u':
//				for (int i = end_y; i >= start_y; i--) {
//					arr[i][start_x] = k;
//					++k;
//				}
//				++start_x;
//				break;
//			}
//			cnt = (cnt + 1) % 4;
//		}
//		cout << "#" << t_start << "\n";
//		for (int i = 0; i < n; i++) {
//			
//		}
//	}
//}