//#include <string>
//#include <vector>
//#include <queue>
//#include <functional>
//#include <algorithm>
//#include<iostream>
//using namespace std;
//
//bool check(string a, string b) {
//    return a + b > b + a;
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

//#include <iostream>
//
//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//int solution(vector<int> citations) {
//    int answer = 0;
//    map<int, int>mp;
//    
//    for (int i = 0; i < citations.size(); i++) {       
//
//        if (mp.find(citations[i]) != mp.end())
//            ++mp[citations[i]];
//
//        mp.insert(make_pair(citations[i], 0));
//    }
//    int k = citations.size();
//
//    for (auto& pair : mp) {
//        int a = k - pair.second;
//        pair.second += a;
//
//        --a;
//        k = a;      
//
//        if (pair.first == pair.second)
//            return pair.first;
//    }
//    if (!mp.empty()) {
//        map<int, int>::reverse_iterator last = mp.rbegin();
//        int lastKey = last->first;
//        return lastKey;
//    }
//}

//#include <string>
//#include <vector>
//#include <set>
//
//using namespace std;
//
//string solution(string number, int k) {
//    string answer = "";
//    multiset<char> num;
//    for (int i = 0; i < number.length(); i++) {
//        num.insert(number[i]);
//    }
//    
//    auto it = num.rbegin();
//    int count = 0;
//
//    while (it != num.rend() && count < k) {
//        answer += *it;
//        ++count;
//        ++it;
//    }
//
//    return answer;
//}

