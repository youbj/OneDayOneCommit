#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/**/
///*2822 점수 계산*/
//
//bool com(const pair<int, int>a, const pair<int, int>b) {
//	return a.first > b.first;
//}
//
//int main() {
//	vector<pair<int, int>>v;
//	for (int i = 0; i < 8; i++) {
//		int a;
//		cin >> a;
//		v.push_back(make_pair(a, i + 1));
//	}
//	sort(v.begin(), v.end(),com);
//
//	int sum = 0;
//	vector<int>a;
//
//	for (int i = 0; i < 5; i++) {
//		sum += v[i].first;
//		a.push_back(v[i].second);
//	}
//	sort(a.begin(), a.end());
//
//	cout << sum << "\n";
//	for (int i = 0; i < 5; i++)
//		cout << a[i] << " ";
//}

///*10825 국영수*/
//
//class Sub {
//public:
//	int kor,eng,math;
//	string name;
//};
//
//bool com(Sub a, Sub b) {
//	if (a.kor == b.kor) {
//		if (a.eng == b.eng) {
//			if (a.math == b.math) {
//				return a.name < b.name;
//			}
//			else 
//				return a.math > b.math;
//		}
//		else 
//			return a.eng < b.eng;
//	}
//	else
//		return a.kor > b.kor;
//}
//
//int main() {
//	cin.tie(NULL); cout.tie(NULL);
//
//	int n;
//	cin >> n;
//	vector < Sub>v1(n);
//
//	for (int i = 0; i < n; i++) {
//		cin >> v1[i].name >> v1[i].kor >> v1[i].eng >> v1[i].math;
//	}
//	sort(v1.begin(), v1.end(), com);
//
//	for (int i = 0; i < n; i++) {
//		cout << v1[i].name <<  "\n";
//	}
//}

///* - 10867 중복빼고 정렬하기*/
//
//#include <set>
//int main() {
//    cin.tie(NULL); cout.tie(NULL);
//    int n;
//    cin >> n;
//
//    set<int>s;
//    for (int i = 0; i < n; i++) {
//        int a; cin >> a;
//        s.insert(a);
//    }
//
//    for (auto c : s) {
//        cout << c << " ";
//    }
//}

///*11652 카드*/
//
//#include <map>
//
//int main() {
//	map<long long int, int>mp;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		long long int a;
//		cin >> a;
//		++mp[a];
//	}	
//	int max = 0;
//	long long int answer ;
//
//	for (auto c : mp) {
//		if (c.second > max) {
//			max = c.second;
//			answer = c.first;
//		}
//	}
//	cout << answer;
//}


