//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//    int answer = 0;
//    sort(people.begin(), people.end());
//
//    for (int i = people.size()-1; i >= 0; i--) {
//        int weight = people[i];
//        bool check = true;
//        if (weight == 0)
//            continue;
//
//        for (int j = i-1; j >= 0; j--) {
//            if (people[j] == 0)
//                continue;
//            if (weight + people[j] <= limit) {
//                people[j] = 0;
//                ++answer;
//                check = false;
//                break;
//            }    
//        }
//        if (check)
//            ++answer;
//    }
//
//    return answer;
//}
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//    int answer = 0;
//    sort(people.begin(), people.end());
//
//    int left = 0;  
//    int right = people.size() - 1; 
//
//    while (left <= right) {
//        if (people[left] + people[right] <= limit) {
//            left++;
//            right--;
//        }
//        else {  
//            right--;
//        }
//        answer++;
//    }
//
//    return answer;
//}

/*프로그래머스 대진표*/
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int check(int n) {
//    int count = 0;
//    if (n % 2 == 1)
//        ++n;
//    return n / 2;
//}
//
//int solution(int n, int a, int b)
//{
//    int answer = 1;
//
//    while (check(a) != check(b)) {
//        b = check(b);
//        a = check(a);
//        ++answer;
//    }
//
//    return answer;
//}

/*할인행사*/
//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//int solution(vector<string> want, vector<int> number, vector<string> discount) {
//    int answer = 0;
//    map<string, int> wants;
//    for (int i = 0; i < want.size(); i++) {
//        wants.insert({ want[i],number[i] });
//    }
//
//    for (int i = 0; i < discount.size()-10; i++) {
//        map<string, int>disc;
//
//        for (int j = i; j < i + 10; j++) {
//            if (disc.find(discount[j]) != disc.end()) {
//                ++disc[discount[j]];
//            }
//            else {
//                disc.insert({ discount[j],1 });
//            }
//        }
//
//        if (disc == wants)
//        {
//            answer = i+1;
//            break;
//        }
//    }
//
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <sstream>
//#include <unordered_map>
//using namespace std;
//
//vector<string> solution(vector<string> record) {
//    vector<string> answer;
//    vector <vector<string>>logs;
//    unordered_map<string, string>lg;
//
//    for (int i = 0; i < record.size(); i++) {
//        stringstream ss(record[i]);
//        string motion = "", id = "", nickname = "";
//
//        ss >> motion >> id >> nickname;
//
//        if (motion[i] = 'E') {
//            logs.push_back({ id,nickname,"들어왔습니다." });
//        }
//        else if (motion[i] = 'L') {
//            for (int j = 0; j < logs.size(); j++) {
//                if (logs[j][0] == id) {
//                    nickname = logs[j][1];
//                    break;
//                }
//            }
//            logs.push_back({ id,nickname,"나갔습니다." });
//        }
//        else {
//            for (int j = 0; j < logs.size(); j++) {
//                if (logs[j][0] == id) {
//                    logs[j][2] = nickname;
//                }
//            }
//        }
//    }
//
//    for (auto& log : logs) {
//        string s = log[1] + "님이 " + log[2];
//        answer.push_back(s);
//    }
//    return answer;
//}
//
//#include <iostream>
//
//int main() {
//    vector<string> v = solution({ "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" });
//
//    for (int i = 0; i < v.size(); i++) {
//        cout << v[i] << endl;
//    }
//}