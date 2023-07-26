//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<vector<int>> board) {
//    int answer = 0;
//    int x = board.size();
//    int y = x;
//    vector<vector<int>> ans(x, vector<int>(y, 0));
//
//    for (int i = 0; i < x; i++) {
//        for (int j = 0; j < y; j++) {
//            if (board[i][j] == 1) {
//                if (i == 0) {
//                    if (j == 0) {
//                        ans[i + 1][j] = 1;
//                        ans[i][j + 1] = 1;
//                        ans[i + 1][j + 1] = 1;
//                    }
//                    else if (j == y - 1) {
//                        ans[i + 1][j] = 1;
//                        ans[i][j - 1] = 1;
//                        ans[i + 1][j - 1] = 1;
//                    }
//                    else {
//                        ans[i + 1][j] = 1;
//                        ans[i][j + 1] = 1;
//                        ans[i][j - 1] = 1;
//                        ans[i + 1][j + 1] = 1;
//                        ans[i + 1][j - 1] = 1;
//                    }
//                }
//                else if(i == x - 1) {
//                    if (j == 0) {
//                        ans[i - 1][j] = 1;
//                        ans[i][j + 1] = 1;
//                        ans[i - 1][j + 1] = 1;
//                    }
//                    else if (j == y - 1) {
//                        ans[i - 1][j] = 1;
//                        ans[i][j - 1] = 1;
//                        ans[i - 1][j - 1] = 1;
//                    }
//                    else {
//                        ans[i - 1][j] = 1;
//                        ans[i][j + 1] = 1;
//                        ans[i][j - 1] = 1;
//                        ans[i - 1][j + 1] = 1;
//                        ans[i - 1][j - 1] = 1;
//                    }
//                }
//                else {
//                    ans[i - 1][j] = 1;
//                    ans[i + 1][j] = 1;
//                    ans[i][j + 1] = 1;
//                    ans[i][j - 1] = 1;
//                    ans[i - 1][j + 1] = 1;
//                    ans[i - 1][j - 1] = 1;
//                    ans[i + 1][j + 1] = 1;
//                    ans[i + 1][j - 1] = 1;
//                }
//            }
//        }
//    }
//    for (int i = 0; i < x; i++) {
//        for (int j = 0; j < y; j++) {
//            if (ans[i][j] == 0) ++answer;
//        }
//    }
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <iostream>
//
//using namespace std;
//
//int solution(int k, int m, vector<int> score) {
//    int answer = 0;
//    priority_queue<int, vector<int>, less<>>que;
//    int size = (score.size() / m) * m;
//    
//    for (int i = 0; i < score.size(); i++) {
//        que.push(score[i]);
//    }
//    int count = 1;
//    vector<int>v;
//    for (int i = 0; i < size; i++) {
//        v.push_back(que.top());
//        que.pop();
//        if (v.size() == m) {
//            answer += (v.back() * m);
//            v.clear();
//        }
//    }
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <queue>
//#include <functional>
//using namespace std;
//
//vector<int> solution(int k, vector<int> score) {
//    vector<int> answer;
//    priority_queue<int, vector<int>, greater<>>que;
//
//    for (int i = 0; i < score.size(); i++) {
//        que.push(score[i]);
//        if (i >= k) {
//            que.pop();
//        }
//        answer.push_back(que.top());
//    }
//
//    return answer;
//}

//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n) {
//    int check = 0;
//    vector<bool> isPrime(n + 1, true); 
//
//    isPrime[0] = isPrime[1] = false; 
//
//    for (int i = 2; i * i <= n; i++) {
//        if (isPrime[i]) {
//            for (int j = i * i; j <= n; j += i) {
//                isPrime[j] = false;
//            }
//        }
//    }
//
//    for (int i = 2; i <= n; i++) {
//        if (!isPrime[i]) {
//            ++check;
//        }
//    }
//    return check;
//
//}



//#include <vector>
//#include <cmath>
//using namespace std;
//
//int calc_distance(vector<int>& v1, vector<int>& v2) {
//    int distance = sqrt(pow(v2[0] - v1[0], 2) + pow(v2[1] - v1[1], 2));
//    return distance;
//}
//
//int solution(vector<vector<int>> dots) {
//    int x = calc_distance(dots[0], dots[1]); 
//    int y = calc_distance(dots[1], dots[2]); 
//    return x * y;
//}