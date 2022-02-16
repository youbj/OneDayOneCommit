///*22_02_10_프로그래머스_예산문제*/
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int solution(vector<int> d, int budget) {
//    int answer = 0;
//    int count = 0;
//    sort(d.begin(), d.end());
//
//    for (int i = 0; i < d.size(); i++)
//    {
//        count += d[i];
//        if (count > budget)
//        {
//            break;
//        }        
//        answer++;
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<int> d = { 1,3,2,5,4 };//부서별신청금액
//    int b = 9; //정해진 예산
//    solution(d, b);
//}