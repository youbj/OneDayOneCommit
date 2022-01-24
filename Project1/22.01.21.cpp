///*백준 그리디 알고리즘 "회의실배정"*/
///* 22.01.17 ~ 01.19 까지 여행으로 인하여 01.17일자  */
///*
//문제
//1. 1개의 회의실을 사용하려는 n개의 회의에 대한 사용표작성
//2. 각 회의 i의 시간은 주어지며 겹치는건 불가능 하지만 시작시간과 끝나는 시간은 겹칠 수 있다.
//3. 이 때, 회의실을 사용할 수 있는 최대 회의의 수를 구하여라
//*/
//
///*
//입력
//1. 회의의 수 n
//2. 둘째 줄부터 n+1줄까지 각 회의의 시작시간과 끝 시간을 공백" " 을 두고 입력
//3. 시작시간과 끝나는 시간은 2^31 -1보다 작거나 같은 자연수
//*/
//
///*
//출력
//최대 회의의 수
//*/
//
///*
//내가 생각한 풀이법
//1. n이 최대 100000까지 올수있으므로 arr[100000][2]의 배열을 선언하여 사용
//2. arr[i][1]과 arr[i][2]의 합이 가장 작은 것(동일시 arr[i][1]우선)이 가장 먼저 회의 할 수있지 않을까?
//	-> vector화 first를 오름차순 정렬하여 first와 second의 합을 구하고 가장 같은 수를 도출하여
//	   second값이 다음 first같거나 큰수로 이동후 반복하면 될것같다
//3. arr을 회의 시작시작을 기준으로 오름차순 정렬한다면 구하기 편할 것이다
//	-> vector를 사용하면 되지않을까
//*/
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	long long n;
//
//	cin >> n;
//	vector<pair<int, int>>arr(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i].first >> arr[i].second;	
//	}
//
//	sort(arr.begin(), arr.end()); // 정렬 완료
//	/*
//	1. 시작시간과 끝시간의 합이 가장 작은수를 잡고 그 인덱스를 저장
//	2. 인덱스의 끝시간과 나머지의 시작시간을 비교하여 끝시간보다 크거나 같을 경우 1번 반복
//					합
//		0번  0 6	6	
//		1번  1 4	5
//		2번  2 13	15
//		3번  3 5	8
//		4번  3 8	11
//		5번  5 7	12
//		6번  5 9	14
//		7번  6 10	16
//		8번  8 11	19
//		9번  8 12	20
//		10번 12 14	26
//	*/
//	int index = 0;
//	int endtime = 0;
//	int count = 0;
//	for (int j = index; j < n; j++)
//	{
//		int min = arr[n - 1].first + arr[n - 1].second;
//
//		for (int i = j+1; i < n; i++)
//		{
//			if (endtime < arr[i].first)
//			{
//				if (arr[i].first + arr[i].second < min)
//				{
//					min = arr[i].first + arr[i].second;
//					index = i;
//					endtime = arr[i].second;
//				}
//			}
//		}
//		count++;	
//		if (endtime > arr[n - 1].first)
//			break;	
//		cout << endtime << " " << count << endl;
//	}
//	cout << count;
//	return 0;
//}
//
///*정답*/
//
////#include <iostream>
////#include <vector>
////#include <algorithm>
////
////using namespace std;
////
////int main() 
////{
////	int n;
////	cin >> n;
////	vector<pair<int, int>> a(n);
////
////	for (int i = 0; i < n; i++) {
////		cin >> a[i].second >> a[i].first; // second-> first순으로 입력받음
////	}
////	
////	sort(a.begin(), a.end());
////	// 끝나는 시간으로 정렬
////
////	int savetime = 0, ans = 0;
////	// savetime = endtime이자 index, ans = count
////	for (int i = 0; i < n; i++) 
////	{
////		if (savetime <= a[i].second) 
////		{
////			savetime = a[i].first;
////			ans++;
////			//cout << endl << "st:" << savetime << "ans: " << ans;
////		}
////	}
////	printf("%d", ans);
////
////}
///*			second first
//		0번   1		4	//st =4,ans =1	
//		1번   3		5	//st =7, ans =2
//		2번   0		6	//st =8, ans =3
//		3번   5		7	//st =14 ans =4
//		4번   3		8	
//		5번   5		9	
//		6번   6		10	
//		7번   8		11	
//		8번   8		12
//		9번   2		13
//		10번  12	14	
//*/