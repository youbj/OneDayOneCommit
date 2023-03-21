//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
///*
//1. 문자열에서 0 제거
//2. 문자열의 길이 계산후 이진수로 표현
//3. 반복
//*/
//int num = 0;
//int binary(string s, int count) {
//    ++num;
//    int n = 0;
//    for (int i = 0; i < s.length(); i++) {
//        if (s[i] == '1')
//            ++n;
//    }
//    count += s.length() - n;
//
//    string str = "";
//    while (n != 0) {
//        if (n % 2 == 1) {
//            str += '1';
//        }
//        else {
//            str += '0';
//        }
//        n /= 2;
//    }
//
//    if (str == "1") {
//        return count;
//    }
//    else {
//        binary(str, count);
//    }
//}
//
//vector<int> solution(string s) {
//    vector<int> answer;
//    int count = 0;
//    binary(s, count);
//    answer.push_back(num);
//    answer.push_back(count);
//    return answer;
//}
//
//int main() {
//    string s = "110010101001";
//    vector <int>answer = solution(s);
//    cout << answer[0] <<" "<< answer[1];
//}