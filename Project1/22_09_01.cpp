#include <iostream>
#include <vector>
#include <string>

using namespace std;

///*���α׷��ӽ� �������� �˻�*/
//
///*
//1. 4������ ��ǥ�� ������ R T / C F / J M / A N ���� ������
//2. �˻����� n���� ������ 7���� ���� 2���� ������ ���� +3~+1������ 0 +3~+1������ ����
//3. ����ǥ���� �� ���������� ���� ���������� �˻����� �����̸� ������ ���� ��� ������
//4. servey�� ����� ���������� ���� ���� �Ŀ� ������ ���� �����̴�. => choices�� ��Ҹ� 4���� �������� 1�̻��̸� ���� �̸��̵� ����
//5. choices�� 1(�ſ� ����) ~ 7(�ſ� ����)������ ��Ÿ���� => 4���� ���� �������� ó��
//
//*/
//
//
//
//int main() {
//	vector<string> survey = { "NA", "NA", "NA", "NA", "NA" };
//	vector<int> choices = { 5, 4, 3, 7, 1 };
//
//	int arr[4][2] = { {0,0},{0,0},{0,0},{0,0} };
//
//	string answer = "";
//	vector<string>str = { "RT","CF","JM","AN" };
//
//	for (int i = 0; i < survey.size(); i++) {
//		int n = -1;
//		int rev = 1;
//		if (survey[i] == "RT" || survey[i] == "TR") {
//			n = 0;
//			if (survey[i] == "RT")
//				rev = 1;
//			else
//				rev = 0;
//		}
//		else if (survey[i] == "CF" || survey[i] == "FC") {
//			n = 1;
//			if (survey[i] == "CF")
//				rev = 1;
//			else
//				rev = 0;
//		}
//		else if (survey[i] == "JM" || survey[i] == "MJ") {
//			n = 2;
//			if (survey[i] == "JM")
//				rev = 1;
//			else
//				rev = 0;
//		}
//		else if (survey[i] == "AN" || survey[i] == "NA") {
//			n = 3;
//			if (survey[i] == "AN")
//				rev = 1;
//			else
//				rev = 0;
//		}
//
//		if (choices[i] / 4 != 0) { //agree second
//			if (rev == 1) {
//				arr[n][1] += (choices[i] % 4);
//			}
//			else {
//				arr[n][0] += (choices[i] % 4);
//			}
//		}
//		else { //disagree first
//			if (rev == 1) {
//				arr[n][0] += (choices[i] % 4);
//			}
//			else {
//				arr[n][1] += (choices[i] % 4);
//			}
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		cout << i << arr[i][0] << "   " << arr[i][1] << endl;
//		if (arr[i][0] >= arr[i][1])
//			answer += str[i][0];
//
//		else
//			answer += str[i][1];
//	}
//	
//
//
//	cout<< answer;
//
//}

///*���α׷��ӽ� �Ҽ� �����*/
//
//int main() {
//	vector<int>nums= {1, 2, 7, 6, 4};
//	vector<int>v;
//
//	for (int i = 0; i < nums.size()-2; i++) {
//		for (int j = i + 1; j < nums.size() - 1; i++) {
//			for (int k = j + 1; k < nums.size(); k++) {
//				int a = nums[i] + nums[j] + nums[k];
//				v.push_back(a);
//			}
//		}
//	}
//	for (int x = 0; x < v.size(); x++) {
//		cout << v[x] << endl;
//	}
//
//}

/*17298 ��ū��*/

int main() {
	vector<string>answer;

	while(1) {
		string s="";
		getline(cin, s);
		if (s == ".")
			break;

		for (int i = 0; i < s.length(); i++) {

		}
	}
}