/*숫자의 표현*/
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n) {
//    int answer = 0;
//
//    for (int i = 1; i <= n; i++) {
//        int sum = 0;
//        for (int j = i; j <= n; j++) {
//            sum += j;
//            if (sum == n) {
//                answer++;
//                break;
//            }
//            else if (sum > n) {
//                break;
//            }
//        }
//    }
//
//    return answer;
//}

/*다음 큰 숫자*/

//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <iostream>
//using namespace std;
//
///*
//해당 코드가 틀린 이유 - 10000과 같은 경우 해결 불가
//*/
//int solution(int n) {
//    int answer = 0;
//    int count = 0;
//    string buf = "";
//    while (n > 0) {
//        string s = to_string(n % 2);
//        if (s == "1") ++count;
//        buf += s;
//        n /= 2;
//    }
//    reverse(buf.begin(), buf.end());
//    count -= 2;
//    int size = buf.length() - count;
//    int check = 0;
//
//    for (int i = 1; i < buf.length(); i++) {
//        if (buf[i] == '1') {
//            if (i== 1) {
//                buf[1] = '0';
//                buf.push_back('1');
//            }
//            buf[i - 1] = '1';
//            check = i;
//            break;
//        }
//        if (i == buf.length() - 1)
//            return n * 2;
//    }
//
//    for (int i = check; i < buf.length(); i++) {
//        if (i < size) {
//            buf[i] = '0';
//        }
//        else {
//            buf[i] = '1';
//        }
//    }
//    check = 0;
//
//    for (int i = buf.length() - 1; i >= 0; i--) {
//        if (buf[i] == '1')
//            answer += pow(2, check);
//        ++check;
//    }
//    return answer;
//}
//
//int check(int n) {
//    int count = 0;
//    while (n > 0) {
//        if (n % 2 == 1)++count;
//        n /= 2;
//    }
//    return count;
//}
//
//int solution(int n) {
//    int answer = n + 1;
//    int count = check(n);
//    
//    while (1) {
//        if (check(answer) == count) break;
//        else ++answer;
//    }
//
//    return answer;
//}
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int check(int n) {
//    int count = 0;
//    while (n > 0) {
//        n &= (n - 1);
//        count++;
//    }
//    return count;
//}
//
//int solution(int n) {
//    int onesCount = check(n);
//    do {
//        n++;
//    } while (check(n) != onesCount);
//    return n;
//}


/*멀리뛰기*/

//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int n) {
//    vector<long long>v(n + 1, 0);
//    v[1] = 1;
//    v[2] = 2;
//
//    for (int i = 3; i <= n; i++) {
//        v[i] = (v[i - 1] + v[i - 2]) % 1234567;
//    }
//    return v[n];
//}

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


vector<int> solution(vector<string> info, vector<string> query) {
    vector<int> answer;
    vector<vector<string>> info_i;
    vector<vector<string>> info_query;

    for (int i = 0; i < info.size(); i++) {
        stringstream ss(info[i]);
        string str;
        vector<string>v;
        while (ss >> str) {
            v.push_back(str);
            cout << str<<"  ";
        }
        info_i.push_back(v);
        cout << endl;
    }

    for (int i = 0; i < query.size(); i++) {
        stringstream ss(query[i]);
        string str;
        vector<string>v;
        while (ss >> str) {
            if (str == "and") continue;
            v.push_back(str);
            cout << str << "  ";
        }
        info_query.push_back(v);
        cout << endl;
    }
    return answer;
}

int main() {
    solution({ "java backend junior pizza 150","python frontend senior chicken 210","python frontend senior chicken 150","cpp backend senior pizza 260","java backend junior chicken 80","python backend senior chicken 50" },
        { "java and backend and junior and pizza 100","python and frontend and senior and chicken 200","cpp and - and senior and pizza 250","- and backend and senior and - 150","- and - and - and chicken 100","- and - and - and - 150" });
}