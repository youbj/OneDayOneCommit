
///*백준 14499번*/
//
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { 1,-1,0,0 };
//int n, m, x, y, k;
//vector<int> dice(6, 0);
//
//int main() {
//	cin >> n >> m >> x >> y >> k;
//
//	vector<vector<int>>map;
//
//	for (int i = 0; i < n; i++) {
//		vector<int>sub_map;
//
//		for (int j = 0; j < m; j++) {
//			int num; cin >> num;
//			sub_map.push_back(num);
//		}
//		map.push_back(sub_map);
//	}
//
//	for (int i = 0; i < k; i++) {
//		int num; cin >> num;
//
//		int nx = x + dx[num];
//		int ny = y + dy[num];
//
//		if (nx < 0 || nx >= n || ny < 0 || ny >= m)
//			return;
//
//		switch (num) {
//		case 1: // 동쪽 y값 +1
//			int temp = dice[0];
//			dice[0] = dice[3];
//			dice[3] = dice[5];
//			dice[5] = dice[2];
//			dice[2] = temp;
//			break;
//		case 2: // 서쪽, y값 -1
//			int temp = dice[0];
//			dice[0] = dice[2];
//			dice[2] = dice[5];
//			dice[5] = dice[3];
//			break;
//			dice[3] = temp;
//		case 3: // 북쪽, x값 -1
//			int temp = dice[0];
//			dice[0] = dice[4];
//			dice[4] = dice[5];
//			dice[5] = dice[1];
//			dice[1] = temp;
//			break;
//		case 4: // 남쪽, x값 +1
//			int temp = dice[0];
//			dice[0] = dice[1];
//			dice[1] = dice[5];
//			dice[5] = dice[4];
//			dice[4] = temp;
//			break;
//		}
//
//		if (map[nx][ny] == 0) {
//			map[nx][ny] = dice[5];
//		}
//		else {
//			dice[5] = map[nx][ny];
//			map[nx][ny] = 0;
//		}
//
//		x = nx;
//		y = ny;
//	}
//}

/**/

#include <iostream>
#include <deque>
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

deque<int> que;

void pop(int check, deque<int>que){
	if (check) {
		que.pop_back();
	}
	else {
		que.pop_front();
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T; cin >> T;

	vector<string> answer(T);

	for (int i = 0; i < T; i++) {
		string command, array;		
		int n;

		cin >> command; 
		cin >> n; 
		cin >> array;

		array.erase(0, 1);
		array.erase(array.size() - 1, 1);

		istringstream intstr(array);

		int a;
		while (intstr >> a) {
			cout <<"1"<< a << endl;
			que.push_back(a);
		}
		int size = command.length();
		int check = 0;

		for (int j = 0; j < size; j++) {
			if (command[j] == 'R') {
				if (check == 0) check = 1;
				else check = 0;
			}
			else {
				if (que.empty()) {
					answer.push_back("error");
					break;
				}
				else
					pop(check, que);
			}
		}
		if (!que.empty()) {
			string str = "[";
			string token = ",";

			if (check == 0) {
				for (int k = 0; k < que.size()-1; k++) {
					str += to_string(que[k]) + token;
				}
				str += to_string(que.back()) + "]";
			}
			else {
				for (int k = que.size() - 1; k >= 0; k--) {
					str += to_string(que[k]) + token;
				}
				str += to_string(que.front()) + "]";
			}

			cout << str << endl;

			answer.push_back(str);
		}
		que.clear();
	}

	for (int i = 0; i < T; i++) {
		cout << answer[i] << "\n";
	}

}