///*2020카카오 인턴쉽 키패드 누르기*/
//
///*
//엄지손가락만 이용,상하좌우 거리는 1
//처음 위치는 왼손 엄지는 7 밑 *, 오른손 엄지 9밑 #
//왼손은 1 4 7 오른손으로 3 6 9
//가운데 0 2 5 8은 현재 손가락중 더 가까운 쪽이 이동, 같을경우 주 손에 따라 이동
//*/
//
///*
//numbers는 1≤numbers≤1000
//hand는 left,right 둘 중 하나
//*/
//
///*
//키패드
//1  2  3
//4  5  6
//7  8  9 
//*  0  #
//*/
//
///*
//가운데는 숫자를 비교하여 관리
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
//            cout << i + 1 << "번째 : " << "rp " << rp << " lp " << lp << endl;
//            continue;
//
//        }
//        if (check % 3 == 1)
//        {
//            answer += "L";
//            lp = check;
//            cout << i + 1 << "번째 : " << "rp " << rp << " lp " << lp << endl;
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
//            cout <<i+1 << "번째 : " << "rp " << rp << " lp " << lp << " R " << chR << " L " << chL << endl;
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