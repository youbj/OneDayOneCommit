#include <string>
#include <vector>
#include <iostream>


using namespace std;

/*
���α׷��ӽ�- ��ĥ�ϱ�
1. 1���� �� n���� ����
2. �ѹ��� ĥ�Ҽ� �ִ� ���� m
3. ĥ�ؾ� �ϴ� �� s
- ������ m���̸�ŭ ĥ�ؾ� ��
- s�� ���� ������ n�� �Ѿ�� �ȵ�
�ذ��
1. �οﺤ�͸� �̿��ؼ� s�� ������ 0 ������ 1�� �����Ѵ�.
2. s�� ���ۺ��� +m-1�� �ؼ� �ڿ� ������ �Ѿ��.
*/
//int solution(int n, int m, vector<int> section) {
//    int answer = 0;
//
//    vector<bool> v;
//    int j = 0;
//    for (int i = 0; i < n; i++) {      
//        if (j < section.size()) {
//            if (i == section[j] - 1) {
//                v.push_back(false);
//                j++;
//            }
//            else v.push_back(true);
//        }
//        else
//            v.push_back(true);
//    }
//
//    int k = section.front() - 1;
//
//    while (k < v.size()) {
//
//        ++answer;
//        int count = 0;
//        for (int i = k; i < k + m; i++) {
//            if (i >= v.size())
//                continue;
//            else {
//                if (v[i] == false) {
//                    count = 1;
//                }
//            }         
//        }
//        if (count == 1) {
//            for (int i = k; i < k + m; i++) {
//                if (i >= v.size()) {
//                    break;
//                }
//                if (v[i] == false) {
//                    v[i] = true;
//                }
//            }
//        }
//        else
//            --answer;
//        k += m;
//    }
//    return answer;
//}

///*
//�ε����� ����ϱ�
//while������ ������ section�� front������ ����=index
//index+m-1�� ���� section ������ ������ index= section[+1
//ũ�� ���� ���ǰ� ���
//*/
//int solution(int n, int m, vector<int> section) {
//    int answer = 1;
//    int index = section[0];
//    int count = 1;
//
//    while (count < section.size()) {
//        if (index + m - 1 < section[count]) {
//            index = section[count];
//            ++answer;
//        }
//        ++count;
//    }
//
//    return answer;
//}
//
//int main() {
//    int n = 1;
//    int m = 1;
//    vector<int> s;
//    s.push_back(1);
//    //s.push_back(3);
//    //s.push_back(6);
//    //s.push_back(8);
//    //s.push_back(10);
//    //s.push_back(12);
//    //s.push_back(14);
//    cout<<endl<<solution(n, m, s);
//}

