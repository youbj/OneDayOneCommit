//#include <iostream>
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<double> solution(int k, vector<vector<int>> ranges) {
//    vector<double> answer;
//    vector<double> sizes;
//    int k1 = k;
//    while (k != 1) {
//        int n = k;
//        double s = 0.0;
//        if (n % 2 == 0) {
//            n /= 2;
//        }
//        else {
//            n = (n * 3) + 1;
//        }
//        s += abs(double(n - k) / 2);
//        s += double(n > k ? k : n);
//        sizes.push_back(s);
//        k = n;
//    }
//    
//    for (int i = 0; i < ranges.size(); i++) {
//        double ans = 0.0;
//        if (sizes.size() + ranges[i][1] < ranges[i][0]) {
//            answer.push_back(-1);
//            continue;
//        }
//
//        if (ranges[i][1] < -1 * k1 || k1 < ranges[i][0]) {
//            answer.push_back(-1);
//            continue;
//        }
//
//        for (int j = ranges[i][0]; j < sizes.size() + ranges[i][1]; j++) {
//            ans += sizes[j];
//        }
//        answer.push_back(ans);
//    }
//    return answer;
//}
//
