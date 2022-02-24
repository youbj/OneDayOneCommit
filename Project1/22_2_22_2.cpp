//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <string>
//using namespace std;
//
//int solution(int n, vector<int> lost, vector<int> reserve) 
//{
//    int answer = n - lost. size();
//    vector<int> lostnum;
//    for (int i = 0; i < lost.size(); i++)
//    {
//        if (find(reserve.begin(), reserve.end(), lost[i]) == reserve.end())
//        {
//            lostnum.push_back(lost[i] - 1);
//            lostnum.push_back(lost[i]);
//            lostnum.push_back(lost[i] + 1);
//        }
//        else
//        {
//            answer++;
//            reserve.erase(find(reserve.begin(), reserve.end(), lost[i]));
//        }
//    }
//
//    for (int i = 0; i < reserve.size(); i++)
//    {
//        for (int j = 0; j < lostnum.size(); j++)
//        {
//            if (lostnum[j] == reserve[i])
//            {
//                answer++;
//                break;
//            }
//        }
//    }
//
//    if (answer > n)
//        answer = n;
//    cout << answer;
//    return answer;
//}
//
//int main()
//{
//    int n = 5;
//    vector<int> a = { 2,3,5 };
//    vector<int> b = { 2 };
//    solution(n, a, b);
//}
//
