//#include <string>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//long long cnt_dots(int r)
//{
//    long long cnt = r;
//    for (int i = 1; i < r; i++)
//        cnt += (long long)sqrt(1LL * r * r - 1LL * i * i);
//    return cnt * 4 + 1;
//}
//
//long long cnt_inside_dots(int r)
//{
//    long long cnt = r - 1;
//    for (int i = 1; i < r; i++)
//    {
//        long long tmp = (long long)sqrt(1LL * r * r - 1LL * i * i);
//        if (tmp * tmp + 1LL * i * i == 1LL * r * r) cnt += tmp - 1;
//        else cnt += tmp;
//    }
//    return cnt * 4 + 1;
//}
//
//long long solution(int r1, int r2)
//{
//    return cnt_dots(r2) - cnt_inside_dots(r1);
//}

//#include <string>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//vector<int> solution(int m, int n, int startX, int startY, vector<vector<int>> balls) {
//    vector<int> answer;
//    for (int i = 0; i < balls.size(); i++) {
//        if (startY == balls[i].back()) {
//            double x_len = abs(startX - balls[i].front())/2;
//            int y_len = n - startY > n / 2 ? n-startY : startY;
//            int len = (x_len * x_len + y_len * y_len) * 2;
//            answer.push_back(len);
//        }
//        else if (startX == balls[i].front()) {
//            double y_len = abs(startY - balls[i].back()) / 2;
//            int x_len = m - startX > m / 2 ? m-startX : startX;
//            int len = (x_len * x_len + y_len * y_len) * 2;
//            answer.push_back(len);
//        }
//        else {
//            
//        }
//    }
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<vector<string>> book_time) {
//    int answer = 0;
//    sort(book_time.begin(), book_time.end());
//    vector<pair<string, string>>room;
//
//    for (int i = 0; i < book_time.size(); i++) {
//        bool check = true;
//        string st1 = "";
//        string st2 = "";
//        st1 += book_time[i][0].substr(0, 2) + book_time[i][0].substr(3, 2);
//        st2 += book_time[i][1].substr(0, 2) + book_time[i][1].substr(3, 2);
//
//        if (room.empty()) {
//            room.push_back(make_pair(st1, st2));
//        }
//        else {
//            for (int j = 0; j < room.size(); j++) {
//                if (st1 >= room[j].first && st1 <= room[j].second) {
//                    room.push_back(make_pair(st1, st2));
//                    check = false;
//                    break;
//                }
//            }
//            if (check) {
//
//            }
//        }
//    }
//
//    return answer;
//}

#include <iostream>
#include <>