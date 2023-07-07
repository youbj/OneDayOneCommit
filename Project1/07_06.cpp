///*프로그래머스 택배 배달과 수거하기*/
//
///*
//1. 거리  i,j 
//2. 트럭에 최대 용량 cap
//3. 각 집마다 배달할 재활용 택배 상자의 개수와 수거할 개수를 알 때, 최소거리
//
//*/
//#include <iostream>
//
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
//    long long answer = -1;
//    int scan_deliver = n - 1;
//    int scan_pickup = n - 1;
//
//    int check_cap=0;
//    for (int i = scan_pickup; i > -1; i--) {
//        if (check_cap + pickups[i] <= cap) {
//            check_cap += pickups[i];
//        }
//        else {
//
//        }
//    }
//    return answer;
//}


/*프로그래머스 개인정보 수집 유효기간*/

//#include <string>
//#include <vector>
//#include <sstream>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
//    vector<int> answer;
//
//    for (int i = 0; i < privacies.size(); i++) {
//        char check = privacies[i][11];
//        string day = privacies[i].substr(0, 10);
//        int s = 0;
//
//        for (int j = 0; j < terms.size(); j++) {
//            if (terms[j][0] == check) {
//                s = stoi(terms[j].substr(2));
//                cout<<"s: " << s << endl;
//                break;
//            }
//        }
//        int t_month = stoi(day.substr(5, 2)) + s;
//        int t_year = stoi(day.substr(0, 4));
//        cout << "month, year: " << t_month << "   " << t_year << endl;
//        if (t_month > 12) {
//            t_year += (t_month / 12);
//            t_month %= 12;               
//        }
//        if (t_month == 0) {
//            t_month = 12;
//            --t_year;
//        }
//        string month = to_string(t_month);
//        string year = to_string(t_year);
//
//        cout << month << "  " << year<<endl;
//
//        if (month.length() != 2)
//            month = '0' + month;
//        day[5] = month[0];
//        day[6] = month[1];
//
//        for (int j = 0; j < 4; j++) {
//            day[j] = year[j];
//        }
//        cout << day << endl;
//        if (day <= today) {
//            answer.push_back(i + 1);
//        }
//    }
//    return answer;
//}


/*성격 유형 검사*/

//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <iostream>
//using namespace std;
//
//string solution(vector<string> survey, vector<int> choices) {
//    string answer = "";
//    vector<pair<char, int>> v= { {'R',0 }, {'T',0}, {'C',0}, {'F',0}, {'J',0}, {'M',0}, {'A',0}, {'N',0} };
//
//    for (int i = 0; i < choices.size(); i++) {
//        int point = choices[i];
//        if (point == 4) continue;
//
//        else if (point < 4) {
//            char s = survey[i][0];
//            for (int j = 0; j < 8; j++) {
//                if (s == v[j].first) {
//                    v[j].second += 4 - point;
//                    break;
//                } 
//            }
//        }
//        else {
//            char s = survey[i][1];
//            for (int j = 0; j < 8; j++) {
//                if (s == v[j].first) {
//                    v[j].second += point - 4;
//                    break;
//                } 
//            }
//        }
//    }
//
//    for (int i = 0; i < 7; i += 2) {
//        char c;
//        c = v[i].second >= v[i + 1].second ? v[i].first : v[i + 1].first;
//        string str(1, c);
//        answer+= str;
//    }
//    return answer;
//}

