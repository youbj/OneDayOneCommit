#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <iostream>
using namespace std;

/*프로그래머스 달리기경주*/

/////*
////1. 추월하면 추월한 선수의 이름을 부름
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

/* 프로그래머스 추억점수
1. 사진속 사람의 이름(name)에 따라 점수(yearning)부여
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


/* 프로그래머스 당구연습
1. 항상 같은 위치의 공을 놓고 친다
2. 맞춰야 하는 공의 위치가 list에 존재

1. 입사각과 반사각이 같다 = 가까운 모서리와 만나는 점에서의 삼각형간의 비율이 같다
2. 
*/

//int solution(vector<vector<int>> targets) {
//    int answer = 0;
//
//    return answer;
//}
