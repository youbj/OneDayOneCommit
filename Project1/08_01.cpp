///*임국심사*/
//
//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <functional>
//#include <map>
//using namespace std;
//
//long long solution(int n, vector<int> times) {
//    long long answer = 0;
//    int num = 1;
//    priority_queue<long long int, vector<long long int>, greater<>>que;
//
//
//    for (int i = 0; i < times.size(); i++) {
//        que.push(times[i]);
//    }
//    while (1) {
//        if (que.size() >= n)
//            break;
//
//    }
//    sort(times.begin(), times.end());
//    int count = 2;
//    while (num <= n) {
//        cout << que.top() << endl;
//        que.push(que.top() * count);
//        que.pop();
//        ++num;
//    }
//
//    return que.top();
//}
//
//int main() {
//    cout << solution(6, { 7,10 });
//}


///*정수 삼각형*/
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<vector<int>> triangle) {
//    int n = triangle.size();
//
//    vector<vector<int>> dp(n, vector<int>(n, 0));
//    dp[0][0] = triangle[0][0];
//
//    for (int i = 1; i < n; i++) {
//        for (int j = 0; j <= i; j++) {
//            if (j == 0) {
//                dp[i][j] = dp[i - 1][j] + triangle[i][j];
//            }
//            else if (j == i) {
//                dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
//            }
//            else {
//                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
//            }
//        }
//    }
//
//    int answer = 0;
//    for (int num : dp[n - 1]) {
//        answer = max(answer, num);
//    }
//
//    return answer;
//}