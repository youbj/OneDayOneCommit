#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
//
///*
//- 카카오 문자열 압축
//1. 문자열의 반복을 찾아 최소 길이의 문자열이 되도록 찾기
//2. 문자열의 반복은 문자의 개수에 따른다. 1개일 경우는 1개로만, 2개일 경우는 2개로만 n개의 경우 n개로만 분리한다.
//   ex) abcabcdede => 2abcdede 또는 abcabc2de, ! 2abc2de
//2. substr을 이용하여 문자열의 중복을 찾아 낼 수 있을 것 같다.
//3. vector로 입력받아 입시저장하는 buffer로 사용할 수 있을 것 같다.
//4. 문자열은 제일 앞에서부터 잘라야 한다.
//*/
//int main() {
//	int answer = 0;
//	string s = "aabbaccc";
//	string s1 = "";
//	vector<char>str;
//	str.push_back(s[0]);
//
//	for (int i = 1; i < s.length(); ) {
//
//		for (int j = 0; j < str.size(); j++) {
//			s1 += str[j];
//		}
//		if (s1.length() < (s.length() / 2)) {
//			if (s1 == s.substr(s1.length(), s1.length())) {
//				cout << "문자열 기준 || " << s1 <<"문자열 길이 || "<< s1.length() <<"   " << i << endl;
//				str.push_back(s[i]);
//				i += s1.length();
//			}
//			else {
//				cout << "문자열 추가 || " << s1 << endl;
//
//				str.push_back(s[i]);
//				i++;
//			}
//			s1 = "";
//		}
//		else {
//
//		}
//
//	}
//
//
//	cout << str.size();
//	return 0;
//}
//
//void main() {
//	vector<string> id_list = { "con", "ryan" };
//	vector<string> report = { "ryan con", "ryan con", "ryan con", "ryan con" };
//	int k = 3;
//
//	vector<int> answer;
//	vector<string> newreport;
//	sort(report.begin(), report.end());
//	newreport.push_back(report[0]);
//	int count;
//	
//	for (int i = 0; i < id_list.size(); i++) {
//		answer.push_back(0); //입력을 위한 초기화
//	}
//
//	for (int i = 0; i < report.size()-1; i++) {
//		if (report[i] != report[i + 1]) {
//			newreport.push_back(report[i + 1]);
//		}
//	}
//
//	vector<string> reporter;
//	vector<string> suspect;
//
//	for (int i = 0; i < newreport.size(); i++) {
//		reporter.push_back(newreport[i].substr(0, newreport[i].find(" ")));// 신고한 사람 입력
//		suspect.push_back(newreport[i].substr(newreport[i].find(" ") + 1));// 신고 받은 사람 입력
//	}
//
//	vector<int> num_buf;
//
//	for (int i = 0; i < id_list.size(); i++) {
//		count = 0;
//
//		for (int j = 0; j < suspect.size(); j++) {
//			if (id_list[i] == suspect[j]) {// id_list와 신고받은 사람을 비교하여 신고받은 횟수받음
//				count++;// 정지 규정과 비교하기 위한 int변수
//				num_buf.push_back(j);
//			}
//		}
//
//		if (count >= k) {
//			//신고 한사람들에게 메일 전송
//			for (int a = 0; a < num_buf.size(); a++) {
//				for (int n = 0; n < id_list.size(); n++) {
//					if (id_list[n] == reporter[num_buf[a]]) {
//						answer[n] += 1;
//					}
//				}
//			}
//		}
//		num_buf.clear();
//	}
//
//}
