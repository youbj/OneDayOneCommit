#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

///*백준 5622번*/
//int main() {
//	char s[16];
//	cin >> s;
//	int i = 0;
//	int count = 0;
//
//	while (s[i] != NULL) {
//		if (s[i] >= 'A' && s[i] <= 'C') {
//			count += 3;
//		}
//		else if (s[i] >= 'D' && s[i] <= 'F') {
//			count += 4;
//		}
//		else if (s[i] >= 'G' && s[i] <= 'I') {
//			count += 5;
//		}
//		else if (s[i] >= 'J' && s[i] <= 'L') {
//			count += 6;
//		}
//		else if (s[i] >= 'M' && s[i] <= 'O') {
//			count += 7;
//		}
//		else if (s[i] >= 'P' && s[i] <= 'S') {
//			count += 8;
//		}
//		else if (s[i] >= 'T' && s[i] <= 'V') {
//			count += 9;
//		}
//		else if (s[i] >= 'W' && s[i] <= 'Z') {
//			count += 10;
//		}
//		i++;
//	}
//	cout << count;
//}

///*백준 2941번- 소모시간 14분*/
//
//int main() {
//
//	string s;
//	cin >> s;
//	int i = 0;
//	int a=0;
//	int answer = 0;
//	while (s[i] != NULL) {
//		if (s[i] == '=') {
//			answer++;
//			if (s[i - 1] == 'z' && s[i - 2] == 'd')
//				a++;
//
//		}
//		else if (s[i] == '-') {
//			answer++;
//		}
//		else if (s[i] == 'j') {
//			if (s[i - 1] == 'l' || s[i - 1] == 'n')
//				answer++;
//		}
//		i++;
//	}
//	i = s.length() - (answer * 2);
//	answer += i - a;
//	cout << answer;
//}

///*백준 1712번 -소모시간 6분*/
//
//int main() {
//	int a, b, c;
//
//	cin >> a >> b >> c;
//	if (b > c)
//	{
//		cout << -1;
//		return 0;
//	}
//	int sum = 1;
//	sum += a / (c - b);
//
//	cout << sum;
//}

///*백준 15649번*/
//#define MAX 9
//
//int n, m;
//int arr[MAX] = { 0, };
//bool visited[MAX] = { 0, };
//
//void dfs(int cnt)
//{
//    if (cnt == m)
//    {
//        for (int i = 0; i < m; i++)
//            cout << arr[i] << ' ';
//        cout << '\n';
//        return;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (!visited[i])
//        {
//            visited[i] = true;
//            arr[cnt] = i;
//            dfs(cnt + 1);
//            visited[i] = false;
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//    dfs(0);
//}
