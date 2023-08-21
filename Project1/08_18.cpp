//#include <string>
//#include <vector>
//#include <stack>
//using namespace std;
//
//vector<int> solution(vector<int> numbers) {
//    vector<int> answer(numbers.size(), -1); // 기본값으로 -1로 초기화된 결과 벡터
//    stack<int> s; // 스택 생성
//
//    for (int i = 0; i < numbers.size(); i++) {
//        while (!s.empty() && numbers[s.top()] < numbers[i]) {
//            answer[s.top()] = numbers[i]; // 스택의 top에 있는 값보다 큰 수를 찾으면 결과에 저장
//            s.pop(); // top의 값을 제거하고 다음 숫자 검사
//        }
//        s.push(i); // 현재 인덱스를 스택에 삽입
//    }
//
//    return answer;
//}

///* 점 찍기 */
//#include <string>
//#include <vector>
//#include <cmath>
//using namespace std;
//
///*풀이-1 시간 초과*/
//long long solution(int k, int d) {
//    long long answer = 0;
//    long long dis = 1LL * d * d;
//
//    for (int i = 0; i <= d; i += k) {
//        for (int j = 0; j <= d; j += k) {
//            if (i == 0 || j == 0) {
//                ++answer;
//            }
//            else{
//                if ((1LL * i * i) + (1LL * j * j) <= dis)
//                    ++answer;
//            }
//        }
//    }
//
//    return answer;
//}
//
//long long solution(int k, int d)
//{
//    long long answer = d / k + 1;
//    for (long long i = 0; i < d; i += k)
//        answer += (long long)sqrt(1LL * d * d - i * i) / k;
//    return answer;
//}

/*귤 고르기*/

//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//bool condition(pair<int, int>a, pair<int, int>b) {
//    return a.second > b.second;
//}
//
//int solution(int k, vector<int> tangerine) {
//    int answer = 0;
//    vector<pair<int, int>>v;
//
//    for (int i = 0; i < tangerine.size(); i++) {
//        if (v.empty())
//            v.push_back(make_pair(tangerine[i], 1));
//        else {
//            bool check = true;
//            for (int j = 0; j < v.size(); j++) {
//                if (v[j].first == tangerine[i]) {
//                    ++v[j].second;
//                    check = false;
//                    break;
//                }
//            }
//            if (check)
//                v.push_back(make_pair(tangerine[i], 1));
//        }
//    }
//    sort(v.begin(), v.end(), condition);
//    int sum = 0;
//
//    for (auto& rbd : v) {
//        sum += rbd.second;
//        ++answer;
//        if (sum >= k)
//            return answer;
//    }
//
//}


/*과제 진행하기 - 못품*/
//#include <string>
//#include <vector>
//#include <queue>
//#include<algorithm>
//#include <sstream>
//using namespace std;
//
//bool condition(vector<string>s1, vector<string> s2) {
//    return s1[1] < s2[1];
//}
//bool condition2(pair<string,int>s1, pair<string,int> s2) {
//    return s1.second < s2.second;
//}
//
//vector<string> solution(vector<vector<string>> plans) {
//    vector<string> answer;
//    vector<pair<string,int>>ready_que;
//    sort(plans.begin(), plans.end(), condition);
//    int hour;
//    int minute;
//
//    minute = stoi(plans[0][1].substr(3, 2))+stoi(plans[0][2]);
//    hour = stoi(plans[0][1].substr(0, 2)) + minute / 60;
//    minute %= 60;
//    string subject = plans[0][0];
//    int time = hour * 100 + minute;
//
//    for (int i = 1; i < plans.size(); i++) {
//        int next_minute = stoi(plans[i][1].substr(3, 2));
//        int next_hour = stoi(plans[i][1].substr(0, 2));
//        int next_time = next_time * 100 + next_minute;
//
//        if (time > next_time) {
//            ready_que.push_back(make_pair(plans[i][0],time-next_time));
//        }
//        else {
//            answer.push_back(subject);
//            subject = plans[i][0];
//            next_minute+= stoi(plans[i][2]);
//            time = next_hour + next_minute / 60;
//            minute = next_minute % 60;
//        }
//    }
//
//    sort(ready_que.begin(), ready_que.end(), condition2);
//
//    for(auto &au:ready_que) {
//        answer.push_back(au.first);
//    }
//        
//    return answer;
//}