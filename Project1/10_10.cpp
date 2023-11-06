//#include <string>
//#include <vector>
//#include <algorithm>
//#include <deque>
//using namespace std;
//
//
//
//string solution(string p) {
//    string answer = "";
//    string str = "";
//    int count = 0;
//    deque <char>deq;
//
//    for (int i = 0; i < p.length(); i++) {
//        switch (p[i]){
//        case '(':
//            if (count > 0)
//                deq.push_back('(');
//            else
//                deq.push_front('(');
//            ++count;
//            break;
//        case ')':
//            --count;
//            deq.push_back(')');
//            break;
//        }
//        if (count == 0) {
//            for (auto a : deq) {
//                answer += string(1, deq.front());
//                deq.pop_front();
//            }
//        }
//    }
//    return answer;
//}
//
//#include <iostream>
//
//int main() {
//    string s = "()))((()";
//    cout << solution(s);
//}