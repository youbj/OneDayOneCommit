//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
///*
//1. �ҹ��ڷ� ������ ���ĺ� ���ڿ�
//2. ���� ���ĺ��� 2�� �پ�������� ���� �� ��,�� ����
//3.  ��� ���Ű���? -> 1 ���ĺ��� ����? ->0
//
//1. i�� i+1�� ������ ���� => -1, +2
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