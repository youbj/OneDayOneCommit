#include <iostream>

#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
using namespace std;

///*
//1. Ʈ���� ���� truck_weghts = 1�̻�, 10000����
//2. �ٸ��� ���� weight= 1�̻� 10000����
//3. �ٸ��� ���� bridge_length= 1�̻� 10000����
//
//1. vector�� ����ִ� ������� ����
//2. queue�� ����Ǵ� ��� ����� ���� weight�� ������ �ȵ�
//3. bridge_length��ŭ ������ que���� ����
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
//            cout << " 80���� " << s.top() << endl;
//            int top = s.top();
//            s.pop();
//            answer[top] = i - top;
//        }
//        s.push(i);
//        cout <<" 85���� " << s.top() << endl;
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