///*
//프로그래머스 카카오 다트게임
//
//1) 조건
//1. 숫자(0~10)과 알파벳(S,D,T), 특수문자(*,#)의 조합
//2. 숫자->문자 순으로 존재하며 숫자뒤에는 반드시 문자가 나와야하고 문자뒤에는 숫자혹은 특수문자가 온다
//
//*/
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int main() {
//	int answer = 0;
//	int n;
//	int k=0;
//	string str;
//	vector<int>arr;
//	cin >> str;
//
//	while (k<str.size()) {
//		if (str[k] >= '0' && str[k] <= '9') {
//			if (str[k] == '1' && str[k + 1] == '0')
//			{
//				arr.push_back(10);
//				k += 2;
//				continue;
//			}
//			arr.push_back((int)str[k] - 48);
//		}
//		else if (str[k] == '*' || str[k] == '#') {
//			if (str[k] == '*') {
//				if (k / 2 == 1) {
//					arr[0] *= 2;
//				}
//				else {
//					for (int i = arr.size() - 2; i < arr.size() ; i++) {
//						arr[i] *= 2;
//					}
//				}
//			}
//			else
//				arr[arr.size() - 1] *= -1;
//		}
//		else {
//			n = arr.size() - 1;
//			if (str[k] == 'D') {
//				arr[n] *= arr[n];
//			}
//			else if(str[k]=='T') {
//				arr[n] *= (arr[n] * arr[n]);
//			}
//		}
//		k++;
//
//	}
//	for (int i = 0; i < 3; i++) {
//		answer += arr[i];
//	}
//	cout << answer;
//}
///*
//다른사람의 풀이를 보았을 때, 나와 다른점
//1. 사람들은 int로 형변환하지 않고 그대로 '0'을 빼서 int에 넣었다.
//2. sstream이라는 라이브러리를 이용하여 정수형, 문자형을 따로 나누었고 get과 unget, switch를 이용하여 
// 출력하였다.
//*/