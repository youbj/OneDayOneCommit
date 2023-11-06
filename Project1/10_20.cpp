/*등차수열 만들기*/

//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main(int argc, char** argv) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	int n; cin >> n;
//	vector<double> answer;
//
//	for (int i = 0; i < n; i++) {
//		double x, y, z;
//		cin >> x >> y >> z;
//		double mid = (x + z) / 2;
//
//		double check = abs(mid - y);
//
//		double d = y - x;
//
//		if (d != 0 && d < check) {
//			printf("%0.1f\n", d);
//		}
//		else
//			printf("%0.1f\n", check);
//	}
//	
//	return 0;
//}

//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool sort_condition(pair<int, int>a, pair<int, int>b) {
//	if (a.first == b.first)
//		return a.second > b.second;
//	return a.first > b.first;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	int n; cin >> n;
//	
//	vector<pair<int, int>>answer;
//
//	for (int i = 0; i < n; i++) {
//		vector<pair<int, int>>buf;
//		map<int, int>m;
//		int num; cin >> num;
//
//		for(int j=0;j<1000;j++){
//			int a; cin >> a;
//			if (m.empty() != 0 && m.find(a) != m.end()) {
//				++m[a];
//			}
//			else {
//				m.insert(make_pair(a, 1));
//			}
//		}
//		for (auto& k:m) {
//			buf.push_back(make_pair(k.second, k.first));
//		}
//		sort(buf.begin(), buf.end(),sort_condition);
//
//		answer.push_back(make_pair(num, buf.front().second));
//	}
//	cout << "=============\n";
//	for (int i = 0; i < n; i++) {
//		cout << "#" << answer[i].first << " " << answer[i].second << "\n";
//	}
//	return 0;
//}