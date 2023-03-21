#include <iostream>
#include <string>
#include  <vector>
#include <algorithm>

using namespace std;

//string solution(string s) {
//    string answer = "";
//    for (int i = 0; i < s.length(); i++) {
//        if (i == 0 || s[i - 1] == ' ') {
//            if (s[i] >= 'a' && s[i] <= 'z') {
//                s[i] += 49;
//            }
//        }
//        else {
//            if (s[i] >= 'A' && s[i] <= 'Z')
//                s[i] -= 49;
//        }
//    }
//    answer = s;
//    return answer;
//}
//
//int gcd(int a, int b){
//    int m = a % b;
//
//    while (m > 0)
//    {
//        a = b;
//        b = m;
//        m = a % b;
//    }
//    return b;
//}
//int solution(vector<int> arrayA, vector<int> arrayB) {
//    int answer = 0;
//    int midA = gcd(arrayA[0], arrayA[1]);
//
//    for (int i = 2; i < arrayA.size(); i++) {
//        int m=0;
//        if (arrayA[i] % midA != 0) {
//            m = gcd(midA, arrayA[i]);
//            if (m == arrayA[i]) {
//                midA = 0;
//                break;
//            }
//        }
//    }
//
//    int midB = gcd(arrayB[0], arrayB[1]);
//    for (int i = 2; i < arrayB.size(); i++) {
//        int m = 0;
//        if (arrayB[i] % midA != 0) {
//            m = gcd(midA, arrayB[i]);
//            if (m == arrayB[i]) {
//                midB = 0;
//                break;
//            }
//        }
//    }
//
//    if (midA == 0 && midB == 0)
//        answer = 0;
//    else {
//        for (int i = 0; i < arrayA.size(); i++) {
//            if (arrayA[i] % midB == 0) {
//                midB = 0;
//                break;
//            }
//        }
//        for (int i = 0; i < arrayB.size(); i++) {
//            if (arrayB[i] % midA == 0) {
//                midA = 0;
//                break;
//            }
//        }
//        answer = midA > midB ? midA : midB;
//    }
//    return answer;
//}
//
//int main() {
//    vector<int> arrayA; 
//    arrayA.push_back(10);
//    arrayA.push_back(17);
//
//    vector<int> arrayB;
//    arrayB.push_back(5);
//    arrayB.push_back(20);
//
//    cout<<solution(arrayA, arrayB);
//}