//#include <iostream>
//#include <vector>
//
//using namespace std;
//
///*
//1. string 문자열 2개(t, p)를 받아 길이에 맞게 비교
//*/
//
//int solution(string t, string p) {
//    int answer = 0;
//    int len = p.length();
//    string buf;
//
//    for (int i = 0; i < t.length() - len+1; i++) {
//        buf = t.substr(i, len);
//        if (buf <= p)
//            answer++;
//    }
//
//    return answer;
//}