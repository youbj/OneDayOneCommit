#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>

using namespace std;
int serch(vector<int>& v1, int k) {
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] == k)
            return i;
    }
    return -1;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    map<string, vector<int>>m;
    vector<pair<int, int>>ans;

    for (int i = 0; i < genres.size(); i++) {
        if (m.find(genres[i]) != m.end()) {
            m[genres[i]].push_back(plays[i]);
        }
        else {
            m.insert(make_pair(genres[i], vector<int>{plays[i]}));
        }
        ans.push_back(make_pair(plays[i], i));
    }
    vector<vector<int>>buf;

    for (auto& pair : m) {
        cout << "\nstring: " << pair.first << "\nint :  ";
        sort(pair.second.rbegin(), pair.second.rend());
        int count = 0;
        vector<int>buf_a;
        for (int i = 0; i < pair.second.size(); i++) {
            cout << pair.second[i] << "  ";
            buf_a.push_back(pair.second[i]);
            ++count;
            if (count == 2)
                break;
        }
        buf.push_back(buf_a);
    }
    cout << endl;
    sort(buf.rbegin(), buf.rend());

    for (int i = 0; i < buf.size(); i++) {
        for (auto k : buf[i]) {
            cout << k << "  ";
            for (int j = 0; j < ans.size(); j++) {
                if (ans[i].first == k) {
                    if (!answer.empty() && serch(answer, k) != -1) { 
                        continue; 
                    }
                    else {
                        cout << ans[i].second << endl;
                        answer.push_back(ans[i].second);
                    }
                }
                    
            }
        }
            
        cout << endl;
    }
    return answer;
}

int main() {
    vector<int>v;
    v = solution({ "classic", "pop", "classic", "classic", "pop" }, { 500, 2500, 800 , 800, 2500 });
    cout << "\n123\n";
    for (int i = 0; i < v.size(); i++) {
        cout <<"1" << v[i];
    }
}

//vector<int> solution(vector<string> genres, vector<int> plays) {
//    vector<int> answer;
//
//    vector<pair<int, string>>gen;
//    vector<pair<int, int>>play;
//    map<string, vector<int>>m;
//    map<string, vector<int>>m1;
//
//    for (int i = 0; i < genres.size(); i++) {
//        gen.push_back(make_pair(i, genres[i]));
//        play.push_back(make_pair(i, plays[i]));
//
//        if (m.find(genres[i]) != m.end()) {
//             m[genres[i]].push_back(plays[i]);
//        }
//        else {
//             m.insert(make_pair(genres[i], plays[i]));
//        }
//    }
//    sort(play.rbegin(), play.rend());
//
//
//    
//    return answer;
//}