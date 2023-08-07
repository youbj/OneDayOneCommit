///*현대 모비스 에어컨*/
//
///*
//현재온도 = 실외온도
//희망온도 -> 조절가능
//실내온도가 희망온도와 같아질때까지 1분마다 온도 1씩 변경
//에어컨 끄면 실내온도가 실외온도와 같아질 때까지 1분마다 온도 1 변경
//희망온도까지 전력 a만큼 소비 
//희망온도에선 유지를 위해 b만큼 전력 소비
//*/
///*
//a가 b보다 크면 유지가 유리, 반대면 온도 올리는게 유리
//*/
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int temperature, int t1, int t2, int a, int b, vector<int> onboard) {
//    int answer = 0;
//    int temp = temperature;
//    if (temp > t2) {
//
//    }
//    else if(temp<t1){
//
//    }
//    else {
//        return 0;
//    }
//    for (int i = 0; i < onboard.size(); i++) {
//        if (temp < t1) {
//            answer += a;
//            --temp;
//        }
//        else if (temp > t2) {
//            answer += a;
//            ++temp;
//        }
//        else {
//            if (a > b) {
//
//            }
//            else {
//
//            }
//        }
//    }
//
//    return answer;
//}


//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int solution(int n, long long l, long long r) {
//    int answer = 0;
//    string s = "1";
//
//    for (int i = 0; i < n; i++) {
//        string str = "";
//        for (int j = 0; j < s.length(); j++) {
//            if (s[j] == '0') {
//                str += "00000";
//            }
//            else
//                str += "11011";
//
//            if (str.length() > r)
//                break;
//        }
//        s = str;
//    }
//
//    for (long long int i = l - 1; i < r; i++) {
//        if (s[i] == '1')
//            ++answer;
//    }
//
//    return answer;
//}
//
//int main() {
//    solution(2, 4, 17);
//}