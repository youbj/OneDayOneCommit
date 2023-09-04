/*소수판별하기*/

//#include <iostream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include <cmath>
//using namespace std;
//
//string make_str(int n, int k) {
//    string str;
//    if (n / k == 0)
//        return to_string(n % k);
//    else {
//        str = to_string(n % k);
//        n /= k;
//        return make_str(n, k) + str;
//    }
//}
//
//int solution(int n, int k) {
//    int answer = 0;
//    string str = make_str(n, k);
//    stringstream ss(str);
//    string buf;
//    vector<string> v;
//
//    while (getline(ss, buf, '0')) {
//        if (buf == "1"||buf=="")
//            continue;
//        v.push_back(buf);
//    }
//
//    
//    for (int i = 0; i < v.size(); i++) {
//        bool check = true;
//        long long num = stol(v[i]) * 1LL;
//        for (int j = 2; j <= sqrt(num); j++) {
//            if (num % j == 0) {
//                check = false;
//                break;
//            }
//        }
//        if (check)
//            ++answer;
//        
//    }
//    return answer;
//}

/*n^2 배열 자르기*/

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int n, long long left, long long right) {
//    vector<int> answer;
//    vector<int> buf;
//    for (long long i = 1; i <= n; i++) {
//        for (long long j = 1; j <= n; j++) {
//            if (j <= i) buf.push_back(i);
//            else buf.push_back(j);
//        }
//    }
//
//    for (long long i = left;i<= right; i++) {
//        answer.push_back(buf[i]);
//    }
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(int n, long long left, long long right) {
//    vector<int> answer;
//
//    for (long long i = left; i <= right; i++)
//    {
//        int row = i / n;
//        int col = i % n;
//
//        answer.push_back(max(row, col) + 1);
//    }
//
//    return answer;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//#include <sstream>
//#include <algorithm>
//using namespace std;
//
//long long solution(string expression) {
//    long long answer = 0;
//    stringstream ss(expression);
//    vector<string>str;
//    vector<int> numbers;
//    vector<char> operators;
//    string s;
//    char ch;
//    while (ss >> ch) {
//        if (isdigit(ch)) {
//            ss.unget(); 
//            int num;
//            ss >> num;
//            numbers.push_back(num);
//        }
//        else if (ch == '+' || ch == '-' || ch == '*') {
//            operators.push_back(ch);
//        }
//    }
//
//
//    return abs(answer);
//}
//
//int main() {
//    solution("100-200*300-500+20");
//}

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    vector<int> num;
    num.push_back(numbers[0]);
    num.push_back(numbers[0]*-1);
    for (int i = 1; i < numbers.size(); i++) {
        vector<int>v;
        for (int j = 0; j < num.size(); j++) {
            v.push_back(num[j] + numbers[i]);
            if (num[j] - numbers[i] < 0)
                continue;
            v.push_back(num[j] - numbers[i]);
        }
        num = v;
        v.clear();
    }
    for (auto i : num) {
        cout << i << " ";
        if (i == target)
            ++answer;
    }
    return answer;
}

int main() {
    solution({ 1,1,1,1,1 }, 3);
}