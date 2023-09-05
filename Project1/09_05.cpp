//#include<vector>
//#include <string>
//#include <queue>
//#include <deque>
//using namespace std;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,-1,1 };
//
//int bfs(int x, int y, vector<vector<int> > maps) {
//    queue<pair<int, int>>que;
//    que.push({x, y});
//    while (!que.empty()) {
//        int x = que.front().first;
//        int y = que.front().second;
//        que.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//
//            if (nx < 0 || nx >= maps.size() || ny < 0 || ny >= maps[0].size()) continue;
//
//            if (maps[nx][ny] == 0)continue;
//
//            if (maps[nx][ny] == 1) {
//                maps[nx][ny] = maps[x][y]+1;
//                que.push({ nx,ny });
//            }
//        }
//    }
//    return maps[maps.size() - 1][maps[0].size() - 1];
//}
//
//int solution(vector<vector<int> > maps)
//{
//    int answer = bfs(0, 0, maps);
//    if (answer == 1)answer = -1;
//    
//    return answer;
//}

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
bool cond(pair<string, int>a, pair<string, int>b) {
    return a.second < b.second;
}
vector<int> solution(string msg) {
    vector<int> answer;
    map<string, int>dict;
    string c = "A";
    int n = 1;
    for (n; n<=26; n++) {
        dict.insert({ c,n });
        c[0]++;
    }

    int check=0;
    string str(1,msg[0]);

    for (int i = 1; i < msg.length(); i++) {
        string s(1,msg[i]);
        cout << "str: " << str << "  s: " << s << endl;
        if (dict.find(str + s) != dict.end()) {
            str += s;
            cout << "ã��:  " << str << endl;
            //answer.push_back(dict[str]);
        }
        else {
            cout << "�Է�:  " << dict[str] << endl;
            answer.push_back(dict[str]);       
            dict.insert({str+s,n});
            ++n; str = s;
            
        }
    }
     answer.push_back(dict[str]);

    vector<pair<string,int>>v;
    for (auto& pa : dict) {
        v.push_back(make_pair(pa.first, pa.second));
    }
    sort(v.begin(), v.end(), cond);

    for (auto& pa : v) {
        cout << pa.first << "  |  " << pa.second << endl;
    }
    return answer;
}

int main() {
    
    vector<int>v(solution("TOBEORNOTTOBEORTOBEORNOT"));

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}