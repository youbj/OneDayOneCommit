#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

///*프로그래머스 최소공배수 구하기*/
//bool compare(int a, int b) {
//	return b < a;
//}
//int gcd(int a, int b) {
//	int c = a % b;
//	while (c != 0) {
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	return b;
//}
//int lcm(int a, int b) {
//	return (a * b) / gcd(a, b);
//}
//
//void main() {
//	vector<int> arr={ 2,6,8,14 };
//	int answer = 0;
//
//
//	sort(arr.begin(), arr.end(), compare);
//	int min = arr[0];
//	int max = arr[0];
//
//
//	for (int i = 0; i < arr.size() - 1; i++) {
//		min = gcd(min, arr[i + 1]);
//		max = lcm(max, arr[i + 1]);
//	}
//	answer = max;
//}

///*프로그래머스 최댓값과 최솟값 구하기*/
//
//void main() {
//    string s = "-1 -2 -3 -4 -5";
//    string answer = "";
//
//    stringstream ss(s);
//    vector<int>arr;
//    int a;
//    int count = 1;
//
//    for (int i = 0; i < s.length(); i++) {
//        if (s[i] == ' ')
//            count++;
//    }
//    for (int i = 0; i < count; i++) {
//        ss >> a;
//        arr.push_back(a);
//    }
//
//    sort(arr.begin(), arr.end());
//    answer += to_string(arr[0]) + " " + to_string(arr[arr.size() - 1]);
//    cout << answer;
//
//}

///*프로그래머스_JadenCase 문자열 만들기*/
//void main() {
//	string s= "3people     unFol56owed    me   me mem ";
//	string answer="";
//
//	stringstream ss(s);
//	vector<string> str;
//
//	int count = 1;
//
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == ' ')
//			count++;	
//	}
//
//	for (int i = 0; i < count; i++) {
//		string s1;
//		ss >> s1;
//		str.push_back(s1);
//	}
//
//	for (int i = 0; i < str.size(); i++) {
//		str[i][0] = toupper(str[i][0]);
//		for (int j = 1; j < str[i].length(); j++) {
//			str[i][j] = tolower(str[i][j]);
//		}
//	}
//	int k = 0, a = 0;
//
//	while (k < s.length()) {
//		if (s[k] != ' ') {
//			answer += str[a];			
//			k += str[a].length();
//			a++;
//		}
//		else {
//			answer += ' ';
//			k++;
//		}
//	}
//	cout << answer;


///*백준 1152번*/
//
//int main() {
//	string s;
//	getline(cin, s);
//	if (s.length() > 1000000)
//		return 0;
//	int answer = 1;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == ' ') {
//			answer++;
//			if (s[i + 1] == ' ')
//				return 0;
//		}
//	}
//	if (s[0] == ' ' || s[s.length() - 1] == ' ') {
//		answer -= 1;
//	}
//	if (s[0] == ' ' && s[s.length() - 1] == ' ') {
//		answer -= 1;
//	}
//	cout << answer;
//	return 0;
//}

///*백준 2908번*/
//
//int main() {
//	int a, b;
//	cin >> a >> b;
//	if (a + b < 200 || a + b>1999)
//		return 0;
//	int a1 = 0, b1 = 0;
//	int i = 3, k = 100;
//	while (a!= 0) {
//		if (a % 10 == 0 || b % 10 == 0)
//			return 0;
//		a1 += ((a % 10) * k);
//		b1 += ((b % 10) * k);
//		a /= 10;
//		b /= 10;
//		k /= 10;
//		if (k == 0)
//			k = 1;
//	}
//	int answer = a1 > b1 ? a1 : b1;
//
//	cout << answer;
//	return 0;
//}