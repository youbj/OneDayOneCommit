/*���α׷��ӽ� level 1*/

///*����� ��*/
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n) {
//    int answer = 0;
//    for (int i = 1; i < n + 1; i++)
//        if (n % i == 0)
//            answer += i;
//    return answer;
//}

///*������ȣ*/
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//string solution(string s, int n) {
//    string answer = "";
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] >= 'a' && s[i] <= 'z')//97~122
//        {
//            if (s[i] + n > 'z')
//            {
//                answer += s[i] - 26 + n;
//                continue;
//            }
//            answer += s[i] + n;
//        }
//        else if (s[i] >= 'A' && s[i] <= 'Z')//65~90
//        {
//            if (s[i] + n > 'Z')
//            {
//                answer += s[i] - 26 + n;
//                continue;
//            }
//            answer += s[i] + n;
//        }
//        else
//            answer += ' ';
//    }
//    cout << answer;
//    return answer;
//}

///*���ڿ� ������ �����*/
//
//#include <string>
//#include <vector>
//#include <sstream>
//using namespace std;
//
///*int solution(string s) {
//    int answer = 0;
//    stringstream ssint(s);
//    ssint >> answer;
//    return answer;
//} */
//int solution(string s) {
//    int answer = stoi(s);
//   
//    return answer;
//}

///*���ڼ�~*/
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(int n) {
//    string answer = "";
//    int i = 0;
//    while (i != n)
//    {
//        if (i % 2 == 0)
//            answer += "��";
//        else
//            answer += "��";
//        i++;
//    }
//    return answer;
//}

///*�Ҽ� ã��*/
//
//#include <string>
//#include <vector>
//#include <cmath>
//using namespace std;
//
////int solution(int n) {//2�� 3���� 2��3���� �������� �Ҽ��ƴ�
////    int answer = 0;
////    vector<int> a;
////    a.push_back(2);
////    int s;
////
////	for (int i = 3; i < n + 1; i++)//3~10
////	{
////        s = 0;
////        for (int j = 0; j < a.size(); j++)
////        {
////            if (i % a[j] == 0)
////            {
////                s++;
////                break;
////            }
////        }
////        if(s==0)
////            a.push_back(i);
////	}
////    answer = a.size();
////    return answer;
////}
//
//int solution(int n) {
//    int answer = 0;
//    vector<bool>check(n + 1, true);
//    int idx = 0, idx2 = 0;
//    for (idx = 2; idx <= sqrt(n); ++idx)
//        for (idx2 = 2; idx * idx2 <= n; ++idx2)
//            check[idx * idx2] = false;
//
//    for (idx = 2; idx <= n; ++idx)
//        if (check[idx] == true) answer++;
//    return answer;
//}

///*���￡�� �輭�� ã��*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//string solution(vector<string> seoul) {
//    string answer = "";
//    auto a = find(seoul.begin(), seoul.end(), "Kim");
//    int index = a - seoul.begin();
//    answer += "�輭���� " + to_string(index) + "�� �ִ�";  
//    return answer;
//}

///*���ڿ� ������������ �����ϱ�*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//string solution(string s) {
//    string answer = "";
//    sort(s.begin(), s.end());
//    reverse(s.begin(), s.end());
//    answer += s;
//    return answer;
//}

///*���ڿ� �ٷ�� �⺻*/
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//bool solution(string s) {
//    bool answer = true;
//
//    if (s.length() != 4 && s.length() != 6)
//    {
//        answer = false;
//        return answer;
//    }
//
//    for (int i = 0; i < s.length(); i++)
//    {
//        if (s[i] < 48 || s[i]>57)
//            answer = false;
//    }
//    return answer;
//}

///*���ڿ� �� p��y�� ����*/
//
//#include <string>
//#include <iostream>
//#include <map>
//using namespace std;
//
//bool solution(string s)
//{
//    bool answer = true;
//    int count1 = 0, count2 = 0;
//
//    if (s.length() > 50)
//        return false;
//    for (int i = 0; i < s.length(); i++)
//    {
//        if (s[i] == 'p' || s[i] == 'P')
//            count1++;
//        if (s[i] == 'y' || s[i] == 'Y')
//            count2++;
//    }
//    if (count1 != count2)
//        answer = false;
//    return answer;
//}
