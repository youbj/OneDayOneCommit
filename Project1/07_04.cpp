#include <iostream>


/*백준 문자열 폭발*/

//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main() {	
//	string st, s;
//	cin >> st;
//	cin >> s;
//
//	while (st.find(s) < st.size()) {
//		st = st.substr(0, st.find(s)) + st.substr(st.find(s) + s.size() );
//	}
//	if (st == "")
//		st = "FRULA";
//	cout << st;
//}

///*프로그래머스 개인정보 수집 유효기간*/
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
//    vector<int> answer;
//    
//    int year, month, day;
//    
//    year = stoi(today.substr(0, 4));
//    month = stoi(today.substr(5, 6));
//    day = stoi(today.substr(8, 9));
//
//    for (int i = 0; i < terms.size(); i++) {
//        
//    }
//
//    return answer;
//}


/*백준 회사에 있는 사람*/

//#include <iostream>
//#include <string>
//#include <sstream>
//#include <set>
//
//using namespace std;
//
//int main() {
//	set <string> in_com;
//	
//	long long int n;
//	cin >> n;
//	cin.ignore();
//	for (int i = 0; i < n; i++) {
//		string str,st1,st2;
//
//		getline(cin, str);
//		istringstream ss(str);
//
//		ss >> st1 >> st2;
//
//		if (st2[0] == 'e') {
//			in_com.insert(st1);
//		}
//		else {
//			in_com.erase(st1);
//		}
//	}
//	
//
//	for (auto it = in_com.rbegin(); it != in_com.rend();++it) {
//		cout << *it << "\n";
//	}
//}

/*백준 1620번*/

//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main() {
//	map <string, int> name;
//	map <int, string> number;
//	vector<string> answer;
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		string str;
//		cin >> str;
//		name.insert(make_pair(str,i+1));
//		number.insert(make_pair(i+1,str));
//	}
//
//	for (int i = 0; i < m; i++) {
//		string str;
//		cin >> str;
//
//		if (str[0] > '0' && str[0] <= '9') {
//			answer.push_back(number[stoi(str)]);
//		}
//		else {
//			answer.push_back(to_string(name[str]));
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		cout << answer[i] << "\n";
//	}
//}