//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
///*
//1. 소문자로 구성된 알파벳 문자열
//2. 같은 알파벳이 2개 붙어있을경우 제거 후 앞,뒤 붙임
//3.  모두 제거가능? -> 1 알파벳이 남음? ->0
//
//1. i와 i+1이 같으면 제거 => -1, +2
//*/
//
//stack<char> st;
//int solution(string s)
//{
//    int answer = 0;
//    for (int i = 0; i < s.size(); i++) {
//        if (st.size() > 0 && st.top() == s[i]) st.pop();
//        else st.push(s[i]);
//    }
//    answer = !st.size();
//
//    return answer;
//}