//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//
///*
//1. n�� 2�̻� 10����
//2. �ܾ� �迭�� words�� n�̻� 100����
//3. �ܾ��� ��Ҵ� 50�� ����
//4. return �� [��ȣ, ����]
//
//1. �ܾ�迭�� �ο� ���� �־����ٴ� �� ����
//2. n���� ������ �� ���� ���� -1, �������� �� -1
//
//
//�ݷ�
//n�� ����?
//*/
//
//vector<int> solution(int n, vector<string> words) {
//    vector<int> answer;
//
//    for (int i = 1; i < words.size(); i++) {
//        
//        // �� ���ĺ��� �ٸ� ���ĺ��� ������ ���
//        if (words[i - 1].back() != words[i].front()) {
//            answer.push_back(i % n + 1);
//            answer.push_back(i / n + 1);
//            return answer;
//        }
//        else // ������ �ܾ �Է����� ���
//        {
//            for (int j = 0; j < i; j++) {
//                if (words[i].front() == words[j].front()) {
//                    if (words[i] == words[j]) {
//                        answer.push_back(i % n + 1);
//                        answer.push_back(i / n + 1);
//                        return answer;
//                    }
//                    else
//                        continue;
//                }
//                else continue;
//            }
//        }
//    }
//
//    // �ƹ��� ���� ���� �Ϸ�Ǿ��� ���
//    if (answer.size() == 0) {
//        answer.push_back(0);
//        answer.push_back(0);
//    }
//
//    return answer;
//}
//
//int main() {
//    int n = 2;
//    vector<string> w{ "ac", "cac","ca","ac","cac"};
//
//    vector <int> s = solution(n, w);
//
//    cout << s[0] << "   " << s[1];
//}