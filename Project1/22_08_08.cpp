#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
//
///*
//- īī�� ���ڿ� ����
//1. ���ڿ��� �ݺ��� ã�� �ּ� ������ ���ڿ��� �ǵ��� ã��
//2. ���ڿ��� �ݺ��� ������ ������ ������. 1���� ���� 1���θ�, 2���� ���� 2���θ� n���� ��� n���θ� �и��Ѵ�.
//   ex) abcabcdede => 2abcdede �Ǵ� abcabc2de, ! 2abc2de
//2. substr�� �̿��Ͽ� ���ڿ��� �ߺ��� ã�� �� �� ���� �� ����.
//3. vector�� �Է¹޾� �Խ������ϴ� buffer�� ����� �� ���� �� ����.
//4. ���ڿ��� ���� �տ������� �߶�� �Ѵ�.
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
//				cout << "���ڿ� ���� || " << s1 <<"���ڿ� ���� || "<< s1.length() <<"   " << i << endl;
//				str.push_back(s[i]);
//				i += s1.length();
//			}
//			else {
//				cout << "���ڿ� �߰� || " << s1 << endl;
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
//		answer.push_back(0); //�Է��� ���� �ʱ�ȭ
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
//		reporter.push_back(newreport[i].substr(0, newreport[i].find(" ")));// �Ű��� ��� �Է�
//		suspect.push_back(newreport[i].substr(newreport[i].find(" ") + 1));// �Ű� ���� ��� �Է�
//	}
//
//	vector<int> num_buf;
//
//	for (int i = 0; i < id_list.size(); i++) {
//		count = 0;
//
//		for (int j = 0; j < suspect.size(); j++) {
//			if (id_list[i] == suspect[j]) {// id_list�� �Ű���� ����� ���Ͽ� �Ű���� Ƚ������
//				count++;// ���� ������ ���ϱ� ���� int����
//				num_buf.push_back(j);
//			}
//		}
//
//		if (count >= k) {
//			//�Ű� �ѻ���鿡�� ���� ����
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
