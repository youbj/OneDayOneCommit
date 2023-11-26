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


//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(string s) {
//    int answer = 0;
//
//    for (int i = 0; i < s.length(); i++) {
//        vector<char>stack;
//        string str = s.substr(1);
//        bool check = false;
//
//        for (int j = 0; j < s.length(); j++) {           
//            char c = s[j];
//
//            switch (c) {
//            case '[':
//                stack.push_back('[');
//                break;
//            case ']':
//                if (stack.empty()||stack.back()!='[') {
//                    check = true;
//                    break;
//                }
//                stack.pop_back();
//                break;
//            case '{':
//                stack.push_back('{');
//                break;
//            case '}':
//                if (stack.empty() || stack.back() != '{') {
//                    check = true;
//                    break;
//                }
//                stack.pop_back();
//                break;
//            case '(':
//                stack.push_back('(');
//                break;
//            case ')':
//                if (stack.empty() || stack.back() != '(') {
//                    check = true;
//                    break;
//                }
//                stack.pop_back();
//                break;
//            }
//            if (check) {
//                cout << s<<endl;
//                break;
//            }
//        }
//        if (!check) {
//            ++answer;
//        }
//        str.push_back(s.front());
//        s = str;
//    }
//    return answer;
//}

//#include<iostream>
//
//#include <string>
//#include <vector>
//#include <deque>
//using namespace std;
//
//
//int solution(int cacheSize, vector<string> cities) {
//    int answer = 0;
//
//    if (cacheSize == 0)
//        return cities.size() * 5;
//
//    deque<string>cache;
//    for (int i = 0; i < cities.size(); i++) {
//        bool catch_city = false;
//
//        string city = cities[i];
//        for (int c = 0; c < city.length(); c++)
//            city[c] = tolower(city[c]);
//        int catch_index = -1;
//
//        for (int j = cache.size() - 1; j >= 0; j--) {
//            if (cache[j] == city) {
//
//                catch_index = j;
//                catch_city = true;
//                break;
//            }
//        }
//
//        if (catch_city) {
//            if (catch_city) {
//                cache.erase(cache.begin() + catch_index);
//                cache.push_front(city);
//                answer += 1;
//            }
//        }
//        else {
//            if (cache.size() >= cacheSize)
//                cache.pop_front();
//            cache.push_back(city);
//            answer += 5;
//        }
//    }
//    return answer;
//}