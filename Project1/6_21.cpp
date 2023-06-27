//#include <string>
//#include <vector>
//
///*
//1. 각 배열은 100이하
//2. 작업진도 <100  /  작업속도 <=100
//3. 배포는 하루에 한 번, 하루 끝에 (완료시 그날 출력)
//4. 앞의 기능을 개발 완료해야 뒤에 기능을 배포 가능
//*/
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//    vector<int> answer;
//    vector<int> days;
//    int len = progresses.size();
//    for (int i = 0; i < len; i++) {
//        int num = 100 - progresses[i];
//        if (num % speeds[i] != 0)
//            days.push_back((num / speeds[i]) + 1);
//        else
//            days.push_back(num / speeds[i]);
//    }
//
//    int count = 1;
//    int max = days[0];
//    for (int i = 1; i < len; i++) {
//        if (days[i] > max) {
//            answer.push_back(count);
//            count = 1;
//            max = days[i];
//        }
//        else ++count;
//    }
//    answer.push_back(count);
//
//
//    return answer;
//}

