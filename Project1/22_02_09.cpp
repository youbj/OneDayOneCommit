/*
프로그래머스 월간코드 첼린지3진법 뒤집기
*/

//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//int solution(int n) {
//    int answer = 0;
//    vector<int> num;
//    int a;
//    while (1)
//    {        
//        if (n < 3)
//        {
//            num.push_back(n);
//            break;
//        }
//        num.push_back(n % 3);
//        n /= 3;
//
//    }
//    for (int i = 0; i < num.size(); i++)
//    {
//        a = num[num.size()-1 - i];
//        answer += a*pow(3, i);       
//    }
//    return answer;
//}
//
//int main()
//{
//    int n = 1;
//    solution(n);
//
//}
