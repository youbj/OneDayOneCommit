
/*백준 최소힙*/

//#include <iostream>
//#include <queue>
//#include <cstdio>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n;
//	int count = 0;
//	priority_queue<int,vector<int>,greater<int>> cont;
//	vector<int> answer;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		long long int x;
//		cin >> x;
//		if (x == 0) {
//			if (cont.empty())
//				answer.push_back(0);
//			else
//			{
//				answer.push_back(cont.top());
//				cont.pop();
//			}
//		}
//		else {
//			cont.push(x);			
//		}
//	}
//
//	for (int i = 0; i < answer.size(); i++) {
//		cout << answer[i] << "\n";
//	}
//	return 0;
//}

/*백준 최대힙*/

//#include <iostream>
//#include <queue>
//#include <functional>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n;
//	int count = 0;
//	priority_queue<int,vector<int>,less<int>> cont;
//	vector<int> answer;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		long long int x;
//		cin >> x;
//		if (x == 0) {
//			if (cont.empty())
//				answer.push_back(0);
//			else
//			{
//				answer.push_back(cont.top());
//				cont.pop();
//			}
//		}
//		else {
//			cont.push(x);			
//		}
//	}
//
//	for (int i = 0; i < answer.size(); i++) {
//		cout << answer[i] << "\n";
//	}
//	return 0;
//}

///*백준 가운데를 말해요*/
//
//#include <iostream>
//#include <queue>
//#include <cstdio>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int n,x;
//	priority_queue<int, vector <int>, greater<int>> numbers;
//	vector<int> answer;
//
//	cin >> n;
//	cin >> x;
//	numbers.push(x);
//	answer.push_back(x);
//	for (int i = 1; i < n; i++) {
//		cin >> x;
//		numbers.insert(make_pair(i, x));
//		int k = numbers[i];
//	}
//}

/*백준 큐 2*/

//#include <iostream>
//#include <queue>
//#include <string>
//#include <vector>
//using namespace std;
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	vector <int> answer;
//	queue <int> que;
//	
//	cin >> n;
//	cin.ignore();
//	for (int i = 0; i < n; i++) {
//		string com;
//		getline(cin, com);
//	
//		if (com[0] == 'f') {
//			if (!que.empty())
//				answer.push_back(que.front());
//			else
//				answer.push_back(-1);
//			
//		}
//		else if (com[0] == 'b') {
//			if (!que.empty())
//				answer.push_back(que.back());
//			else
//				answer.push_back(-1);
//		}
//		else if (com[0] == 'p') {
//			
//			if (com[1] == 'o'){
//					if (!que.empty()) {
//						answer.push_back(que.front());
//						que.pop();
//					}
//					else
//						answer.push_back(-1);
//			}
//			else {
//				int num = stoi(com.substr(5));
//				que.push(num);
//			}
//		}
//		else if (com[0] == 's')
//			answer.push_back(que.size());
//		else if (com[0] == 'e')
//		{
//			if (que.empty())
//				answer.push_back(1);
//			else
//				answer.push_back(0);
//		}
//		else return 0;
//	}
//
//	for (int i = 0; i < answer.size(); i++) {
//		cout << answer[i] << "\n";
//	}
//
//	return 0;
//}

/*백준 카드 2*/

//#include <iostream>
//#include <vector>
//#include <string>
//#include <queue>
//using namespace std;
//
//int main() {
//	int n,k;
//	cin >> n;
//	if (n == 1) {
//		cout << '1';
//		return 0;
//	}
//	queue<int> que;
//
//	for (int i = 1; i <= n; i++) {
//		if (i % 2 == 0) {
//			que.push(i);
//		}
//	}
//
//	if (n % 2 != 0) {
//		while (que.size() != 1) {
//			k = que.front();
//			que.pop();
//			que.push(k);
//			que.pop();
//		}
//	}
//	else {
//		while (que.size() != 1) {
//			que.pop();
//			k = que.front();
//			que.pop();
//			que.push(k);
//		}
//	}
//	cout << que.front();
//}

/*백준 문자열 집합*/

//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	map<string,int> test;
//	int answer = 0;
//
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		string str;
//		cin >> str;
//		test.insert(make_pair(str,0));
//	}
//	for (int i = 0; i < m; i++) {
//		string str;
//		cin >> str;
//		if (test.find(str) != test.end()) {
//			++test[str];
//		}
//	}
//
//	for (auto& k : test) {
//		answer += k.second;
//	}
//
//	cout << answer;
//}

/*백준 숫자 카드*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m;
	unordered_map<long long int, int> sg;
	vector<int>answer;
	cin >> n;

	for (int i = 0; i < n; i++) {
		long long int num;
		cin >> num;
		sg.insert(make_pair(num, 0));
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		long long int num;
		cin >> num;
		if (sg.find(num) != sg.end()) {
			answer.push_back(1);
		}
		else
			answer.push_back(0);
	}

	for (auto pair : answer) {
		cout << pair << " ";
	}
}