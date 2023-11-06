///*프로그래머스 연속 부분 수열의 개수*/
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <set>
//using namespace std;
//
//int solution(vector<int> elements) {
//    int answer = 1;
//    int size = elements.size();
//    set<int> ans;
//    for (int i = 0; i < size; i++) {
//        ans.insert(elements[i]);
//    }
//
//    for (int n = 2; n < size; n++) {
//        for (int i = 0; i < size; i++) {
//            int sum = 0;
//            for (int j = i; j < i+n; j++) {
//                if (j >= size) {
//                    sum += elements[j % size];
//                }
//                else {
//                    sum += elements[j];
//                }
//            }
//            ans.insert(sum);
//        }
//    }
//    answer += ans.size();
//
//    return answer;
//}


/*프로그래머스 할인 행사*/

//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//int solution(vector<string> want, vector<int> number, vector<string> discount) {
//    int answer = 0;
//    unordered_map<string, int>m;
//    for (int i = 0; i < want.size(); i++) {
//        m.insert({ want[i], number[i] });
//    }
//    unordered_map<string, int>daily;
//
//    for (int i = 0; i < 10; i++) {
//        if (daily.empty() != 0 && daily.find(discount[i]) != daily.end()) {
//            ++daily[discount[i]];
//        }
//        else 
//            daily.insert({ discount[i], 1 });
//    }
//
//    for (int i = 0; i < discount.size(); i++) {
//
//        if (daily == m){
//            answer = i - 10;
//            break;
//        }
//        else {    
//            --daily[discount[i-10]];
//            if (daily.empty() != 0 && daily.find(discount[i]) != daily.end()) {
//                ++daily[discount[i]];
//            }
//            else
//                daily.insert({ discount[i], 1 });
//        }
//
//    }
//    return answer;
//}

