///*카카오 비밀지도*/
//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
//    vector<string> answer;
//    vector<vector<int>>v1;
//    vector<int>vv1;
//    vector<vector<int>>v2;
//    vector<int>vv2;
//    string sum;
//    for (int i = 0; i < n; i++)
//    {
//        int a1 = arr1[i], a2 = arr2[i];
//        vv1 = { };
//        vv2 = { };
//
//        for (int j = 0; j < n; j++)
//        {
//            vv1.push_back(a1 % 2);
//            a1 /= 2;
//            vv2.push_back(a2 % 2);            
//            a2 /= 2;
//        }
//        reverse(vv1.begin(), vv1.end());
//        reverse(vv2.begin(), vv2.end());
//        v1.push_back(vv1);
//        v2.push_back(vv2);
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        sum = "";
//        for (int j = 0; j < n; j++)
//        {
//            if (v1[i][j] + v2[i][j] != 0)
//                sum += "#";
//            else
//                sum += " ";
//        }
//        answer.push_back(sum);
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<int>a = { 9, 20, 28, 18, 11 };
//    vector<int>a1 = { 30, 1, 21, 17, 28 };
//    int n = 5;
//    solution(n, a, a1);
//}