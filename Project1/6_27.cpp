#include <iostream>

#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
using namespace std;

///*
//1. 트럭의 무게 truck_weghts = 1이상, 10000이하
//2. 다리의 하중 weight= 1이상 10000이하
//3. 다리의 길이 bridge_length= 1이상 10000이하
//
//1. vector에 들어있는 순서대로 입장
//2. queue에 저장되는 모든 요소의 합은 weight를 넘으면 안됨
//3. bridge_length만큼 지나면 que에서 삭제
//*/
//
//int solution(int bridge_length, int weight, vector<int> truck_weights) {
//    int answer = 0;
//    int current_weight = 0;
//    queue<int> bridge;
//
//    for (int i = 0; i < bridge_length; i++) {
//        bridge.push(0); 
//    }
//
//    int index = 0;
//    while (!bridge.empty()) {
//        answer++;
//        current_weight -= bridge.front();
//        bridge.pop();
//
//        if (index < truck_weights.size()) {
//            if (current_weight + truck_weights[index] <= weight) {
//                bridge.push(truck_weights[index]);
//                current_weight += truck_weights[index];
//                index++;
//            }
//            else {
//                bridge.push(0);
//            }
//        }
//    }
//
//    return answer;
//}

//vector<int> solution(vector<int> prices) {
//    vector<int> answer;
//
//    for (int i = 0; i < prices.size()-1; i++) {
//        answer.push_back(1);
//    }
//
//    for (int i = 1; i < prices.size()-1;i++) {
//        int buf = prices[i];
//        for (int j = 0; j < i; j++) {
//            if (prices[j] <= buf)
//                ++answer[j];
//        }
//        if (i != prices.size() - 1) {
//            if (answer[i] == 0) ++answer[i];
//        }
//    }
//    answer.push_back(0);
//    return answer;
//}

//vector<int> solution(vector<int> prices) {
//    int n = prices.size();
//    vector<int> answer(n);
//
//    stack<int> s;
//    for (int i = 0; i < n; i++) {
//        while (!s.empty() && prices[s.top()] > prices[i]) {
//            cout << " 80번줄 " << s.top() << endl;
//            int top = s.top();
//            s.pop();
//            answer[top] = i - top;
//        }
//        s.push(i);
//        cout <<" 85번줄 " << s.top() << endl;
//    }
//
//    while (!s.empty()) {
//        int top = s.top();
//        s.pop();
//        answer[top] = n - top - 1;
//    }
//
//    return answer;
//}
//
//
//int main() {
//    vector<int> v = { 1, 2, 3, 2, 1 };
//    for (auto i : solution(v)) {
//        cout << i << "  ";
//    }
//
//}