///*프로그래머스*/
//
///*신고결과 받기*/
//
///*각 유저 1명당 한번에 1명 신고가능 단 중복 불가능
//k번 이상 신고받을 시 아이디 정지
//특정 아이디가 신고 받아 정지시 신고한 모든 아이디에게 처리결과 메일 전송 ==> 결과값 아이디 몇명중 몇명이 정지당했나
//*/
//#include <string>
//#include <vector>
//#include <map>
//#include <set>
//#include <sstream>
//
//using namespace std;
//
//vector<int> solution(vector<string> id_list, vector<string> report, int k) 
//{
//    vector<int> answer(id_list.size(), 0);
//
//    map<string, int> idx_map;
//    for (int i = 0; i < id_list.size(); ++i) idx_map[id_list[i]] = i; // 멤버 index 저장
//
//    map<string, set<string>> report_map;
//    stringstream ss;
//    for (auto rep : report) 
//    {
//        ss.str(rep);
//        string first, second; ss >> first >> second; // 문자열 parsing
//
//        /*
//            신고 정보 저장
//            first가 second를 신고 -> second의 set에는 second를 신고한 사람들
//        */
//        report_map[second].insert(first);
//
//        ss.clear();
//    }
//
//    for (auto it : report_map) 
//    { // it.second = set<string>
//        if (it.second.size() >= k) 
//        { // 어떤 멤버를 신고한 사람이 k명 이상이면
//            for (auto set_it : it.second) 
//            { // 신고한 사람들의
//                int idx = idx_map[set_it];
//                answer[idx]++; // count 증가 (메일 전송)
//            }
//        }
//    }
//
//    return answer;
//}