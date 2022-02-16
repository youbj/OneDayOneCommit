///*전화번호 뒷자리 4자리를 제외하고 *로 변경하기*/
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string phone_number) {
//    string answer = phone_number;
//    for (int i = 0; i < phone_number.size() - 4; i++)
//    {
//        answer[i] = '*';
//    }
//    return answer;
//}

///*하샤드의 수*/
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//bool solution(int x) {
//    bool answer = true;
//    int a = x;
//    int b = 0;
//    while (int(a) != 0)
//    {
//        b += a % 10;
//        a /= 10;
//    }
//
//    if (x % b == 0)
//        answer = true;
//    else
//        answer = false;
//    return answer;
//}
//int main()
//{
//    int x = 13;
//    solution(x);
//}

///*평균 구하기*/
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//double solution(vector<int> arr) {
//    double answer = 0;
//    for (int i = 0; i < arr.size(); i++)
//    {
//        answer += arr[i];
//    }
//    answer /= arr.size();
//
//    return answer;
//}

///*콜라츠 추측*/
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//int solution(int num) {
//    int answer=0;
//
//    while (num != 1)
//    {
//        num = num % 2 == 0 ? num / 2 : num * 3 + 1;
//        answer++;
//        if (answer == 483)
//        {
//            answer = -1;
//            break;
//        }
//    }   
//    return answer;
//}

///*최대 공약수와 최소 공배수 구하기*/
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int gcd(int a, int b) 
//{
//    while (b != 0) 
//    {
//        int r = a % b;
//        a = b;
//        b = r;
//    }
//    return a;
//}
//
//vector<int> solution(int n, int m) {
//    vector<int> answer;
//    answer.push_back(gcd(n, m));
//    answer.push_back((n * m) / answer[0]);
//    return answer;
//}

///*가장 작은수 리턴하기*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> solution(vector<int> arr) {
//    vector<int> answer;
//    vector<int> a = arr;
//    if (arr.size() == 1)
//    {
//        answer.push_back(-1);
//        return answer;
//    }
//    sort(arr.begin(), arr.end());
//    
//    for (int i = 0; i < a.size(); i++)
//    {
//        if (a[i] != arr[0])
//            answer.push_back(a[i]);
//    }
//    return answer;
//}

///*정수 제곱근 판별*/
//
//#include <string>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//long long solution(long long n) {
//    long long answer = 0;
//    int a = sqrt(n);
//
//    if (pow(a, 2) < n)
//        answer = -1;
//    else
//        answer = pow(a + 1, 2);    
//    return answer;
//}

///*정수 내림차순 정렬*/
//
//#include <string>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//long long solution(long long n) {
//    long long answer = 0;
//    vector<int> arr;
//    while(n/10!=0)
//    {
//        arr.push_back(n % 10);
//        n /= 10;
//    }
//    arr.push_back(n % 10);
//    sort(arr.begin(), arr.end());
//
//    for (int i = 0; i < arr.size(); i++)
//    {
//        answer += arr[i] * pow(10, i);
//    }
//    return answer;
//}

///*자연수 뒤집어 배열로 만들기*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//vector<int> solution(long long n) {
//    vector<int> answer;
//    while (n / 10 != 0)
//    {
//        answer.push_back(n % 10);
//        n /= 10;
//    }       
//    answer.push_back(n % 10);
//    return answer;
//}

///*자릿수 더하기*/
//
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(int n)
//{
//    long long answer = 0;
//    while (n / 10 != 0)
//    {
//        answer += n % 10;
//        n /= 10;
//    }
//    answer += n;
//
//    return answer;
//}

///*이상한 문자 만들기*/
//#include <iostream>
//#include <string>
//#include <vector>
//#include <sstream>
//using namespace std;
//
//string solution(string s) {
//    string answer = "";
//    istringstream ss(s);
//    vector<string> a;
//    string words;
//
//    while (getline(ss, words, ' ')) //공백 단위로 구분
//        a.push_back(words);
//
//    for (int i = 0; i < a.size(); i++)
//    {
//        for (int j = 0; j < a[i].size(); j++)
//        {
//            if (j % 2 == 0)
//            {
//                if (a[i][j] >= 'a' && a[i][j] <= 'z')
//                    a[i][j] -= 32;
//            }
//            else
//                if (a[i][j] >= 'A' && a[i][j] <= 'Z')
//                    a[i][j] += 32;
//        }
//    }
//    answer += a[0];
//    for (int i = 1; i < a.size(); i++)
//    {
//        answer += ' ' + a[i];
//    }
//    if (answer.size() != s.size())
//        answer += ' ';
//    return answer;
//}

///*행렬의 덧셈*/
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
//    vector<vector<int>> answer;
//    vector<int> a;
//    for (int i = 0; i < arr1.size(); i++)//2
//    {
//        a = { };
//        for (int j = 0; j < arr1[0].size(); j++)//2
//        {           
//            a.push_back(arr1[i][j] + arr2[i][j]);
//        }
//        answer.push_back(a);
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<vector<int>>a = { {1,2}, {2,3} };
//    vector<vector<int>>b = { {3,4}, {5,6} };
//    solution(a, b);
//}