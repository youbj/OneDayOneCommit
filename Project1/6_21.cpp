//#include <string>
//#include <vector>
//
///*
//1. �� �迭�� 100����
//2. �۾����� <100  /  �۾��ӵ� <=100
//3. ������ �Ϸ翡 �� ��, �Ϸ� ���� (�Ϸ�� �׳� ���)
//4. ���� ����� ���� �Ϸ��ؾ� �ڿ� ����� ���� ����
//*/
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//    vector<int> answer;
//    vector<int> days;
//    int len = progresses.size();
//    for (int i = 0; i < len; i++) {
//        int num = 100 - progresses[i];
//        if (num % speeds[i] != 0)
//            days.push_back((num / speeds[i]) + 1);
//        else
//            days.push_back(num / speeds[i]);
//    }
//
//    int count = 1;
//    int max = days[0];
//    for (int i = 1; i < len; i++) {
//        if (days[i] > max) {
//            answer.push_back(count);
//            count = 1;
//            max = days[i];
//        }
//        else ++count;
//    }
//    answer.push_back(count);
//
//
//    return answer;
//}

