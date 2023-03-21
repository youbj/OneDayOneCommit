#include <iostream>
#include <vector>
#include <string>

using namespace std;

//vector<int> solution(string s) {
//    vector<int> answer;
//    answer.push_back(0);
//    answer.push_back(0);
//    while (s != "1") {
//        int count = 0;
//        for (int i = 0; i < s.length(); i++) {
//            if (s[i] == '0') ++count;
//        }
//        int len = s.length() - count;
//        cout << "전체 길이 : " <<s.length() << endl << "0의 갯수 : " << count << "1의 갯수 : " << "   " << len << endl;
//        string st="";
//        while (len != 0) {
//
//            if (len == 1) {
//                st += '1';
//                break;
//            }
//
//            if (len / 2 == 1) {
//                st += ('0' + len % 2);
//                st += '1';
//                len = 0;
//            }
//            else{
//                st += ('0' + len % 2);
//                len /= 2;
//            }
//        }
//        answer[0] += 1;
//        answer[1] += count;
//        s = st;
//    }
//    return answer;
//}

