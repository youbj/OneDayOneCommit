//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> citations) {
//	int answer = 0;
//	sort(citations.begin(), citations.end());
//	vector<pair<int, int>>pa;
//	int size = citations.size();
//	for (int i = 0; i < size; i++) {
//		pa.push_back(make_pair(citations[i], size - i));
//	}
//
//}

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int count(char a) {
//	switch (a) {
//	case '0':
//		return 1;
//	case '@':
//		return 2;
//	default:
//		return 0;
//	}
//}
//
//int solution(vector<vector<char>>map, vector<pair<int,int>>boom) {
//	int max = map.size();
//	vector<vector<int>>count_map(max, vector<int>(max, 0));
//	int size = boom.size();
//
//	for (int i = 0; i < size; i++) {
//		int x = boom[i].first;
//		int y = boom[i].second;
//		if (x != 1 && x != max) {
//			if (y != 1 && y != max) {
//				count_map[x - 1][y - 1] += count(map[x - 1][y - 1]);
//				count_map[x][y - 1] += count(map[x][y - 1]);
//				count_map[x - 2][y - 1] += count(map[x - 2][y - 1]);
//				count_map[x - 1][y - 2] += count(map[x - 1][y - 2]);
//				count_map[x - 1][y] += count(map[x - 1][y]);
//			}
//			else if (y == 1) {
//				count_map[x - 1][y - 1] += count(map[x - 1][y - 1]);
//				count_map[x][y - 1] += count(map[x][y - 1]);
//				count_map[x - 2][y - 1] += count(map[x - 2][y - 1]);
//				count_map[x - 1][y] += count(map[x - 1][y]);
//			}
//			else {
//				count_map[x - 1][y - 1] += count(map[x - 1][y - 1]);
//				count_map[x][y - 1] += count(map[x][y - 1]);
//				count_map[x - 2][y - 1] += count(map[x - 2][y - 1]);
//				count_map[x - 1][y - 2] += count(map[x - 1][y - 2]);
//			}
//		}
//		else if (x == 1) {
//			if (y != 1 && y != max) {
//				count_map[x - 1][y - 1] += count(map[x - 1][y - 1]);
//				count_map[x - 1][y - 2] += count(map[x - 1][y - 2]);
//				count_map[x - 1][y] += count(map[x - 1][y]);
//				count_map[x][y - 1] += count(map[x][y - 1]);
//			}
//			else if (y == 1) {
//				count_map[x - 1][y - 1] += count(map[x - 1][y - 1]);
//				count_map[x][y - 1] += count(map[x][y - 1]);
//				count_map[x - 1][y] += count(map[x - 1][y]);
//			}
//			else {
//				count_map[x - 1][y - 1] += count(map[x - 1][y - 1]);
//				count_map[x - 1][y - 2] += count(map[x - 1][y - 2]);
//				count_map[x][y - 1] += count(map[x][y - 1]);
//			}
//		}
//		else {
//			if (y != 1 && y != max) {
//				count_map[x - 1][y - 1] += count(map[x - 1][y - 1]);
//				count_map[x - 1][y - 2] += count(map[x - 1][y - 2]);
//				count_map[x - 1][y] += count(map[x - 1][y]);
//				count_map[x - 2][y - 1] += count(map[x - 2][y - 1]);
//			}
//			else if (y == 1) {
//				count_map[x - 1][y - 1] += count(map[x - 1][y - 1]);
//				count_map[x - 2][y - 1] += count(map[x - 2][y - 1]);
//				count_map[x - 1][y] += count(map[x - 1][y]);
//			}
//			else {
//				count_map[x - 1][y - 1] += count(map[x - 1][y - 1]);
//				count_map[x - 2][y - 1] += count(map[x - 2][y - 1]);
//				count_map[x - 1][y - 2] += count(map[x - 1][y - 2]);
//			}
//		}
//	}
//	int count = -1;
//	for (int i = 0; i < max; i++) {
//		for (int j = 0; j < max; j++) {
//			if (count_map[i][j] > count)
//				count = count_map[i][j];
//		}
//	}
//	return count;
//}
//
//int main() {
//	int n, k;
//	vector<vector<char>>map;
//	vector<pair<int, int>>boom;
//	cin >> n >> k;
//
//	for (int i = 0; i < n; i++) {
//		vector<char>buf;
//		for (int j = 0; j < n; j++) {
//			char a; cin >> a;
//			buf.push_back(a);
//		}
//		map.push_back(buf);
//	}
//	for (int i = 0; i < k; i++) {
//		int a, b;
//		cin >> a >> b;
//		boom.push_back(make_pair(a, b));
//	}
//	
//	cout << solution(map, boom);
//	return 0;
//}

//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//int count_X(int& x_count, int y_count, char x, vector<vector<bool>>&is_first) {
//    if (x_count < 0 || x_count>10)
//        return 0;
//
//    if (x == 'D') {
//        --x_count;
//    }
//    else {
//        ++x_count;
//    }
//    if (is_first[x_count][y_count] == true)
//        return 0;
//    is_first[x_count][y_count] = true;
//    return 1;
//}
//int count_Y(int x_count, int& y_count, char x, vector<vector<bool>>&is_first) {
//    if (y_count < 0 || y_count>10 )
//        return 0;
//
//    if (x == 'L') {
//        --y_count;
//        
//    }
//    else {
//        ++y_count;
//    }
//
//    if (is_first[x_count][y_count] == true)
//        return 0;
//
//    is_first[x_count][y_count] = true;
//    return 1;
//}
//int solution(string dirs) {
//    int answer = 0;
//    int x_count = 5;
//    int y_count = 5;
//    vector<vector<bool>>is_first(11, vector<bool>(11, false));
//
//    for (int i = 0; i < dirs.length(); i++) {
//        switch (dirs[i]) {
//        case 'U':
//            answer += count_X(x_count, y_count,dirs[i], is_first);
//            cout <<i << "  x_count: " << x_count << "  y_count: " << y_count << endl;
//            break;
//        case 'D':
//            answer += count_X(x_count, y_count,dirs[i], is_first);
//            cout << i << "  x_count: " << x_count << "  y_count: " << y_count << endl;
//            break;
//        case 'L':
//            answer += count_Y(x_count, y_count, dirs[i], is_first);
//            cout << i << "  x_count: " << x_count << "  y_count: " << y_count << endl;
//            break;
//        case 'R':
//            answer += count_Y(x_count, y_count, dirs[i], is_first);
//            cout << i << "  x_count: " << x_count << "  y_count: " << y_count << endl;
//            break;
//        }
//    }
//    return answer;
//}
//
//
//int main() {
//    cout << solution("ULURRDLLU");
//}