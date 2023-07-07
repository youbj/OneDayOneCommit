//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//vector<int> solution(int brown, int yellow) {
//    vector<int> answer;
//    int sum = brown + yellow;
//    for (int i = 3; i < sum; i++) {
//        if (sum % i == 0) {           
//            int a = sum / i;
//            if ((i - 2) * (a - 2) == yellow&&sum- (i - 2) * (a - 2)==brown) {
//                answer.push_back(a);
//                answer.push_back(i);
//                break;
//            }
//        }
//
//    }
//
//    return answer;
//}

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

vector<int> solution(int n) {
    int ss = sum(n);
    cout << ss << endl;
    vector<int> answer(ss,0);
    int k = 2;
    answer[0] = 1;

    for (int i = 1; k <= n; i=i+k-1) {
        answer[i] = k;
        ++k;

        if (k > n) {
            for (int j = i + 1; j < i + n ; j++) {
                answer[j] = k;
                ++k;
            }
        }
    }

    

    for (int i = 0; i < ss; i++) {
        cout << i << ", ";
    }
    cout << endl;
    for (int i = 0; i < ss; i++) {
        cout<<answer[i]<<", ";
    }
    return answer;
}

int main() {
    solution(7);
}
