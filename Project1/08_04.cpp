///*���� ��� ������*/
//
///*
//����µ� = �ǿܿµ�
//����µ� -> ��������
//�ǳ��µ��� ����µ��� ������������ 1�и��� �µ� 1�� ����
//������ ���� �ǳ��µ��� �ǿܿµ��� ������ ������ 1�и��� �µ� 1 ����
//����µ����� ���� a��ŭ �Һ� 
//����µ����� ������ ���� b��ŭ ���� �Һ�
//*/
///*
//a�� b���� ũ�� ������ ����, �ݴ�� �µ� �ø��°� ����
//*/
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int temperature, int t1, int t2, int a, int b, vector<int> onboard) {
//    int answer = 0;
//    int temp = temperature;
//    if (temp > t2) {
//
//    }
//    else if(temp<t1){
//
//    }
//    else {
//        return 0;
//    }
//    for (int i = 0; i < onboard.size(); i++) {
//        if (temp < t1) {
//            answer += a;
//            --temp;
//        }
//        else if (temp > t2) {
//            answer += a;
//            ++temp;
//        }
//        else {
//            if (a > b) {
//
//            }
//            else {
//
//            }
//        }
//    }
//
//    return answer;
//}


//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int solution(int n, long long l, long long r) {
//    int answer = 0;
//    string s = "1";
//
//    for (int i = 0; i < n; i++) {
//        string str = "";
//        for (int j = 0; j < s.length(); j++) {
//            if (s[j] == '0') {
//                str += "00000";
//            }
//            else
//                str += "11011";
//
//            if (str.length() > r)
//                break;
//        }
//        s = str;
//    }
//
//    for (long long int i = l - 1; i < r; i++) {
//        if (s[i] == '1')
//            ++answer;
//    }
//
//    return answer;
//}
//
//int main() {
//    solution(2, 4, 17);
//}