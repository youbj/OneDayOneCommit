///*īī�� Ű�е� ������*/
//
//#include <string>
//#include <vector>
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//string solution(vector<int> numbers, string hand)
//{
//    string answer = "";
//    int rp = 10, lp = 11;
//    int chR, chL;
//    for (int i = 0; i < numbers.size(); i++)
//    {
//        if (numbers[i] == 0)
//            numbers[i] = 11;
//
//        if (numbers[i] % 3 == 0)//Ű�е��� ����3��
//        {
//            answer += "R";
//            rp = numbers[i];
//            cout << "�޼� : " << lp << " ������ : " << rp <<" �Է� : R" << endl;
//            continue;
//        }//����
//        if (numbers[i] % 3 == 1)//Ű�е��� ����3��
//        {
//            answer += "L";
//            lp = numbers[i];
//            cout << "�޼� : " << lp << " ������ : " << rp << " �Է� : L" << endl;
//            continue;
//        }
//        /*--------------------------------------Ȯ��---------------------------------------------*/
//
//        if (numbers[i] % 3 == 2)// Ű�е��� ���
//        {
//            chR = abs(rp - numbers[i]);//�����հ����� ��ġ ���밪
//            chL = abs(lp - numbers[i]);//�޼հ����� ��ġ ���밪           
//            if (rp % 3 == 2)
//                chR = abs(chR - 2);
//            if (lp % 3 == 2)
//                chL = abs(chL - 2);
//
//
//
//            if (abs(chR - chL) > 0)
//            {
//                answer += "L";
//                lp = numbers[i];
//                cout << "�޼� : " << lp << " ������ : " << rp << " �Է� : L" << endl;
//            }
//            else if (abs(chR - chL) < 0)
//            {
//                answer += "R";
//                rp = numbers[i];
//                cout << "�޼� : " << lp << " ������ : " << rp << " �Է� : R" << endl;
//            }
//            else
//            {
//                if (hand == "left")
//                {
//                    answer += "L";
//                    lp = numbers[i];
//                    cout << "�޼� : " << lp << " ������ : " << rp << " �Է� : L" << endl;
//                }
//                else
//                {
//                    answer += "R";
//                    rp = numbers[i];
//                    cout << "�޼� : " << lp << " ������ : " << rp << " �Է� : R" << endl;
//                }
//            }
//            continue;
//        }
//    }   
//    return answer;
//}
//
//int main()
//{
//    vector<int> v = { 1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5 };
//    string s = "right";
//    solution(v, s);
//}
