//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//
///*
//1. n은 2이상 10이하
//2. 단어 배열인 words는 n이상 100이하
//3. 단어의 요소는 50자 이하
//4. return 은 [번호, 차례]
//
//1. 단어배열과 인원 수는 주어진다는 점 유의
//2. n으로 나눴을 때 몫은 차례 -1, 나머지는 몫 -1
//
//
//반례
//n의 범위?
//*/
//
//vector<int> solution(int n, vector<string> words) {
//    vector<int> answer;
//
//    for (int i = 1; i < words.size(); i++) {
//        
//        // 끝 알파벳과 다른 알파벳이 나오는 경우
//        if (words[i - 1].back() != words[i].front()) {
//            answer.push_back(i % n + 1);
//            answer.push_back(i / n + 1);
//            return answer;
//        }
//        else // 동일한 단어를 입력했을 경우
//        {
//            for (int j = 0; j < i; j++) {
//                if (words[i].front() == words[j].front()) {
//                    if (words[i] == words[j]) {
//                        answer.push_back(i % n + 1);
//                        answer.push_back(i / n + 1);
//                        return answer;
//                    }
//                    else
//                        continue;
//                }
//                else continue;
//            }
//        }
//    }
//
//    // 아무런 문제 없이 완료되었을 경우
//    if (answer.size() == 0) {
//        answer.push_back(0);
//        answer.push_back(0);
//    }
//
//    return answer;
//}
//
//int main() {
//    int n = 2;
//    vector<string> w{ "ac", "cac","ca","ac","cac"};
//
//    vector <int> s = solution(n, w);
//
//    cout << s[0] << "   " << s[1];
//}