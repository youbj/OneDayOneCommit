///*2020īī�� ���Ͻ� Ű�е� ������*/
//
///*
//�����հ����� �̿�,�����¿� �Ÿ��� 1
//ó�� ��ġ�� �޼� ������ 7 �� *, ������ ���� 9�� #
//�޼��� 1 4 7 ���������� 3 6 9
//��� 0 2 5 8�� ���� �հ����� �� ����� ���� �̵�, ������� �� �տ� ���� �̵�
//*/
//
///*
//numbers�� 1��numbers��1000
//hand�� left,right �� �� �ϳ�
//*/
//
///*
//Ű�е�
//1  2  3
//4  5  6
//7  8  9 
//*  0  #
//*/
//
///*
//����� ���ڸ� ���Ͽ� ����
//*/
//#include <iostream>
//#include <string>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//
//string solution(vector<int> numbers, string hand) 
//{
//    string answer = "";
//    int rp = 12, lp = 10;
//    int chR, chL;
//    int check;
//    for (int i = 0; i < numbers.size(); i++)
//    {
//        check = numbers[i];
//
//        if (check == 0)
//            check = 11;
//
//        if (check % 3 == 0)
//        {
//            answer += "R";
//            rp = check;
//            cout << i + 1 << "��° : " << "rp " << rp << " lp " << lp << endl;
//            continue;
//
//        }
//        if (check % 3 == 1)
//        {
//            answer += "L";
//            lp = check;
//            cout << i + 1 << "��° : " << "rp " << rp << " lp " << lp << endl;
//            continue;
//        }
//        if (check % 3 == 2)
//        {            
//            chR = abs(rp - check);
//            chL = abs(lp - check);
//
//            if (rp % 3 == 2)
//                chR = abs(chR - 2);
//            if (lp % 3 == 2)
//                chL = abs(chL - 2);
//
//            cout <<i+1 << "��° : " << "rp " << rp << " lp " << lp << " R " << chR << " L " << chL << endl;
//          
//            if (chR > chL)
//            {
//                answer += "L";
//                lp = check;
//            }
//            else if (chL > chR)
//            {
//                answer += "R";
//                rp = check;
//            }
//            else
//            {
//                if (hand == "left")
//                {
//                    answer += "L";
//                    lp = check;
//                }
//                else
//                {
//                    answer += "R";
//                    rp = check;
//                }
//            }
//            continue;
//        }
//    }
//    cout << answer;
//    return answer;
//}
//
//int main()
//{
//    vector<int> a = { 7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2 };
//    string b = "left";
//    solution(a, b);
//
//}