#include <iostream>

#include <string>
#include <vector>
#include <map>
using namespace std;

/*광물 캐기 - 못함 dfs사용해야 될 듯*/
//int solution(vector<int> picks, vector<string> minerals) {
//    int answer = 0;
//    vector<int>mine(3,0);
//    vector<vector<int>>pic = { {1,1,1},{5,1,1},{25,5,1} };
//    int size = minerals.size();
//    int k = 0;
//    int pick = picks[k];
//    for (int i = 0; i < size; i++) {
//        if (pick == 0) {
//            k += 1;
//            pick = picks[k];
//            if (k == 4) break;
//        }
//        pick *= 5;
//        char check;
//
//        if (i % 5 == 0) {
//            check = minerals[i][0];
//        }
//
//        if (check == 'd') {
//            picks[0] -= 1;
//            if (picks[0] == -1) {
//                check = 'i';
//            }
//            else {
//                ++answer;
//            }
//
//        }
//        else if (check == 'i') {
//
//        }
//        else {
//
//        }
//
//        switch (minerals[i][0]) {
//        case 'd':
//            --pick;
//            ++mine[0];
//            break;
//        case 'i':
//            ++mine[1];
//            break;
//        default:
//            ++mine[2];
//            break;
//        }
//    }
//    for (int i = 0; i < 3; i++) {
//        cout << mine[i]<<" ";
//    }
//    
//    //for (int i = 0; i < 3; i++) {
//    //    int pic = picks[i];
//    //    if (i == 0) {
//    //        for (int j = 0; j < 3||pic<=0; j++) {
//    //            if (mine[j] == 0)
//    //                continue;
//    //            --pic;
//    //            --mine[j];
//    //            ++answer;
//    //        }
//    //    }
//    //    if (i == 1) {
//    //        for (int j = 0; j < 3 || pic <= 0; j++) {
//    //            if (mine[j] == 0)
//    //                continue;
//    //            --pic;
//    //            --mine[j];
//    //            if (j == 0)
//    //                answer += 5;
//    //            else ++answer;
//    //        }
//    //    }
//    //    if (i == 2) {
//    //        for (int j = 0; j < 3 || pic <= 0; j++) {
//    //            --pic;
//    //            --mine[j];
//    //            if (j == 0)
//    //                answer += 25;
//    //            else if (j == 1)
//    //                answer += 5;
//    //            else
//    //                ++answer;
//    //        }
//    //    }
//    //}
//
//    return answer;
//}


/*호텔 대실*/
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//bool condition(vector<string>s1, vector<string>s2) {
//    if (s1[0] == s2[0])
//        return s1[1] < s2[1];
//    return s1[0] < s2[0];
//}
//
////int solution(vector<vector<string>> book_time) {
////    int answer = 0;
////    sort(book_time.begin(), book_time.end(), condition);
////    vector<pair<string, string>>reserve;
////
////    for (int i = 0; i < book_time.size(); i++) {
////        int hour = stoi(book_time[i][1].substr(0, 2));
////        int minute = stoi(book_time[i][1].substr(3, 2)) + 10;
////        if (minute >= 60) {        
////            hour += 1;
////            minute -= 60;
////        }
////        string st = "";
////        st += to_string(hour);
////        if (st.size() == 1) {
////            st = "0" + st;
////        }
////        st += ":" + to_string(minute);
////
////        if (reserve.empty()) {          
////            reserve.push_back(make_pair(book_time[i].front(), st));
////        }
////        else {
////            string front = book_time[i].front();
////            bool check = true;
////            for (int j = 0; j < reserve.size(); j++) {
////                if (reserve[j].second<=front) {
////                    check = false;
////                    reserve[j].second= st;
////                    break;
////                }
////            }
////            if (check) {
////                reserve.push_back(make_pair(book_time[i].front(), st));
////            }
////        }
////    }
////
////    for (int i = 0; i < reserve.size(); i++) {
////        cout << reserve[i].first<<"   " << reserve[i].second<<"\n";
////    }
////    return reserve.size();
////}
//
//int solution(vector<vector<string>> book_time) {
//    int answer = 0;
//    sort(book_time.begin(), book_time.end(), condition);
//
//    int arr[25][61] = { 0, };
//    for (int i = 0; i < book_time.size(); i++) {
//        int start_hour = stoi(book_time[i][0].substr(0, 2));
//        int start_minute = stoi(book_time[i][0].substr(3, 2));
//        int end_hour = stoi(book_time[i][1].substr(0, 2));
//        int end_minute = stoi(book_time[i][1].substr(3, 2))+1;
//        if (end_minute >= 60) {
//             ++end_hour;
//             end_minute -= 60;
//        }
//
//        for (int j = start_hour; j <= end_hour; j++) {
//            for (int k = 0; k <=60; k++) {
//                if (j == start_hour) {
//                    if (k < start_hour)
//                        continue;
//                }
//                if (j == end_hour) {
//                    if (k >= end_minute)
//                        break;
//                }
//                ++arr[j][k];
//            }
//        }
//
//    }
//    
//    for (int i = 0; i < 24; i++) {
//        for (int j = 0; j < 60; j++) {
//            if (answer < arr[i][j])
//                answer = arr[i][j];
//        }
//    }
//    return answer;
//}


/*숫자 변환하기*/

//#include <string>
//#include <vector>
//
//using namespace std;
//int count = 0;
//
//int cal_vec(vector<int>& v,int n,int y, int count) {
//    ++count;
//    vector<int>buf;
//    int check = 0;
//    for (int i = 0; i < v.size(); i++) {
//        if (v[i] + n <= y) {
//            check = 1;
//            buf.push_back(v[i] + n);
//            if (v[i] + n == y){
//                check = 2;
//                break;
//            }
//        }
//        if (v[i] * 2 <= y) {
//            check = 1;
//            buf.push_back(v[i] * 2);
//            if (v[i]*2 == y){
//                check = 2;
//                break;
//            }
//        }
//            
//        if (v[i] * 3 <= y) {
//            check = 1;
//            buf.push_back(v[i] * 3);
//            if (v[i] * 3 == y) {
//                check = 2;
//                break;
//            }
//        }
//                
//    }
//    if (check == 0)
//        return -1;
//    else if (check == 1)
//        return cal_vec(buf, n, y, count);
//    else
//        return count;
//    
//}
//int solution(int x, int y, int n) {
//    int answer = 0;
//    vector <int>v;
//    v.push_back(x);
//    int k = cal_vec(v, n, y, answer);
//
//    return k;
//}
//
//int main() {
//    cout<<solution(2, 5, 4);
//}
