#include <iostream>

//#include <vector>
//#include <iostream>
//using namespace std;
//
//int solution(vector<int> nums) {
//    int answer = 0;
//    vector<bool> isPrime(3001, true);
//
//    isPrime[0] = isPrime[1] = false;
//
//    for (int i = 2; i * i <= 3000; i++) {
//        if (isPrime[i]) {
//            for (int j = i * i; j <= 3000; j += i) {
//                isPrime[j] = false;
//            }
//        }
//    }
//
//    int size = nums.size();
//
//    for (int i = 0; i < size - 2; i++) {
//        int num1 = nums[i];
//        for (int j = i + 1; j < size - 1; j++) {
//            int num2 = nums[j] + num1;
//            for (int k = j + 1; k < size; k++) {
//                int sum = num2 + nums[k];
//                if (isPrime[sum])
//                    ++answer;
//            }
//        }
//    }
//    return answer;
//}


//#include <string>
//#include <vector>
//#include <deque>
//using namespace std;
//
//vector<int> solution(int num, int total) {
//    vector<int> answer;
//    deque<int> que;
//    int sum = 0;
//
//    int n = total / num;
//    que.push_back(n);
//    if (total % num != 0) {
//        que.push_back(n + 1);
//    }
//
//    int size = (num-que.size())/2;
//
//    for (int i = 0; i < size; i++) {
//        que.push_front(que.front() - 1);
//        que.push_back(que.back() + 1);
//    }
//
//    for (auto k : que) {
//        answer.push_back(k);
//    }
//    return answer;
//}


//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//
//string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
//    string answer = "Yes";
//    queue<string>card1_que;
//    queue<string>card2_que;
//    int chack_card1 = 0;
//    int check_card2 = 0;
//
//    for (int i = 0; i < cards1.size(); i++) {
//        card1_que.push(cards1[i]);
//    }
//
//    for (int i = 0; i < cards2.size(); i++) {
//        card2_que.push(cards2[i]);
//    }
//
//    for (int i = 0; i < goal.size(); i++) {
//        if (goal[i] == card1_que.front()) {
//            card1_que.pop();
//        }
//        else if (goal[i] == card2_que.front()) {
//            card2_que.pop();
//        }
//        else {
//            answer = "No";
//            return answer;
//        }
//    }
//
//    return answer;
//}

//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long int solution(string s) {
//    if (s.length() > 49 || s[0] == '0' || s[0] == 'z')
//        return 0;
//    long long int answer = 0;
//    string st = "";
//    string str[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
//    string arr[10] = { "10","1","2","3","4","5","6","7","8","9" };
//    if (s[0] == 'z' || s[0] == '0')
//        return 0;
//    for (int i = 0; i < s.length(); i++)
//    {
//        if (s[i] >= '0' && s[i] <= '9')
//        {
//            st += s[i];
//        }
//
//        for (int j = 0; j < 10; j++)
//        {
//            if (s.substr(i, 3) == str[j] || s.substr(i, 4) == str[j] || s.substr(i, 5) == str[j])
//            {
//                st += arr[j];
//                i += str[j].length() - 1;
//            }
//        }
//    }
//    answer = stoi(st);
//    return answer;
//}

//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long int solution(string s) {
//    long long int answer = 0;
//    string ans = "";
//    int i = 0;
//
//    while (i < s.length()) {
//        char c = s[i];
//        switch(c){
//        case 'z':
//            ans.push_back('0');
//            i += 4;
//            break;
//        case 'o':
//            ans.push_back('1');
//            i += 3;
//            break;
//        case 't':
//            if (s[i + 1] == 'w') {
//                ans.push_back('2');
//                i += 3;
//            }
//            else {
//                ans.push_back('3');
//                i += 5;
//            }
//            break;
//        case 'f':
//            if (s[i + 1] == 'o') {
//                ans.push_back('4');
//            }
//            else {
//                ans.push_back('5');
//            }
//            i += 4;
//            break;
//        case 's':
//            if (s[i + 1] == 'i') {
//                ans.push_back('6');
//                i += 3;
//            }
//            else {
//                ans.push_back('7');
//                i += 5;
//            }
//            break;
//        case 'e':
//            ans.push_back('8');
//            i += 5;
//            break;
//        case 'n':
//            ans.push_back('9');
//            i += 4;
//            break;
//        default:
//            ans.push_back(s[i]);
//            ++i;
//        }
//    }
//
//    answer = stoi(ans);
//
//    return answer;
//}

#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    queue<int>que;

    for (int i = 0; i < numbers.size(); i++) {
        que.push(numbers[i]);
    }

    while (k>0) {
        que.push(que.front());
        que.pop();
        que.push(que.front());
        que.pop();
        k--;
    }
    answer = que.front();
    return answer;
}