//#include <iostream>
//#include <vector>
//
//using namespace std;
//
///*
//1. string ���ڿ� 2��(t, p)�� �޾� ���̿� �°� ��
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