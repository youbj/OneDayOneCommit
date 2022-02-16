///* 프로그래머스 정렬 k번째수 */
//
//#include <algorithm>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//    vector<int> answer;
//    vector<int> tem;
//    int a;
//    for (int i = 0; i < commands.size(); i++)//0,1,2
//    {
//        tem = {};
//        for (int j = commands[i][0]-1; j < commands[i][1]; j++)//1,2,3,4
//        {
//            tem.push_back(array[j]);            
//        }
//        sort(tem.begin(), tem.end());
//        answer.push_back(tem[commands[i][2] - 1]);
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<int> arr = { 1, 5, 2, 6, 3, 7, 4 };
//    vector<vector<int>> com = { {2, 5, 3} ,{4, 4, 1},{1, 7, 3} };
//    solution(arr, com);
//}