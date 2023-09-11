/*n진수 게임*/

//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<string>numbers = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
//int count = 0;
//
//string change_number(int k, int n,int m,int p,int count) {
//    string ans = "";
//
//    string str = "";
//    while (k > 0) {
//        str = numbers[k%n] + str;
//        k /= n;
//    }
//
//    int i = 0;
//
//    for (i; i < str.length();i++) {
//        if ((i + count) % m == p)
//            ans += string(1, str[i]);
//    }
//
//    return ans;
//}
//
//string solution(int n, int t, int m, int p) {
//    string answer = "";
//    int k = 1;
//    int count = 0;
//    while (1) {
//        answer+=change_number(k,n,m,p,count);
//        if (answer.length() >= t) {
//            answer.substr(0, t);
//            break;
//        }
//    }
//    return answer;
//}
