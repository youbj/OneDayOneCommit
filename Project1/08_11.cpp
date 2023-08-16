
/*숫자블록*/
//#include <string>
//#include <vector>
//#include <iostream>
//#include <map>
//using namespace std;
//
//vector<int> solution(long long begin, long long end) {
//    int size = end - begin+1;
//    vector<int> vec(size , 0);
//    vector<int>answer;
//
//
//    for (long long i = begin+1; i <= end; i++) {
//        if (i % 2 == 0) {
//            vec[i - begin] = i / 2;
//        }
//        else {
//            if (i % 3 == 0) {
//                vec[i - begin] = i / 3;
//            }
//            else {
//                vec[i - begin] = 1;
//            }
//        }
//    }
//    
//    
//    return vec;
//}


//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//bool sort_check(pair<int, int>a, pair<int, int>b) {
//    if (a.first == b.first)
//        return a.second < b.second;
//    return a.first > b.first;
//}
//
//int solution(vector<int> priorities, int location) {
//    int answer = 0;
//    vector<pair<int, int>>vec;
//
//    for (int i = 0; i < priorities.size(); i++) {
//        vec.push_back(make_pair(priorities[i], i));
//    }
//    sort(vec.begin(), vec.end(),sort_check);
//    for (int j = 0; j < vec.size(); j++) {
//        cout << vec[j].second << "  ";
//    }
//
//    for (int j = 0; j < vec.size(); j++) {
//        if (vec[j].second == location) return j+1;
//    }
//
//}
//
//int main() {
//    cout << solution({ 1, 1, 9, 1, 1, 1 }, 2);
//}