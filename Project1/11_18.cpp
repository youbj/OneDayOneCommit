//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	int t; cin >> t;
//	vector<int>answer;
//
//	for (int i = 0; i < t; i++) {
//		int day; cin >> day;
//		vector<pair<int,int>>costs;
//		int max = -1;
//
//		for (int j = 0; j < day; j++) {
//			int cost; cin >> cost;			
//			costs.push_back({ cost,0 });
//			if (max > cost)
//				continue;
//			else max = cost;
//			for (int k = 0; k < costs.size() - 1; k++) {
//				if (costs[k].second < cost - costs[k].first) {
//					costs[k].second = cost - costs[k].first;
//				}
//			}
//		}
//		int ans = 0;
//		for (auto& pair : costs) {
//			ans += pair.second;
//		}
//
//		answer.push_back(ans);
//	}
//
//	for (int i = 0; i < t; i++) {
//		cout << "#" << i + 1 << " " << answer[i] << "\n";
//	}
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	int t; cin >> t;
//	vector<int>answer;
//
//	for (int i = 0; i < t; i++) {
//		int day; cin >> day;
//		vector<long long int>costs;
//		for (int day_cost = 0; day_cost < day; day_cost++) {
//			int cost; cin >> cost;
//			costs.push_back(cost);
//		}
//
//		int max = costs.back();
//		int next_day = max;
//		long long int ans = 0;
//		for (int day_cost = day - 2; day_cost >= 0; day_cost--) {
//			if (max < costs[day_cost]) {
//				max = costs[day_cost];
//				continue;
//			}
//			else {
//				ans += (max - costs[day_cost]);
//			}
//		}
//		answer.push_back(ans);
//
//	}
//
//	for (int i = 0; i < t; i++) {
//		cout << "#" << i + 1 << " " << answer[i] << "\n";
//	}
//	return 0;
//}

///*up,down,right,left*/
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>>answer;
//
//void draw_arr(int n) {
//	vector<vector<int>>arr(n+1, vector<int>(n+1, 0));
//	char check[4] = { 'r','d','l','u' };
//	int cnt_x = 0;
//	int cnt_y = 0;
//	int count = 1;
//	while (1) {
//		switch (check[cnt_x % 4]) {
//		case 'r':
//			
//			break;
//		case 'd':
//			break;
//		case 'l':
//			break;
//		case 'u':
//			break;
//		}
//	}
//	for (int i = 1; i <= n * n; i++) {
//		if(arr[i][i]!=0||)
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	
//	int t; cin >> t;
//	for (int i = 0; i < t; i++) {
//		int N; cin >> N;
//		draw_arr(N);
//		
//
//	}
//
//	for (int i = 0; i < t; i++) {
//		cout << "#" << i + 1 << " " << answer[i] << "\n";
//	}
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//bool cond(pair<int, int>a, pair<int, int>b) {
//	if (a.second == b.second)
//		return a.first > b.first;
//	return a.second > b.second;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	int t; cin >> t;
//	vector<pair<int,int>>answer;
//
//	for (int i = 0; i < t; i++) {
//		int count; cin >> count;
//		map<int, int>m;
//		
//		for (int j = 0; j < 1000; j++) {
//			int score; cin >> score;
//			if (!m.empty()&&m.find(score) != m.end()) {
//				++m[score];
//			}
//			else {
//				m.insert({ score,1 });
//			}
//		}
//		vector<pair<int, int>>ans;
//		for (auto& pair : m) {
//			ans.push_back(pair);
//		}
//		sort(ans.begin(), ans.end(), cond);
//
//		answer.push_back({ count,ans.front().first });
//	}
//
//	for (int i = 0; i < t; i++) {
//		cout << "#" << answer[i].first << " " << answer[i].second << "\n";
//	}
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<string>arr,int n) {
//	int cnt = 0;
//	int mid = n / 2;
//	int answer = 0;
//	cout << "mid: " << mid << "\n";
//	for (int i = 0; i < n; i++) {
//		if (i <= mid) {
//			for (int j = mid - cnt; j <= mid + cnt; j++) {
//				answer += stoi(string(1,arr[i][j]));
//			}
//			cnt+=1;
//		}
//		else {
//			cnt -= 1;
//			for (int j = mid - cnt; j <= mid + cnt; j++) {
//				answer += stoi(string(1, arr[i][j]));
//			}
//		}
//		if (i == mid) cnt-=1;
//
//	}
//	return answer;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	
//	vector<int>answer;
//	int t; cin >> t;
//	for (int i = 0; i < t; i++) {	
//		int n; cin >> n;
//		vector<string>arr;
//		for (int j = 0; j < n; j++) {
//			string num; cin >> num;
//			arr.push_back(num);		
//		}
//		answer.push_back(solution(arr, n));
//	}
//
//	for (int i = 0; i < t; i++) {
//		cout << "#" << i + 1 << " " << answer[i] << "\n";
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	int t; cin >> t;
//	for (int i = 1; i <= t; i++) {
//		int answer = 0;
//		string str; cin >> str;
//		char ch = '0';
//		for (int j = 0; j < str.length(); j++) {
//			if (ch != str[j]) {
//				++answer;
//				ch = str[j];
//			}
//		}
//
//		cout << "#" << i << " " << answer;
//	}
//
//	return 0;
//}

