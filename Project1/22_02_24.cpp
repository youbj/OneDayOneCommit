///*카카오 키패드 누르기*/
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
//        if (numbers[i] % 3 == 0)//키패드의 우측3개
//        {
//            answer += "R";
//            rp = numbers[i];
//            cout << "왼손 : " << lp << " 오른손 : " << rp <<" 입력 : R" << endl;
//            continue;
//        }//정상
//        if (numbers[i] % 3 == 1)//키패드의 좌측3개
//        {
//            answer += "L";
//            lp = numbers[i];
//            cout << "왼손 : " << lp << " 오른손 : " << rp << " 입력 : L" << endl;
//            continue;
//        }
//        /*--------------------------------------확실---------------------------------------------*/
//
//        if (numbers[i] % 3 == 2)// 키패드의 가운데
//        {
//            chR = abs(rp - numbers[i]);//오른손가락의 위치 절대값
//            chL = abs(lp - numbers[i]);//왼손가락의 위치 절대값           
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
//                cout << "왼손 : " << lp << " 오른손 : " << rp << " 입력 : L" << endl;
//            }
//            else if (abs(chR - chL) < 0)
//            {
//                answer += "R";
//                rp = numbers[i];
//                cout << "왼손 : " << lp << " 오른손 : " << rp << " 입력 : R" << endl;
//            }
//            else
//            {
//                if (hand == "left")
//                {
//                    answer += "L";
//                    lp = numbers[i];
//                    cout << "왼손 : " << lp << " 오른손 : " << rp << " 입력 : L" << endl;
//                }
//                else
//                {
//                    answer += "R";
//                    rp = numbers[i];
//                    cout << "왼손 : " << lp << " 오른손 : " << rp << " 입력 : R" << endl;
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
