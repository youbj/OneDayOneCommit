///*프로그래머스 해시 완주하지못한 선수*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////string solution(vector<string> participant, vector<string> completion) {
////    string answer = "";
////    for (int i = 0; i < participant.size(); i++)
////    {       
////        if (find(completion.begin(), completion.end(), participant[i]) == completion.end())
////            answer = participant[i];
////        else
////            completion.erase(find(completion.begin(), completion.end(), participant[i]));
////    }
////    return answer;
////}
//
//string solution(vector<string> participant, vector<string> completion) {
//    string answer = "";
//    sort(participant.begin(), participant.end());
//    sort(completion.begin(), completion.end());
//
//    for (int i = 0; i < participant.size(); i++)
//    {
//        if (participant[i] != completion[i])
//        {
//            answer = participant[i];
//            break;
//        }
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<string> n = { "leo", "kiki", "eden" };
//    vector<string> d = { "leo", "eden" };
//    solution(n, d);
//}