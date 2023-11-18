//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int calc(string s) {
//	int answer = 0;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == '*') {
//			answer += stoi(string(1,s[i - 1]))* stoi(string(1, s[i + 1]));
//			answer -= stoi(string(1, s[i - 1]));
//			++i;
//		}
//		else {
//			if (s[i] == '+')
//				continue;
//			answer += stoi(string(1, s[i]));
//		}
//	}
//	return answer;
//}
//
//int take_cal(int n,int k) {
//	int answer=0;
//	string str = "";
//	for (k; k < n; k++) {
//		char c; cin >> c;
//		switch (c) {
//		case '(':
//			str += to_string(take_cal(n,k));
//			break;
//		case ')':
//			answer += calc(str);
//			return answer;	
//		default:
//			str.push_back(c);
//			break;
//
//		}
//	}
//	return answer;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	vector<int> ans;
//	for (int p = 0; p < 10; p++) {
//		int n; cin >> n;
//		int answer = 0;
//		string str = "";
//		for (int k=0; k < n; k++) {
//			char c; cin >> c;
//			switch (c) {
//			case '(':
//				str += to_string(take_cal(n,k));
//				break;
//			case ')':
//				answer += calc(str);
//				break;
//			default:
//				str.push_back(c);
//				break;
//
//			}
//		}
//		ans.push_back(answer);
//		cout << answer << endl;
//	}
//
//	for (int i = 0; i < 10; i++) {
//		cout << "#" << i + 1 << " " << ans[i] << endl;
//	}
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string str; cin >> str;
//	string answer = "";
//	for (int i = 0; i < str.length(); i++) {
//		answer += toupper(str[i]);
//	}
//	cout << answer;
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	int t; cin >> t;
//	vector<int>answer;
//	for (int i = 0; i < t; i++) {
//		int n; cin >> n;
//		answer.push_back(n / 3);
//	}
//
//	for (int i = 0; i < t; i++) {
//		cout << "#" << i + 1 << " " << answer[i] << "\n";
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	
//	vector<int>answer;
//	int t; cin >> t;
//	for (int i = 0; i < t; i++) {
//		long long int L, U, X;
//		cin >> L >> U >> X;
//		if (X > U) {
//			answer.push_back(-1);
//		}
//		else if (X < L) {
//			answer.push_back(L - X);
//		}
//		else {
//			answer.push_back(0);
//		}
//	}
//
//	for (int i = 0; i < t; i++) {
//		cout << "#" << i + 1 << " " << answer[i] << "\n";
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	vector<vector<int>>answer;
//	int arr[5] = { 2,3,5,7,11 };
//	int t; cin >> t;
//
//	for (int i = 0; i < t; i++) {
//		int n; cin >> n;
//		vector<int>counts;
//		int k = 0;
//		int count = 0;
//		while (n > 0) {
//			if (k == 5)
//				break;
//			if (n % arr[k]==0) {
//				n /= arr[k];
//				++count;
//			}
//			else {
//				++k;
//				counts.push_back(count);
//				count = 0;
//			}
//		}
//		answer.push_back(counts);
//	}
//
//	for (int i = 0; i < t; i++) {
//		cout << "#" << i + 1<<" ";
//		for (int j = 0; j < 5; j++) {
//			cout << answer[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	return 0;
//}




//#include <iostream>
//#include <vector>
//
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	vector<int>answer;
//	int t; cin >> t;
//	for (int i = 0; i < t; i++) {
//		int x; cin >> x;
//		int ans = 0;
//		vector<int> costs;
//		int d1, d2;
//		cin >> d1;
//
//		for (int j = 1; j < x; j++) {
//			cin >> d2;
//			int div = d2 - d1;
//
//			if (div > 0) {
//				if (!costs.empty()) {
//					costs.push_back(div + costs.back());
//				}
//				else
//					costs.push_back(div);
//			}
//			else
//			{
//				if (!costs.empty()) {
//					if (div - costs.back() > 0) {
//						costs.push_back(div - costs.back());
//					}
//				}
//				else
//					costs.push_back(div);
//			}
//			d1 = d2;
//		}
//		if (costs.back() <= 0) {
//			answer.push_back(0);
//		}
//		else
//			answer.push_back(costs.back());
//	}
//	
//	for (int i = 0; i < t; i++) {
//		cout << "#" << i + 1 << " " << answer[i] << "\n";
//	}
//	return 0;
//}