///*22_02_10_���α׷��ӽ�_���깮��*/
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
//    vector<int> d = { 1,3,2,5,4 };//�μ�����û�ݾ�
//    int b = 9; //������ ����
//    solution(d, b);
//}