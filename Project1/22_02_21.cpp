/*���α׷��ӽ�*/

///*���� ���ڴ� �Ⱦ�*/
//
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(vector<int> arr)
//{
//    vector<int> answer;
//    answer.push_back(arr[0]);
//    for (int i = 1; i < arr.size(); i++)
//    {
//        if (arr[i] != arr[i - 1])
//            answer.push_back(arr[i]);
//    }
//    return answer;
//}

///*������ ������ ��*/
//
//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int a, int b) {
//    long long answer = 0;
//    int x, y;
//    x = a < b ? a : b;
//    y = a > b ? a : b;
//    for (int i = x; i <= y; i++)
//        answer += i;
//    return answer;
//}

///*������ �������� ���� �迭*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> solution(vector<int> arr, int divisor) {
//    vector<int> answer;
//
//    for (int i = 0; i < arr.size(); i++)
//    {
//        if (arr[i] % divisor == 0)
//            answer.push_back(arr[i]);
//    }
//    if (answer.size() == 0)
//        answer.push_back(-1);
//
//    sort(answer.begin(), answer.end());
//
//    return answer;
//}

///*��� ���� ��������*/
//
//#include <string>
//#include <vector>
//using namespace std;
//
//string solution(string s) {
//    string answer = "";
//    int a = s.length();
//
//    if (a % 2 == 0)
//        answer = s.substr(a / 2 - 1, 2);   
//    else
//        answer = s.substr(a / 2 , 1);
//
//    return answer;
//}

///*���ڿ� ������� �����ϱ�*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<string> solution(vector<string> strings, int n) {
//    vector<string> answer;
//    
//    for (int i = 0; i < strings.size(); i++)
//    {
//        answer.push_back(strings[i][n] + strings[i]);
//    }
//    sort(answer.begin(), answer.end());
//
//    for (int i = 0; i < answer.size(); i++)
//    {
//        answer[i].erase(answer[i].begin());
//    }
//    return answer;
//}

///*������ �ݾ� ����ϱ�*/
//
//using namespace std;
//
//long long solution(int price, int money, int count)
//{
//    int answer = 0;
//    int i = 1;
//    while (i <= count)
//    {
//        answer += price * i;
//        i++;
//    }
//    if (answer > money)
//        answer -= money;
//    else
//        answer = 0;
//    return answer;
//}

///*īī�� ����ε��׽�Ʈ ��Ʈ����*/
//
///*
//��Ʈ�� �� 3ȸ 0~10�� �̱� ���� Ʈ���ÿ����� ������ ������
//*����� ��Ÿ�� - �ش������� �������� 2�� 1�������ý� �ش������� 2��
//#��� ������ - �ش����� ���̳ʽ�
//��Ÿ��� ������ ��ø����
//������ �������� 1������ ���� -> s,d,t
//*/
//
///*
//3�������� ������ -> ���� -> ���ĺ� -> ����
//*/
//
//#include <string>
//#include <cmath>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int solution(string dartResult) {
//    int answer = 0;
//    int a = 0;
//    vector<int> v;
//    for (int i = 0; i < dartResult.length(); i++)
//    {
//        if (dartResult[i] >= 48 && dartResult[i] <= 57)
//        {
//            a = int(dartResult[i]) - '0';
//            cout << "a : " << a << endl;
//        }
//        else if(dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T')
//        {
//            switch (dartResult[i])
//            {
//            case 'S':
//                a = pow(a, 1);
//                v.push_back(a);
//                break;
//            case 'D':
//                a = pow(a, 2);
//                v.push_back(a);
//                break;
//            case 'T':
//                a = pow(a, 3);
//                v.push_back(a);
//                break;
//            default:
//                break;
//            }
//        }
//        else if (dartResult[i] == '*' || dartResult[i] == '#')
//        {
//            continue;
//        }
//    }
//    cout << answer;
//    return answer;
//}
//
//using namespace std;
//
//int solution1(string dR) {
//    int answer = 0;
//    vector<int>v;
//    int i = 0;
//
//    v.push_back(stoi(dR));
//    i += sizeof(dR);
//    if (dR[i] == 'S')
//        v[0] = pow(v[0], 1);
//    dR = dR.substr(i, dR.length() - i);
//
//    v.push_back(stoi(dR));
//    i += sizeof(dR);
//    if (dR[i] == 'D')
//        v[1] = pow(v[1], 2);
//    dR = dR.substr(i, dR.length() - i);
//
//    v.push_back(stoi(dR));
//    i += sizeof(dR);
//    if (dR[i] == 'D')
//        v[1] = pow(v[1], 2);
//    dR = dR.substr(i, dR.length() - i);
//
//    return answer;
//}
//int main()
//{
//    string a = "1S2D3T";
//    solution(a);
//
//}

///*�ּ� ���簢��*/
//
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<vector<int>> sizes) {
//    int answer = 0;
//    vector<int> big;
//    vector<int> small;
//
//    for (int i = 0; i < sizes.size(); i++)
//    {
//        if (sizes[i][0] > sizes[i][1])
//        {
//            big.push_back(sizes[i][0]);
//            small.push_back(sizes[i][1]);
//        }
//        else
//        {
//            big.push_back(sizes[i][1]);
//            small.push_back(sizes[i][0]);
//        }
//    }
//
//    sort(big.begin(), big.end());
//    sort(small.begin(), small.end());
//
//    answer = big[big.size() - 1] * small[small.size() - 1];
//    return answer;
//}

///*2016��*/
//
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//string solution(int a, int b) {
//    string answer = "";
//    int month[11] = { 31,29,31,30,31,30,31,31,30,31,30 };
//    int day = 0;
//    string week[7] = { "THU","FRI","SAT","SUN","MON","TUE","WED" };
//    for (int i = 1; i < a; i++)
//    {
//        day += month[i-1];
//    }
//    day += b;
//    answer = week[day % 7];
//    cout << answer;
//    return answer;
//}

/*���α׷��ӽ� level 2*/
//
///*�ִ񰪰� �ּڰ�*/ //fail
//
//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//string solution(string s) {
//    string answer = "";   
//    vector<int> v1;
//    int a[3];
//    vector<int> v2;
//    int i = 0;
//
//    for (int i = 0; i < s.length(); i++)
//    {
//        if (s[i] == ' ')
//            v1.push_back(i);       
//    }
//    v2.push_back(stoi(s));
//    cout << v2[0];
//    for (int i = 1; i < v1.size(); i++)
//    {
//        
//        for (int j = v1[i-1]; j < v1[i]; j++)
//        {
//
//        }
//    }    
//    return answer;
//}
//
//int main()
//{
//    string s = "-1 -2 -3 -4";
//    solution(s);
//}