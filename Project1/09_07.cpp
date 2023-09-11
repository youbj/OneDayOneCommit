//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <queue>
//using namespace std;
//
//string check(int sum,int s) {
//	while (1) {
//		if (sum > s)
//			return "NO";
//		if (sum == s)
//			return "YES";
//		sum += 2;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	vector<string>answer;
//
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b, s; cin >> a >> b >> s;
//		int sum = abs(a) + abs(b);
//		if (sum == s)
//			answer.push_back("YES");
//		else if (sum > s)
//			answer.push_back("NO");
//		else
//			answer.push_back(check(sum, s));
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << answer[i] << "\n";
//	}
//	return 0;
//}

/*n진수 게임*/

//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<string>numbers = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
//int count = 0;
//
//string change_number(int n,int m,int p) {
//    int k = 1;
//    while(1) {
//        int num = k;
//        string str = "";
//        while (num > 0) {
//            str = to_string(num % n)+str;
//            num /= n;
//        }
//
//    }
//}
//
//string solution(int n, int t, int m, int p) {
//    string answer = "";
//    int k = 1;
//    while (1) {
//        answer+=change_number(k,m,p);
//        if (answer.length() >= t) {
//            answer.substr(0, t);
//            break;
//        }
//    }
//    return answer;
//}

