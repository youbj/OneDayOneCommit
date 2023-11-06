#include <iostream>
//
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//string solution(string input_string) {
//    string answer = "";
//    string ans = "";
//    pair<char, int>check = { input_string[0],1 };
//
//    for (int i = 1; i < input_string.length(); i++) {
//
//        if (ans.find(string(1, check.first)) != string::npos) {
//            answer.push_back(check.first);
//            check = { input_string[i],1 };
//            continue;
//        }
//
//        if (input_string[i] == check.first) {
//            ++check.second;
//        }
//        else {
//            if (check.second > 1) {
//                if (ans.find(string(1,check.first))!=string::npos) {
//                    answer.push_back(check.first);
//                }
//                else {
//                    ans.push_back(check.first);
//                }
//            }
//            else {
//                answer.push_back(check.first);
//            }
//            check = { input_string[i],1 };
//        }
//    }
//    string is = input_string;
//    sort(is.begin(), is.end());
//    is.erase(unique(is.begin(), is.end()), is.end());
//
//    if (answer == "" || input_string.length() == is.length())
//        return "N";
//    if (check.second == 1)
//        answer.push_back(check.first);
//
//    sort(answer.begin(), answer.end());
//    answer.erase(unique(answer.begin(), answer.end()), answer.end());
//
//    return answer;
//}
//
//
//int main() {
//    cout << solution("string");
//}

///*카카오 오픈채팅방*/
//
//#include <string>
//#include <vector>
//#include <map>
//#include <sstream>
//using namespace std;
//
//vector<string> solution(vector<string> record) {
//    vector<string> answer;
//    vector<pair<string, string>>v;
//    map<string, string>m;
//
//    for (int i = 0; i < record.size(); i++) {
//        stringstream ss(record[i]);
//        string action="", id="", nickname="";
//        ss >> action >> id >> nickname;
//        switch (action[0]) {
//        case 'E':
//            v.push_back({ id,"님이 들어왔습니다." });
//            m.insert({ id,nickname });
//            if (m.find(id) != m.end()) {
//                m[id] = nickname;
//            }
//            break;
//        case 'L':
//            v.push_back({ id,"님이 나갔습니다." });
//            break;
//
//        case 'C':
//            m[id] = nickname;
//            break;
//        }
//    }
//
//    for (auto& pair : v) {
//        string s = "";
//        s = m[pair.first] + pair.second;
//        answer.push_back(s);
//    }
//    return answer;
//}
