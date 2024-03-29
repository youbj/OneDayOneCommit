///*1월12일 백준그리드알고리즘 "잃어버린 괄호"*/
//
///*
//문제
//1. 양수와 +-를 가지고 작성한 식에 적절한 괄호를 이용하여
//   주어진 식의 값의 최솟값을 구하라
//*/
//
///*
//입력과 출력
//1. 입력을 받는 수는 50이하이고 최대 5자리의 수로 표현을 한다
//2. 처음과 마지막은 숫자이며 수는 0으로 시작할 수 있다.
//3. 출력은 오직 최솟값만 출력한다
//*/
//
///*
//내가 생각한 풀이법
//1. 먼저 첫번째로 들어오는 식을 문자열 배열로 할당
//2. 문자열 배열의 요소중 '-'가 나올경우 뒤의 모든 수를 -로 취급하여 처리
//*/
//
///*
//처리중 의문사항
//1. 문자열로 입력받을 수를 어떻게 정수로 형변환을 하여 나타낼것인가?
//   -> cstdlib의 atoi의 함수를 이용하면 정수형으로 변환 가능하다. -> cstdlib에 atio없음.
//   -> 정답코드를 본결과 string헤더파일에 atoi함수가 있는걸 알았다.
//2. 0으로 시작하는 수의 경우 어떻게 처리해야하는가? // 예외로두고 먼저해보자
//   -> - 또는 + 가 나온자리 인덱스에 -2의 값이 0일경우 -1의값을 정수화하여 계산한다
//        -> 그럴 필요없이 string의 특성을 이용하여 값의 대입을 한다.
//*/
//
///*
//1시간 고민한결과 손을 못쓸도라 정답코드를 가져와 분석하였다..
//1. bool식을 활용하여 풀이법 2번을 활용할 수 있었다.
//2. string에 더욱 많은 용도가 있었다.
//*/
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//    string input; // 식 입력을 문자열로 받음
//
//    cin >> input;
//
//    int result = 0; // 결과 도출을 위한 값
//    string num; // char의 경우에는 아스키코드값의 덧셈으로 나오므로 string을 이용하여 덧셈하여 두자릿수를 생성
//    bool isMinus = false;
//
//    for (int i = 0; i <= input.size(); i++) // +와-를 찾기위한 반복문, input.size는 strlen(input)으로 변경가능
//    {
//
//        if (input[i] == '-' || input[i] == '+' || i == input.size())// 배열의요소가 +,-또는 끝에 닿았을 때, 
//        {
//            if (isMinus) {// -를 인지하는 isMinus가 true일 경우
//                result -= stoi(num); // 결과값에 이전 수 대입
//                num = ""; // num값 초기화
//            }
//            else {// isMinus가 false일 경우
//                result += stoi(num);
//                num = "";
//            }
//        }
//        else {// 배열의 요소가 +,-,마지막이 아닐경우
//            num += input[i]; // 이렇게 할 경우 의문사항2번을 처리가능
//                             // 그 이유는 0으로시작하는 수를 더해도 같기때문
//        }
//
//        if (input[i] == '-') {
//            isMinus = true;
//        }
//    }
//
//    cout << result;
//}
//
///*
//55 - 50 + 40일경우
//num에 55입력 -> -이고 isMinus가 false이므로 result에 result + 55대입, num 초기화 -> -이므로 isMinus가 true로 변경
//-> num에 50대입 -> +이고 isMinus가 true이므로 result-40 대입,result = 15 , num 초기화 -> -이고 isMinus가 false이므로
//result-=40이므로 result= -35 
//*/ 
