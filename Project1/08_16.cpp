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



#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

void generateCombinations(const string& input, string current, int index, vector<string>& v) {
    if (index == input.length()) {
        v.push_back(current);
        return;
    }

    generateCombinations(input, current, index + 1,v);

    generateCombinations(input, current + input[index], index + 1,v);
}

void push(vector<string>& v, string str) {
    int size = v.size();
    v.push_back(str);
    vector<string> st;
    for (int i = 0; i < size; i++) {
        st.push_back(v[i] + str);
        st.push_back(str + v[i]);
    }
    v.insert(v.end(), st.begin(), st.end());
}

void sspd(int n, vector<bool>& isPrime) {

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int solution(string numbers) {
    int answer = 0;
    vector<string>str;

    for (int i = 0; i < numbers.length(); i++) {
        string s;
        s.push_back(numbers[i]);
        push(str, s);
    }

    vector<int>v;
    unordered_set<int> unique;

    for (auto k : str) {
        int num = stoi(k);

        if (unique.find(num) == unique.end()) {
            unique.insert(num);
            v.push_back(num);
        }
    }
    if (v.front() == 0 && v.size() == 1) return 0;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "  ";
    }

    sort(v.begin(), v.end());
    vector<bool> isPrime(v.back() + 1, true);
    sspd(v.back(), isPrime);

    for (int i = 0; i < v.size(); i++) {
        if (isPrime[v[i]])
            answer++;
    }
    return answer;
}

int main() {
    solution("143");
}