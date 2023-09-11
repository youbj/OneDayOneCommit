#include <iostream>

/*n진수 만들기*/

//#include <string>
//#include <vector>
//
//using namespace std;
//
//string number = "0123456789ABCDEF";
//
//string change_number(int k, int n) {
//    string str = "";
//    if (k == 0)
//        str += "0";
//    while (k > 0) {
//        str = string(1,number[k % n])+str;
//        k /= n;
//    }
//    return str;
//}
//
//string solution(int n, int t, int m, int p) {
//    string answer = "";
//    string ans = "0";
//
//    for (int i = 1; ans.size() < t * m; i++) {
//        ans += change_number(i, n);
//    }
//
//    for (int i = p - 1; i < t * m; i += m) {
//        answer += ans[i];
//    }
//
//    return answer;
//}


/*튜플*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <unordered_set>
//#include <sstream>
//#include <queue>
//using namespace std;
//
//bool condition(string s1, string s2) {
//    return s1.length() < s2.length();
//}
//
//vector<int> solution(string s) {
//    vector<int> answer;
//    vector<string>str;
//    string buf = "";
//    for (int i = 1; i < s.length() - 2; i++) {
//        if (s[i] == '}' || s[i] == '{') {
//            if (s[i] == '}')
//                str.push_back(buf);
//            buf = "";
//        }
//        else {
//            buf.push_back(s[i]);
//        }
//    }
//    if (buf != "")
//        str.push_back(buf);
//    sort(str.begin(), str.end(), condition);
//
//    unordered_set<int> sets;
//    queue<int>que;
//
//    for (auto k : str) {
//        stringstream ss(k);
//        string s;
//        while (getline(ss, s, ',')) {
//            int n = stoi(s);
//            if (sets.find(n) == sets.end()) {
//                que.push(n);
//                sets.insert(n);
//            }
//        }   
//    }
//
//    while (!que.empty()) {
//        cout << que.front() << "  ";
//        answer.push_back(que.front());
//        que.pop();
//    }
//
//    return answer;
//}
//
//int main() {
//    solution("{{1,2,3},{2,1},{1,2,4,3},{2}}");
//}

#include <string>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

vector<bool>visited;
vector<vector<int>>graph;
vector<int>path;
priority_queue<int, vector<int>, greater<>>path_count;


void dfs(int x ) {
    visited[x] = true;
    path.push_back(x);

    if (x == 1) {
        cout << path.size()<<endl;
        path_count.push(path.size());
    }
    
    for (int node : graph[x]) {
        if (!visited[node]) {
            dfs(node);
        }
    }
    path.pop_back();
    visited[x] = false;
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    visited.resize(n+1, false);
    graph.resize(n + 1);

    for (auto &pair : edge) {
        int x = pair[0];
        int y = pair[1];
        graph[x].push_back(y);
    }
    dfs(1);
    int long_path = path_count.top();
    path_count.pop();
    answer++;
    while (!path_count.empty()) {
        cout << path_count.top()<<endl;
        path_count.pop();

        /*if (path_count.top() == long_path)
            ++answer;
        else
            break;*/
    }

    return answer;
}

int main() {
    cout<<solution(6, { {3, 6}, {4, 3}, {3, 2}, {1, 3}, {1, 2}, {2, 4}, {5, 2} });
}