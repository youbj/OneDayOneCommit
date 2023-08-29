/*행렬의 곱*/
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
//    int n = arr1.size();
//    int m = arr2[0].size();
//    vector<vector<int>> answer;
//    vector<vector<int>> s_arr2;
//
//    for (int i = 0; i < n; i++) { // i는 arr1
//        vector<int>sum;
//        for (int j = 0; j < m; j++) { // j는 s_arr2     
//            int s = 0;
//            for (int k = 0; k < arr1[i].size(); k++) {
//                s += arr1[i][k] * arr2[k][j];
//            }
//            sum.push_back(s);
//        }
//        answer.push_back(sum);
//    }
//    
//    return answer;
//}

#include <string>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int solution(int n, vector<int> cores) {
    int answer = 0;
    int size = n - cores.size();
    priority_queue<pair<int, int>, pair<int, int>, greater<>>que;
    for (int i = 0; i < cores.size(); i++)
        que.push(make_pair(1, cores[i]));
    pair<int, int>pa;
    for (int i = 0; i < n; i++) {
        pa = que.top();
        que.pop();
        ++pa.first;
        que.push(pa);
    }
    return pa.second;
}

#include <iostream>

int main() {
    cout<<solution(6, { 1,2,3 });
}