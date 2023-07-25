//#include <string>
//#include <vector>
//#include <sstream>
//
//using namespace std;
//
//int solution(string s) {
//    int answer = 0;
//    string n;
//    stringstream is(s);
//    vector <int> v;
//
//    while (is >> n) {
//        if (n != "Z") v.push_back(stoi(n));
//        else v.pop_back();
//    }
//
//    for (int i = 0; i < v.size(); i++) {
//        answer += v[i];
//    }
//    return answer;
//}

//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> number) {
//    int answer = 0;
//    int size = number.size();
//
//    for (int i = 0; i < size-2; i++) {
//        int a = number[i];
//        for (int j = i + 1; j < size - 1; j++) {
//            int sum = a + number[j];
//            for (int k = j + 1; k < size; k++) {
//                if (number[k] == (-1) * sum)
//                    ++answer;
//            }
//        }
//    }
//    return answer;
//}

//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> box, int n) {
//
//    int x = box[0] / n;
//    int y = box[1] / n;
//    int h = box[2] / n;
//    int answer = x*y*h;
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//vector<int> solution(string s) {
//    vector<int> answer;
//    map <char, int> m;
//    for (int i = 0; i < s.length(); i++) {
//        if (m.find(s[i]) != m.end()) {
//            answer.push_back(i - m[s[i]] );
//            m[s[i]] = i;
//        }
//        else { 
//            m.insert(make_pair(s[i], i)); 
//            answer.push_back(-1);
//        }
//    }
//    return answer;
//}

//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<string> spell, vector<string> dic) {
//    int answer = 1;
//    for (int i = 0; i < dic.size(); i++) {
//        string s = dic[i];
//        int count = 0;
//
//        for (int j = 0; j < spell.size(); j++) {
//            if (s.find(spell[j]) != string::npos) {
//                count++;
//            }
//            else {
//                break;
//            }
//        }
//
//        if (count == spell.size()) {
//            ++answer;
//            break;
//        }
//
//    }
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//int solution(vector<string> babbling) {
//    int answer = 0;
//    map<string, int>m = { {"aya",0},{"ye",0},{"woo",0},{"ma",0} };
//
//    for (int i = 0; i < babbling.size(); i++) {
//        string s = babbling[i];
//        if (s.length() > 3) {
//
//        }
//        else
//            if (m.find(s) != m.end()) {
//            ++m[s];
//            }
//    }
//
//    for (auto& pair : m) {
//        answer += pair.second;
//    }
//
//    return answer;
//}
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int solution(vector<string> babbling) {
//    int answer = 0;
//    vector<pair<string, int>>m = { {"aya",0},{"ye",0},{"woo",0},{"ma",0} };
//
//    for (int i = 0; i < babbling.size(); i++) {
//        string s = babbling[i];
//        if (s.length() > 3) {
//            for (int j = 0; j < s.length();) {
//                if (s[j] == 'a') {
//                    if (s[j + 1] == 'y' && s[j + 2] == 'a')
//                        j += 3;
//                    else
//                        break;
//                }
//                else if (s[j] == 'w') {
//                    if (s[j + 1] == 'o' && s[j + 2] == 'o')
//                        j += 3;
//                    else
//                        break;
//                }
//                else if (s[j] == 'y') {
//                    if (s[j + 1] == 'e')
//                        j += 2;
//                    else
//                        break;
//                }
//                else if (s[j] == 'm') {
//                    if (s[j + 1] == 'a')
//                        j += 2;
//                    else
//                        break;
//                }
//                else
//                    break;
//                if (j == s.length())
//                    ++answer;
//            }
//        }
//        else{
//
//            for (int j = 0; j < 4; j++) {
//                if (m[j].first == s) {
//                    ++m[j].second;
//                }
//            }
//
//        }
//
//    }
//
//    for (auto& pair : m) {
//        answer += pair.second;
//    }
//
//    return answer;
//}

//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int solutin(int n) {
//    int count = 0;
//    int num = 1;
//
//    while (count < n) {
//        if (num % 3 != 0 && to_string(num).find('3') == string::npos) {
//            count++;
//        }
//        num++;
//    }
//
//    return num - 1;
//}
