//#include <iostream>
//#include <vector>
///*
//absolutes�� 1���� ũ�ų����� 1000���� ���ų����� ����
//sing�� ���̸� ��� �����̸� ����
//*/
//using namespace std;
//
//int solutions(vector<int> absolutes, vector<bool> signs)
//{
//    int answer = 0;
//    vector<int> count;
//    for (int i = 0; i < signs.size(); i++)
//    {
//        if (signs[i] != true)
//        {
//            answer -= absolutes[i];
//        }
//        else
//            answer += absolutes[i];
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<int> ab = { 4,7,9 };
//    vector<bool> s = { 1,0,1 };
//    cout << solutions(ab,s);
//}