#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//int main() {
//    string s = "-1 -2 -3 -4";
//    vector <int>v;
//    int i = 0;
//    string st ="";
//    while (i < s.length()) {
//        if (s[i] == ' ') {
//            v.push_back(stoi(st));
//            ++i;
//            st = "";
//        }
//        else{
//            st += s[i];
//            ++i;
//        }
//        if (i == s.length() - 1) {
//            st += s[i];
//            v.push_back(stoi(st));
//            break;
//        }
//    }
//    sort(v.begin(), v.end());
//    string answer = to_string(v.front()) + ' ' + to_string(v.back());
//
//    cout << answer <<" ";
//
//}

//
//string solution(string number, int k) {
//    string answer = "";
//    return answer;
//}
//
//int main() {
//    string number="4177252841";
//    int k=4;
//    string answer = "";
//
//    for (int i = 0; i < number.length(); i++) {
//        char max = number[i];
//        int max_num = i;
//        for (int j = 1; j < k; j++) {
//            if (max < number[j]) {
//                max = number[j];
//                max_num = j;
//            }
//        }
//
//        cout << number.substr(0,max_num)+"  " + number.substr(max_num, 100) << endl;
//        number = number.substr(max_num, 100);
//    }
//    cout << number;
//}