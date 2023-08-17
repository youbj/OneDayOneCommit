/*베스트 앨범 - 못함*/

//#include <string>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <iostream>
//
//using namespace std;
//
//
//bool check(pair<int, int>a, pair<int, int>b) {
//    if (a.first == b.first)
//        return a.second > b.second;
//    return a.first > b.first;
//}
//
//vector<int> solution(vector<string> genres, vector<int> plays) {
//    vector<int> answer;
//
//    map<string, vector<pair<int,int>>>m;
//    vector<pair<int, int>>ans;
//
//    for (int i = 0; i < genres.size(); i++) {
//        if (m.find(genres[i]) != m.end()) {
//            m[genres[i]].push_back(make_pair(plays[i],i));
//        }
//        else {
//            m.insert(make_pair(genres[i], vector<pair<int,int>>{make_pair(plays[i],i)}));
//        }
//        ans.push_back(make_pair(plays[i], i));
//    }
//    vector<vector<pair<int,int>>>buf;
//
//    for (auto& k : m) {
//        sort(k.second.begin(), k.second.end(),check);
//        int count = 0;
//        vector<pair<int,int>>buf_a;
//        for (int i = 0; i < k.second.size(); i++) {
//            cout << k.second[i].first << "  ";
//            buf_a.push_back(k.second[i]);
//            ++count;
//            if (count == 2)
//                break;
//        }
//        buf.push_back(buf_a);
//    }
//    sort(buf.rbegin(), buf.rend());
//
//    for (int i = 0; i < buf.size(); i++) {
//        for (auto &k : buf[i]) {
//            answer.push_back(k.second);
//        }
//    }
//    return answer;
//}


/*소수찾기*/

//#include <iostream>
//#include <string>
//#include <set>
//#include <cmath>
//
//using namespace std;
//
//set<int> numberSet;
//
//bool isPrime(int number)
//{
//    if (number == 0 || number == 1)
//        return false;
//
//    int lim = sqrt(number);
//    for (int i = 2; i <= lim; i++)
//        if (number % i == 0)
//            return false;
//
//    return true;
//}
//
//void makeCombination(string comb, string others)
//{
//    if (comb != "")
//        numberSet.insert(stoi(comb));
//
//    for (int i = 0; i < others.size(); i++)
//        makeCombination(comb + others[i], others.substr(0, i) + others.substr(i + 1));
//}
//
//int solution(string numbers)
//{
//    makeCombination("", numbers);
//
//    int answer = 0;
//    for (int number : numberSet)
//        if (isPrime(number))
//            answer++;
//
//    return answer;
//}

/*구명보트*/
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//    int answer = 0;
//    long long int sum = 0;
//    for (int i = 0; i < people.size(); i++) {
//        sum += people[i];
//    }
//    answer += sum / limit;
//    if (sum % limit > 0)
//        ++answer;
//    return answer;
//}