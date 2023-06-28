#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;
/*
1. 추월하면 추월한 선수의 이름을 부름
*/
//vector<string> solution(vector<string> players, vector<string> callings) {
//    vector<string> answer(players);
//    string buf;
//
//    for (auto k : callings) {
//        for (int i = 1; i < answer.size(); i++) {
//            if (answer[i] == k) {
//                buf = answer[i];
//                answer[i] = answer[i - 1];
//                answer[i - 1] = buf;
//                break;
//            }
//        }
//    }
//
//    return answer;
//}

void swap(string& a, string& b) {
    string buf = a;
    a = b;
    b = buf;
}

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer(players);
    map <string, int> m;

    for (int i = 0; i < players.size(); i++) {
        m.insert(make_pair(players[i], i ));
    }
    for (auto k : callings) {
        int calling_index = m[k];
        if (calling_index > 0) {
            cout << answer[calling_index] << "    " << answer[calling_index - 1] << endl;
            swap(answer[calling_index], answer[calling_index - 1]);
            cout << answer[calling_index] << "    " << answer[calling_index - 1] << endl;
        }
    }

    return answer;
}


#include <iostream>
int main() {
    vector<string>mm = { "mumu", "soe", "poe", "kai", "mine" };
    vector<string>c = { "kai", "kai", "mine", "mine" };
    solution(mm, c);
}