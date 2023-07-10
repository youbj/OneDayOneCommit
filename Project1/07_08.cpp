//#include <iostream>
//
//#include <string>
//#include <vector>
//#include <queue>
//#include <functional>
//using namespace std;
//
//int solution(vector<int> scoville, int K) {
//    int answer = 0;
//    priority_queue <int,vector<int>,greater<int>> que;
//    for (int i = 0; i < scoville.size(); i++) {
//         que.push(scoville[i]);
//    }
//
//    while (que.top() <= K) {
//        if (que.size() == 1) {
//            answer = -1;
//            break;
//        }
//        int a = que.top();
//        que.pop();
//        int b = que.top();
//        que.pop();
//        int c = a + (b * 2);
//        que.push(c);
//        
//        ++answer;
//    }
//
//    return answer;
//}
//
//int main() {
//    vector<int>v = { 1,2,3,9,10,12 };
//    int k = 7;
//    cout << solution(v, k);
//}