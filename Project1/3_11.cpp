#include <string>
#include <vector>
#include <iostream>


using namespace std;

/*
프로그래머스- 덧칠하기
1. 1미터 벽 n개가 존재
2. 한번에 칠할수 있는 길이 m
3. 칠해야 하는 벽 s
- 무조건 m길이만큼 칠해야 함
- s의 가장 끝값은 n을 넘어서는 안됨
해결법
1. 부울벡터를 이용해서 s에 없으면 0 있으면 1을 대입한다.
2. s에 시작부터 +m-1을 해서 뒤에 있으면 넘어간다.
*/
//int solution(int n, int m, vector<int> section) {
//    int answer = 0;
//
//    vector<bool> v;
//    int j = 0;
//    for (int i = 0; i < n; i++) {      
//        if (j < section.size()) {
//            if (i == section[j] - 1) {
//                v.push_back(false);
//                j++;
//            }
//            else v.push_back(true);
//        }
//        else
//            v.push_back(true);
//    }
//
//    int k = section.front() - 1;
//
//    while (k < v.size()) {
//
//        ++answer;
//        int count = 0;
//        for (int i = k; i < k + m; i++) {
//            if (i >= v.size())
//                continue;
//            else {
//                if (v[i] == false) {
//                    count = 1;
//                }
//            }         
//        }
//        if (count == 1) {
//            for (int i = k; i < k + m; i++) {
//                if (i >= v.size()) {
//                    break;
//                }
//                if (v[i] == false) {
//                    v[i] = true;
//                }
//            }
//        }
//        else
//            --answer;
//        k += m;
//    }
//    return answer;
//}

///*
//인덱스로 계산하기
//while문으로 시작을 section의 front값으로 잡음=index
//index+m-1이 다음 section 값보다 작으면 index= section[+1
//크면 다음 섹션과 계산
//*/
//int solution(int n, int m, vector<int> section) {
//    int answer = 1;
//    int index = section[0];
//    int count = 1;
//
//    while (count < section.size()) {
//        if (index + m - 1 < section[count]) {
//            index = section[count];
//            ++answer;
//        }
//        ++count;
//    }
//
//    return answer;
//}
//
//int main() {
//    int n = 1;
//    int m = 1;
//    vector<int> s;
//    s.push_back(1);
//    //s.push_back(3);
//    //s.push_back(6);
//    //s.push_back(8);
//    //s.push_back(10);
//    //s.push_back(12);
//    //s.push_back(14);
//    cout<<endl<<solution(n, m, s);
//}

