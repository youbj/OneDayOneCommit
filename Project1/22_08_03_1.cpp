///*
//���α׷��ӽ� īī�� ��Ʈ����
//
//1) ����
//1. ����(0~10)�� ���ĺ�(S,D,T), Ư������(*,#)�� ����
//2. ����->���� ������ �����ϸ� ���ڵڿ��� �ݵ�� ���ڰ� ���;��ϰ� ���ڵڿ��� ����Ȥ�� Ư�����ڰ� �´�
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
//�ٸ������ Ǯ�̸� ������ ��, ���� �ٸ���
//1. ������� int�� ����ȯ���� �ʰ� �״�� '0'�� ���� int�� �־���.
//2. sstream�̶�� ���̺귯���� �̿��Ͽ� ������, �������� ���� �������� get�� unget, switch�� �̿��Ͽ� 
// ����Ͽ���.
//*/