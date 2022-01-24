/*백준 그리디 알고리즘 "회의실배정"*/
/* 22.01.17 ~ 01.19 까지 여행으로 인하여 01.17일자  */
/*
문제
1. 1개의 회의실을 사용하려는 n개의 회의에 대한 사용표작성
2. 각 회의 i의 시간은 주어지며 겹치는건 불가능 하지만 시작시간과 끝나는 시간은 겹칠 수 있다.
3. 이 때, 회의실을 사용할 수 있는 최대 회의의 수를 구하여라
*/

/*
입력
1. 회의의 수 n
2. 둘째 줄부터 n+1줄까지 각 회의의 시작시간과 끝 시간을 공백" " 을 두고 입력
3. 시작시간과 끝나는 시간은 2^31 -1보다 작거나 같은 자연수
*/

/*
출력
최대 회의의 수
*/

/*
내가 생각한 풀이법
1. n이 최대 100000까지 올수있으므로 arr[100000][2]의 배열을 선언하여 사용
2. arr[i][1]과 arr[i][2]의 합이 가장 작은 것(동일시 arr[i][1]우선)이 가장 먼저 회의 할 수있지 않을까?
	-> vector화 first를 오름차순 정렬하여 first와 second의 합을 구하고 가장 같은 수를 도출하여
	   second값이 다음 first같거나 큰수로 이동후 반복하면 될것같다
3. arr을 회의 시작시작을 기준으로 오름차순 정렬한다면 구하기 편할 것이다
	-> vector를 사용하면 되지않을까
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>>arr;
int a, b;

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		arr.push_back(pair<int,int>(a, b));
	}

	sort(arr.begin(), arr.end());
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].first << " " << arr[i].second;
	}


	return 0;
}