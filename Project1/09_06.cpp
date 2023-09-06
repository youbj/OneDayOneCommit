/*점프와 순간이동*/

//#include <iostream>
//
//using namespace std;
//
//int solution(int n) {
//	int answer = 0;
//	while (n!=0) {
//		answer += n % 2;
//		n /= 2;
//	}
//
//	return answer;
//}

/*리코쳇 로봇*/

//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//int start_x = -1, start_y = -1, end_x = -1, end_y = -1;
//int answer = 10001;
//int n, m;
//vector<vector<bool>>visited(100, vector<bool>(100, false));
//
//void bfs(vector<string> &maps) {
//    queue<pair<pair<int, int>, int>>que;
//
//    que.push({ { start_x, start_y },0 });
//    visited[start_x][start_y] = true;
//
//    while(!que.empty()) {
//        int x = que.front().first.first;
//        int y = que.front().first.second;
//        int disc = que.front().second;
//        que.pop();
//
//        if (x == end_x && y == end_y) {
//            answer = min(answer, disc);
//        }
//
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//
//            if (nx<0 || nx>=n || ny<0 || ny>=m || maps[nx][ny] == 'D') continue;
//
//            while (1) {
//                nx += dx[i];
//                ny += dy[i];
//
//                if (nx < 0 || nx >= n || ny < 0 || ny >= m || maps[nx][ny] == 'D') {
//                    nx -= dx[i];
//                    ny -= dy[i];
//                    break;
//                }
//            }
//
//            if (visited[nx][ny]) continue;
//
//            que.push({ {nx,ny}, disc + 1 });
//            visited[nx][ny] = true;
//        }
//    }
//}
//
//bool check(int x, int y, vector<string>maps) {
//    bool check = true;
//
//    for (int i = 0; i < 4; i++) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//
//        if (nx<0 || nx>=n || ny<0 || ny>=m|| maps[nx][ny] == 'D') {
//            check = false;
//            break;
//        }
//    }
//    return check;
//}
//
//
//int solution(vector<string> board) {
//    n = board.size();
//    m = board[0].length();
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (board[i][j] == 'R') {
//                start_x = i; 
//                start_y = j;
//            }
//            else if (board[i][j] == 'G'){
//                end_x=i;
//                end_y=j;
//                if (check(end_x, end_y, board))
//                    return -1;
//            }
//        }
//        if (start_x != -1 && end_x != -1)
//            break;
//    }
//    bfs(board);
//
//    return answer;
//}

/*프로세스*/
#include <iostream>

//#include <vector>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//int arr[9] = { 9,8,7,6,5,4,3,2,1 };
//
//int solution(vector<int> priorities, int location) {
//    int answer = 0;
//    int size = priorities.size();
//    queue<pair<int, int>>que;
//    
//    for (int i = 0; i < size; i++) {
//        que.push({ priorities[i],i });
//    }
//    
//    for (int i = 0; i < 9; i++) {
//        int k = 0;
//
//        while (k<size) {
//            pair<int, int>p(que.front());
//            que.pop();
//            if (p.first != arr[i]) {
//                que.push(p);
//            }
//            else {
//                ++answer;
//                if ( p.second ==location) {
//                    return answer;
//                }
//            }
//            ++k;
//        }
//    }
//    return answer;
//}

#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int size = priorities.size();
    queue<pair<int, int>> que;

    for (int i = 0; i < size; i++) {
        que.push({ priorities[i], i });
    }

    while (!que.empty()) {
        int currentPriority = que.front().first;
        int currentIndex = que.front().second;
        que.pop();

        bool highPriorityExists = false;

        // 높은 우선 순위가 있는지 확인
        queue<pair<int, int>> temp(que);  // 큐를 복사하여 임시로 사용
        while (!temp.empty()) {
            if (temp.front().first > currentPriority) {
                highPriorityExists = true;
                break;
            }
            temp.pop();
        }

        if (highPriorityExists) {
            // 높은 우선 순위가 있다면 다시 큐에 넣음
            que.push({ currentPriority, currentIndex });
        }
        else {
            // 높은 우선 순위가 없다면 실행
            answer++;
            if (currentIndex == location) {
                return answer;
            }
        }
    }

    return answer;
}



int main() {
    cout<<solution({ 3,3,4,2 }, 3);
}