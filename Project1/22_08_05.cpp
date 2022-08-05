#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;

///* 후보키
//1. DB의 값들을 판별할 수 있는 최소한의 키값을 설정하기
//2. vec{x}{y}일때 1<=x<=20, 1<=y<=8
//
//*/
//int main() {
//    int answer = 0;
//    int count = 0;
//    vector<vector<string>> relation= {{"100", "ryan", "music", "2"}, {"200", "apeach", "math", "2"}, {"300", "tube", "computer", "3"}, {"400", "con", "computer", "4"}, {"500", "muzi", "music", "3"}, {"600", "apeach", "music", "2"}};
//    vector<string> str;
//    vector<vector<string>>str1;
//    vector<int>arr;
//    if (relation.size() < 1 || relation.size() > 20)
//        return 0;
//    if (relation[0].size() < 1 || relation[0].size() > 8)
//        return 0;
//
//    for (int j = 0; j < relation[0].size(); j++) {
//        for (int i = 0; i < relation.size(); i++) {
//            str.push_back(relation[i][j]);
//        }
//        str1.push_back(str);
//        sort(str.begin(), str.end());
//        for (int k = 0; k < str.size()-1; k++) {
//            if (str[k] == str[k + 1]) {
//                break;
//            }
//            if (k == str.size() - 2)
//            {
//                arr.push_back(count);
//                answer++;
//            }
//        }
//        count++;
//        str.clear();
//    }
//
//    count = 0;
//    for (int i = 0; i < relation[0].size(); i++) {
//        for (int j = 0; j < relation.size(); j++) {
//            if (arr[count] == j) {
//                count++;
//                continue;
//            }
//
//        }
//    }
//
//    cout << answer;
//
//    return answer;
//}

//int main() {
//	vector<string> id_list = { "muzi", "frodo", "apeach", "neo" };
//	vector<string> report = { "muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi" };
//	int k=2;
//
//	
//	vector<string> str, str1;
//	vector<int> answer,arr1;
//	int* arr = new int[id_list.size()];
//	arr = { 0, };
//	for (int i = 0; i < id_list.size(); i++) {
//		answer.push_back(0);
//	}
//
//	for (int i = 0; i < report.size(); i++) {
//		for (int j = 0; j < report[i].length(); j++) {
//			if (report[i][j] == ' ') {
//				
//				str.push_back(report[i].substr(j + 1));
//				str1.push_back(report[i].substr(0, j ));
//			}
//		}
//	}
//	for (int i = 0; i < id_list.size(); i++) {
//		for(int j=0;j<str.size();j++){
//			if (id_list[i] == str[j]) {
//				arr[i]++;
//				arr1.push_back(j);
//			}
//		}
//		if (arr[i] > k) {
//			for (int j = 0; j < str1.size(); j++) {
//
//			}
//		}
//	}
//	delete[]arr;
//}

//int main() {
//		vector<string> id_list = { "muzi", "frodo", "apeach", "neo" };
//		vector<string> report = { "muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi" };
//		int k=2;
//
//		for (int i = 0; i < report.size(); i++) {
//			stringstream ss(report[i]);
//
//		}
//
//}

void main() {
	vector<int> numbers ={ 3, 30, 34, 5, 9 };
	int a = 0;
	vector<string>str;
	string s;
	string answer = "";

	for (int i = 0; i < numbers.size(); i++) {
		s=to_string(numbers[i]);
		str.push_back(s);
	}
	sort(str.begin(), str.end());
	for (int i = str.size()-1; i >= 0; i--) {

		if (i == 1) {
			if (str[i][str[i].length() - 1] == '0') {
				answer += str[0] + str[1];
				break;
			}
		}
		answer += str[i];
		
	}
	cout << answer;
}