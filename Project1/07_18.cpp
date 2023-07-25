//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//string sample = "987654321";
//
//int solution(vector<int> priorities, int location) {
//    int answer = 0;
//    int num = priorities[location];
//    map<int, int> m;
//    for (int i = 0; i < priorities.size(); i++) {
//        m.insert(make_pair(priorities[i], i));
//        if (i > location && priorities[i]>num) {
//            answer++;
//        }
//    }
//
//
//    return answer;
//}

///*
//n= 진법 / t= answer의 길이 / m =참가자 / p= 튜브의 순서
//*/
//#include <string>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//
//string convertToBase(int number, int base) {
//    const string digits = "0123456789ABCDEF";
//
//    if (number < base) {
//        return string(1, digits[number]);
//    }
//    else {
//        return convertToBase(number / base, base) + digits[number % base];
//    }
//}
//
//string solution(int n, int t, int m, int p) {
//    string answer = "";
//    string ans = "";
//    stack<int> stk;
//    int size = t * m;
//    int i = 1;
//
//    while (ans.length() < size) {
//        ans += convertToBase(i, n);
//        ++i;
//
//        if (ans.length() > size) {
//            for (int j = ans.length() - 1; j == size-1; --j) {
//                ans.pop_back();
//            }
//        }      
//    }
//    
//    for (int i = 0; i < size; i++) {
//        if (i % m == p - 1)
//            answer.push_back(ans[i]);
//    }
//
//    return answer;
//}

//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n) {
//    int answer = 1;
//    int num = n / 2;
//    
//    for (int i = 1; i <= num; i++) {
//        int sum = 0;
//        for (int j = i; j < n; j++) {
//            sum += j;
//            if (sum == n)
//            {
//                ++answer;
//                break;
//            }
//            else if (sum > n)
//                break;
//        }
//    }
//
//    return answer;
//}