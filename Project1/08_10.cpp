/*3 x n 타일링 */
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n) {
//    vector<long long> dp(n + 1, 0);
//    const int MOD = 1000000007;
//
//    dp[0] = 1; 
//    dp[2] = 3;
//
//    for (int i = 4; i <= n; i += 2) {
//        dp[i] = (dp[i - 2] * 3) % MOD;  
//        for (int j = 4; j <= i; j += 2) {
//            dp[i] = (dp[i] + 2 * dp[i - j]) % MOD;  
//        }
//    }
//
//    return dp[n];
//}

/*소수 찾기*/
#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

void push(vector<string> &v, string str) {
    int size = v.size();
    v.push_back(str);
    vector<string> st;
    for (int i = 0; i < size; i++) {
        st.push_back(v[i] + str);
        st.push_back(str + v[i]);
    }
    v.insert(v.end(), st.begin(), st.end());
}

void sspd(int n, vector<bool> &isPrime) {

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
    cout << "k: ";
    for (auto k : str) {
        cout << k << "   ";
        int num = stoi(k);

        if (unique.find(num) == unique.end()) {
            unique.insert(num);
            v.push_back(num);
        }
    }
    cout << endl;
    if (v.front() == 0 && v.size() == 1) return 0;

    sort(v.begin(), v.end());    
    vector<bool> isPrime(v.back()+1, true);    
    cout << isPrime.size()<<"dddd\n";
    sspd(v.back(), isPrime);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
        if (isPrime[v[i]]) {
            cout << "----" << v[i] << "----\n";
            answer++;
        }
            
    }
    return answer;
}

int main() {
    cout<<solution("143");
}