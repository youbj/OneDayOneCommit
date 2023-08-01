//#include <string>
//#include <vector>
//
//using namespace std;
//
//void hanoi(int n, int from, int to, int via, vector<vector<int>>& answer) {
//    if (n == 1) {
//        answer.push_back({ from, to });
//    }
//    else {
//        hanoi(n - 1, from, via, to, answer);
//        answer.push_back({ from, to });
//        hanoi(n - 1, via, to, from, answer);
//    }
//}
//
//vector<vector<int>> solution(int n) {
//    vector<vector<int>> answer;
//    hanoi(n, 1, 3, 2, answer);
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//int solution(int n, vector<vector<int>> wires) {
//    int answer = -1;
//    map<int, vector<int>>m;
//    
//
//    for (int i = 0; i < wires.size(); i++) {
//        if (m.find(wires[i][0]) != m.end()) {
//            m[wires[i][0]].push_back(wires[i][1]);
//        }
//        m.insert(make_pair(wires[i][0], wires[i][1]));
//    }
//
//    vector<int> v(n,0);
//
//    return answer;
//}