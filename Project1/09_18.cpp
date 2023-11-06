#include <iostream>

//#include <string>
//#include <vector>
//#include <queue>
//#include <functional>
//using namespace std;
//
//vector<bool>visited;
//vector<vector<int>>graph;
//vector<int>path;
//vector<int>ans;
//
//
//void dfs(int x ) {
//    visited[x] = true;
//    path.push_back(x);
//
//    if (x == 1) {
//        ans.push_back(path.size());
//    }
//    
//    for (int node : graph[x]) {
//        if (!visited[node]) {
//            dfs(node);
//        }
//    }
//    path.pop_back();
//    visited[x] = false;
//}
//
//int solution(int n, vector<vector<int>> edge) {
//    int answer = 0;
//    visited.resize(n+1, false);
//    graph.resize(n + 1);
//
//    for (auto &pair : edge) {
//        int x = pair[0];
//        int y = pair[1];
//        graph[x].push_back(y);
//    }
//    dfs(1);
//    for (auto a : ans)
//        cout << a << "  ";
//
//    return answer;
//}
//
//int main() {
//    solution(6, { {3, 6}, {4, 3}, {3, 2}, {1, 3}, {1, 2}, {2, 4}, {5, 2} });
//}


//#include <string>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//
//
//string solution(string p) {
//    string answer = "";
//    string str = "";
//    int count = 0;
//    for (int i = 0; i < p.length(); i++) {
//        if (p[i] == '(') {
//            ++count;
//        }
//        else {
//            --count;
//        }
//
//        str.push_back(p[i]);
//        if (count == 0) {
//            if (str[0] == '(') {
//                answer += str;
//            }
//            else {
//                reverse(str.begin(), str.end());
//                answer += str;
//            }
//            str = "";
//        }
//    }
//    return answer;
//}
