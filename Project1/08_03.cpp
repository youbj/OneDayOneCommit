//
///*주차요금 계산*/
//
//#include <string>
//#include <vector>
//#include <iostream>
//#include <map>
//using namespace std;
//
//vector<int> solution(vector<int> fees, vector<string> records) {
//    vector<int> answer;
//    vector<pair<string, pair<int,int>>>m;
//    vector<bool>check;
//
//    int basic_time = fees[0];
//    int basic_fee = fees[1];
//    int plus_time = fees[2];
//    int plus_fee = fees[3];
//
//    for (int i = 0; i < records.size(); i++) {
//        string car_number = records[i].substr(6, 4);
//        int hour= stoi(records[i].substr(0,2));
//        int minute = stoi(records[i].substr(3,2));
//        cout<<records[i][11] << "  h: " << hour << "  m:  " << minute << endl;
//        if (records[i][11] == 'I') {
//            m.push_back(make_pair(car_number, make_pair(hour, minute)));
//            check.push_back(true);
//        }
//        else {
//            for (int j = m.size() - 1; j >= 0; j--) {
//                if (m[j].first == car_number) {
//                    check[j] = false;
//                    m[j].second.first = hour - m[j].second.first;
//                    m[j].second.second = minute - m[j].second.second;
//                    if (m[j].second.second < 0) {
//                        m[j].second.second += 60;
//                        --m[j].second.first;
//                    }
//                    break;
//                }
//            }
//        }
//    }
//    map<string, int>fee;
//
//    for (int i = 0; i < m.size(); i++) {
//        if (check[i]) {
//            m[i].second.first = 23 - m[i].second.first;
//            m[i].second.second = 59 - m[i].second.second;
//        }
//        
//        int sum_time = (m[i].second.first * 60 + m[i].second.second);
//
//        if (fee.find(m[i].first) != fee.end()) {
//            fee[m[i].first] += sum_time;
//        }
//        else {
//            fee.insert(make_pair(m[i].first, sum_time));
//        }
//
//    }
//    for (auto& pair : fee) {
//        cout << pair.first << "  " << pair.second << endl;
//        int fee = basic_fee;
//        if (pair.second > basic_time) {
//            pair.second -= basic_time;
//            int buf = pair.second / plus_time;
//            
//            if (pair.second % plus_time != 0)
//                ++buf;
//
//            fee += (buf * plus_fee);
//        }
//        answer.push_back(fee);
//    }
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(int n, vector<int> money) {
//    int answer = 0;
//    long long int dp[100001] = { 0 };
//    dp[0] = 1;
//
//    for (int coin : money) {
//        for (int i = coin; i <= n; i++) {
//            dp[i] += dp[i - coin];
//        }
//    }
//
//    answer = dp[n] / 1000000007;
//
//    return answer;
//}

#include <vector>

using namespace std;

int solution(int n) {
    vector<int> coins = { 1, 2, 5, 10, 20, 50, 100, 500 };
    int dp[100001] = { 0 };
    dp[0] = 1;

    for (int coin : coins) {
        for (int i = coin; i <= n; i++) {
            dp[i] += dp[i - coin];
        }
    }

    return dp[n];
}

#include <iostream>
int main() {
    int n = 5;
    int answer = solution(n);
    cout << "거스름돈 지불 방법의 수: " << answer << endl;
    return 0;
}