///*���α׷��ӽ� ����Ž�� ���ǰ��*/
//
//
///*answers�� �ִ� 10,000������ ����*/
///*������ ������ �л�����
//1�� - 1 2 3 4 5
//2�� - 2 1 2 3 2 4 2 5
//3�� - 3 3 1 1 2 2 4 4 5 5 
//�̰� answers�� ��ҿ� ���Ͽ� ���
//*/
///* 
//��� 1.
//�ݺ���� 
//������ ����ŭ�� �ݺ��� ��� ó���ؾ� �ϴ°�
//*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> answers) {
//    vector<int> answer;
//    vector<int>one = { 1,2,3,4,5 };
//    vector<int>two = { 2,1,2,3,2,4,2,5};
//    vector<int>three = { 3,3,1,1,2,2,4,4,5,5 };
//    vector<int> a = { 0,0,0 };
//    for (int i = 0; i < answers.size(); i++)
//    {
//        if (one[i % 5] == answers[i])
//        {
//            a[0] += 1;
//            continue;
//        }
//    }
//    for (int i = 0; i < answers.size(); i++)
//    {
//        if (two[i % 8] == answers[i])
//        {
//            a[1] += 1;
//            continue;
//        }
//    }
//    for (int i = 0; i < answers.size(); i++)
//    {
//        if (three[i % 10] == answers[i])
//        {
//            a[2] += 1;
//            continue;
//        }       
//    }
//
//    //if (a[0] > a[1])
//    //{
//    //    if (a[0] > a[2])
//    //        answer.push_back(1);
//    //    else if(a[0]<a[2])
//    //        answer.push_back(3);
//    //    else
//    //    {
//    //        answer.push_back(1);
//    //        answer.push_back(3);
//    //    }
//
//    //}
//    //else if (a[0] < a[1])
//    //{
//    //    if (a[1] > a[2])
//    //        answer.push_back(2);
//    //    else if (a[1] < a[2])
//    //        answer.push_back(3);
//    //    else
//    //    {
//    //        answer.push_back(2);
//    //        answer.push_back(3);
//    //    }
//    //}
//    //else
//    //{
//    //    if (a[1] > a[2])
//    //    {
//    //        answer.push_back(1);
//    //        answer.push_back(2);
//    //    }
//    //    else if (a[1] < a[2])
//    //        answer.push_back(3);
//    //    else
//    //    {
//    //        answer.push_back(1);
//    //        answer.push_back(2);
//    //        answer.push_back(3);
//    //    }
//    //}
//
//    int Max = max(max(a[0], a[1]), a[2]);
//    for (int i = 0; i < 3; i++)
//    {
//        if (a[i] == Max)
//            answer.push_back(i + 1);
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<int> a = { 1,2,3,4,5 };
//    solution(a);
//}