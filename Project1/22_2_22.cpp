///*���α׷��ӽ�*/
//
///*�Ű��� �ޱ�*/
//
///*�� ���� 1��� �ѹ��� 1�� �Ű��� �� �ߺ� �Ұ���
//k�� �̻� �Ű���� �� ���̵� ����
//Ư�� ���̵� �Ű� �޾� ������ �Ű��� ��� ���̵𿡰� ó����� ���� ���� ==> ����� ���̵� ����� ����� �������߳�
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
//    for (int i = 0; i < id_list.size(); ++i) idx_map[id_list[i]] = i; // ��� index ����
//
//    map<string, set<string>> report_map;
//    stringstream ss;
//    for (auto rep : report) 
//    {
//        ss.str(rep);
//        string first, second; ss >> first >> second; // ���ڿ� parsing
//
//        /*
//            �Ű� ���� ����
//            first�� second�� �Ű� -> second�� set���� second�� �Ű��� �����
//        */
//        report_map[second].insert(first);
//
//        ss.clear();
//    }
//
//    for (auto it : report_map) 
//    { // it.second = set<string>
//        if (it.second.size() >= k) 
//        { // � ����� �Ű��� ����� k�� �̻��̸�
//            for (auto set_it : it.second) 
//            { // �Ű��� �������
//                int idx = idx_map[set_it];
//                answer[idx]++; // count ���� (���� ����)
//            }
//        }
//    }
//
//    return answer;
//}