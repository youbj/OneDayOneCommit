//#include <string>
//#include <vector>
//
//using namespace std;
//
//
//
//vector<int> solution(vector<int> sequence, int k) {
//    vector<int> answer;
//    vector<pair<int, int>> ans;
//    int size = sequence.size();
//    int min = 1000001;
//
//    if (sequence[0] == k) {
//        ans.push_back(make_pair(0, 0));
//    }
//
//    for (int i = 0; i < size - 1; i++) {
//        long long int sum = sequence[i];
//
//        for (int j = i+1; j < size; j++) {
//            if (sequence[j] == k) {
//                ans.push_back(make_pair(j, j));
//                break;
//            }
//
//            sum += sequence[j];
//
//            if (sum < k) continue;
//            else if (sum > k) break;
//            else {
//                if (min > j - i) {
//                    min = j - i;
//                    ans.push_back(make_pair(i, j));
//                    break;
//                }
//            }
//
//        }
//    }
//    answer.push_back(ans.back().first);
//    answer.push_back(ans.back().second);
//    return answer;
//}
//

//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> sequence, int k) {
//    int s = 0, e = 0;
//    int sum = sequence[0]; // �κ� ������ ��
//    int subLen = sequence.size() + 1; // �κ� ������ ����
//    pair<int, int> result; // �κ� ������ ���� �ε����� ������ �ε����� ���� ��ü
//
//    while (s <= e && e < sequence.size()) {
//        if (sum < k) sum += sequence[++e];
//        else if (sum == k) {
//            if (e - s + 1 < subLen) { // ���̰� �� ª�� �����̸�
//                subLen = e - s + 1;
//                result = { s, e };
//            }
//            else if (e - s + 1 == subLen) {
//                if (s < result.first) { // ���� �ε����� �� ������
//                    result = { s, e };
//                }
//            }
//
//            sum -= sequence[s++];
//        }
//        else sum -= sequence[s++];
//    }
//
//    return { result.first, result.second };
//}

//#include <string>
//#include <vector>
//#include <queue>
//#include <functional>
//#include <algorithm>
//#include<iostream>
//using namespace std;
//
//bool check(string a, string b) {
//    return a+b > b+b;
//}
//
//string solution(vector<int> numbers) {
//    string answer = "";
//    vector<string> str;
//    int size = numbers.size();
//    for (int i = 0; i < size; i++) {
//        str.push_back(to_string(numbers[i]));
//    }
//    sort(str.begin(), str.end(), check);
//
//    if (str.at(0) == "0") return "0";
//    for (auto num : str)
//        answer += num;
//    return answer;
//}
