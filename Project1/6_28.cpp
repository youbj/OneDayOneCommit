#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <iostream>
using namespace std;

/*���α׷��ӽ� �޸������*/

/////*
////1. �߿��ϸ� �߿��� ������ �̸��� �θ�
////*/
////vector<string> solution(vector<string> players, vector<string> callings) {
////    vector<string> answer(players);
////    string buf;
////
////    for (auto k : callings) {
////        for (int i = 1; i < answer.size(); i++) {
////            if (answer[i] == k) {
////                buf = answer[i];
////                answer[i] = answer[i - 1];
////                answer[i - 1] = buf;
////                break;
////            }
////        }
////    }
////
////    return answer;
////}
////
////void swap(string& a, string& b) {
////    string buf = a;
////    a = b;
////    b = buf;
////}
////
////vector<string> solution(vector<string> players, vector<string> callings) {
////    vector<string> answer(players);
////    unordered_map <string, int> m;
////
////    for (int i = 0; i < players.size(); i++) {
////        m.insert(make_pair(players[i], i ));
////    }
////    for (auto k : callings) {
////        int calling_index = m[k];
////        if (calling_index > 0) {           
////            swap(answer[calling_index], answer[calling_index - 1]);
////            swap(m[answer[calling_index]], m[answer[calling_index - 1]]);           
////        }
////    }
////
////    return answer;
////}

/* ���α׷��ӽ� �߾�����
1. ������ ����� �̸�(name)�� ���� ����(yearning)�ο�
*/

//vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
//    vector<int> answer;
//    map<string, int>m;
//    map<string, int>photo_people;
//    for (int i = 0; i < name.size(); i++) {
//        m.insert(make_pair(name[i], yearning[i]));
//    }
//    for (int i = 0; i < photo.size(); i++) {
//        int count=0;
//        for (int j = 0; j < photo[i].size(); i++) {
//            for (auto k : m) {
//                if (k.first == photo[i][j])
//                    count += k.second;
//            }
//        }
//        answer.push_back(count);
//
//    }
//    return answer;
//}


/* ���α׷��ӽ� �籸����
1. �׻� ���� ��ġ�� ���� ���� ģ��
2. ����� �ϴ� ���� ��ġ�� list�� ����

1. �Ի簢�� �ݻ簢�� ���� = ����� �𼭸��� ������ �������� �ﰢ������ ������ ����
2. 
*/

//int solution(vector<vector<int>> targets) {
//    int answer = 0;
//
//    return answer;
//}
