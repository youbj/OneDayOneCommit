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
//    priority_queue <int, vector<int>, greater<int>> que;
//    for (int i = 0; i < scoville.size(); i++) {
//        que.push(scoville[i]);
//    }
//    if (que.top() == K)
//        return 1;
//
//    while (que.top() < K) {
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


//#include <iostream>
//
//#include <string>
//#include <vector>
//#include <queue>
//#include <functional>
//#include <cstdio>
//#include <deque>
//
//using namespace std;
//
//
//vector<int> solution(vector<string> operations) {
//
//    priority_queue<int, vector<int>, greater<int>> up_order;
//    priority_queue<int, vector<int>, less<int>> down_order;
//
//    int size = operations.size();
//    int check_I = 0, check_D = 0;
//    int count = 0;
//    for (int i = 0; i < size; i++) {
//        string s = operations[i];
//        char c = s[0];
//        int num;
//
//        switch (c) {
//        case 'I':
//            num = stoi(s.substr(2));
//            up_order.push(num);
//            down_order.push(num);
//            count++;
//            ++check_I;
//            break;
//        case 'D':
//            if (count < 1)
//                break;
//
//            if (s[2] == '1') {
//                cout << i<<" 번째:  pop_up: " << down_order.top() << endl;
//                down_order.pop();
//            }
//            else {
//                cout << i << " 번째: pop_down: " << up_order.top() << endl;
//                up_order.pop();
//            }
//
//            --count;
//            ++check_D;
//            break;
//        }
//        if (count == 0) {
//            while (!up_order.empty()) {
//                up_order.pop();
//            }
//            while (!down_order.empty()) {
//                down_order.pop();
//            }
//        }
//    }
//    if (check_I <= check_D) {
//        return { 0,0 };
//    }
//    while (!up_order.empty()) {
//        cout << up_order.top() << " ";
//        up_order.pop();
//    }
//    cout << "\n\n";
//    while (!down_order.empty()) {
//        cout << down_order.top() << " ";
//        down_order.pop();
//    }
//
//    return {0,0/*up_order.top(),down_order.top()*/};
//}

