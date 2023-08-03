//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//long long solution(int n, vector<long long> times) {
//    // 이분탐색을 위해 시간 배열을 정렬
//    sort(times.begin(), times.end());
//
//    long long answer = 0;
//    long long left = 1; // 최소 시간은 1로 초기화
//    long long right = times.back() * static_cast<long long>(n); // 최대 시간은 가장 오래 걸리는 심사관이 n명을 심사할 경우
//
//    while (left <= right) {
//        long long mid = (left + right) / 2;
//        long long total = 0;
//
//        // mid 시간 동안 각 심사관이 심사할 수 있는 사람 수를 계산하여 총합을 구함
//        for (int i = 0; i < times.size(); i++) {
//            total += mid / times[i];
//        }
//
//        // 심사한 사람 수가 n명보다 작다면, 더 많은 시간이 필요하므로 left를 늘림
//        if (total < n) {
//            left = mid + 1;
//        }
//        // 심사한 사람 수가 n명보다 크다면, 더 적은 시간이 필요하므로 right를 줄임
//        else {
//            answer = mid;
//            right = mid - 1;
//        }
//    }
//
//    return answer;
//}

///*2023 현대모비스 알고리즘 경진대회 - 상담원 연결*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(int k, int n, vector<vector<int>> reqs) {
//    int answer = 0;
//    vector<vector<pair<int,int>>>vec(k + 1);
//    for (auto &k:reqs) {
//        vec[k[2]].push_back(make_pair(k[0], k[1]));
//    }
//    vector<int>wait_time(k + 1,0);
//
//    for (int i = 1; i <= k; i++) {
//        vector<pair<int, int>>pair(vec[i]);
//        int max = pair[0].first + pair[0].second;
//        for (int j = 1; j < pair.size(); j++) {
//            if (pair[j].first < max) {
//                wait_time[i] += max - pair[j].first;
//                max += pair[j].second;
//            }
//        }
//
//
//    }
//
//    return answer;
//}

///*주차요금 계산*/
//
//#include <string>
//#include <vector>
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//vector<int> solution(vector<int> fees, vector<string> records) {
//    vector<int> answer;
//    vector<pair<string, pair<int,int>>>m;
//    int basic_time = fees[0];
//    int basic_fee = fees[1];
//    int plus_time = fees[2];
//    int plus_fee = fees[3];
//
//    for (int i = 0; i < records.size(); i++) {
//        cout << "1\n";
//        string car_number = records[i].substr(6, 4);
//        cout << "2\n";
//        int hour= stoi(records[i].substr(0,2));
//        cout << "3\n";
//        int minute = stoi(records[i].substr(3,2));
//        cout << "4\n";
//
//        if (records[i][11] == 'I') {
//            m.push_back(make_pair(car_number, make_pair(hour, minute)));
//        }
//        else {
//
//        }
//        if (m.find(car_number) != m.end()) {
//            m[car_number].first = hour - m[car_number].first;
//            m[car_number].second = minute - m[car_number].second;
//        }
//        else
//            m.insert(make_pair(car_number, make_pair(hour, minute)));
//    }
//
//    for (auto& pair : m) {
//        int time = pair.second.second + (pair.second.first * 60);
//        int fee = basic_fee;
//        if (time > basic_time) {
//            time -= basic_time;
//            int buf = time / plus_time;
//            
//            if (time % plus_time != 0)
//                ++buf;
//
//            fee += (buf * plus_fee);
//        }
//        answer.push_back(fee);
//    }
//    return answer;
//}
//
//int main() {
//    vector<int>v;
//    v = solution({ 180, 5000, 10, 600 }, { "05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT", "07:59 5961 OUT", "07:59 0148 IN", "18:59 0000 IN", "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT" });
//    for (int i = 0; i < v.size(); i++) {
//        cout << v[i] << endl;
//    }
//}