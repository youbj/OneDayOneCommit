//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<vector<int>> targets) {
//    int answer = 0;
//    vector<pair<int, int>>range;
//    range.push_back(make_pair(targets[0][0], targets[0][1]));
//
//    for (int i = 1; i < targets.size(); i++) {
//        vector<int>tg(targets[i]);
//        pair<int, int>buf;
//        bool check = false;
//        for (int j = 0; j < range.size(); j++) { // 더 좁은 경우, 한쪽만 걸쳤을 경우, 완전 다를경우
//            if (tg[1] <= range[j].second && tg[0] >= range[j].first) {// 더 좁은 경우
//                cout << "check : " << 1 << endl;
//                check = false;
//                range[j].first = tg[0];
//                range[j].second = tg[1];
//                break;
//            }
//            else if (tg[1] <= range[j].first || tg[0] >= range[j].second) { // 범위와 완전 다를 경우(새로운 입력 필요)
//                cout << "check : " << 2 << endl;
//                check = true;
//                buf = make_pair(tg[0], tg[1]);
//            }
//            else { // 한쪽만 걸쳤을 경우
//                cout << "check : " << 3 << endl;
//                check = false;
//                if (tg[0]<=range[j].first&&(tg[1] >= range[j].first&& tg[0] <= range[j].first)) {
//                    range[j].first = tg[0];
//                }
//                else if (tg[1]>=range[j].second) {
//                    range[j].second = tg[1];
//                }
//                break;
//            }
//        }
//        if (check)
//            range.push_back(make_pair(buf.first, buf.second));
//
//        for (int k = 0; k < range.size(); k++) {
//            cout << range[k].first << "  " << range[k].second << "   ";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < range.size(); i++) {
//        cout << range[i].first << "  " << range[i].second << endl;
//    }
//
//    return answer;
//}
#include<iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int storey) {
    int answer = 0;
    while (storey != 0) {
        if (storey % 10 == 0) {
            storey /= 10;
        }

        if (storey % 10 > 5) {
            int n = 10-(storey % 10);
            storey += n;
            answer += n;
        }
        else {
            int n = storey % 10;
            storey -= n;
            string st = to_string(storey);
            if (st[0] == '9') {
                storey += (2 * n);
            }
            answer += n;
        }

        if (storey / 10 == 0) {
            answer += storey;
            break;
        }
    }
    return answer;
}

int main() {
  cout<< solution(950);
}