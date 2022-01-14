///*백준 그리디 알고리즘 "주유소"*/
//
///*
//문제
//1. 어떤 나라에는 n개의 도시가 일직성 도로위에 존재
//2. 가장 왼쪽 도시에서 가장 오른쪽 도시까지 이동,각도시 간 거리는 다를 수 있고, km사용
//3. 차는 출발할 때 기름을 넣어야하며 1km당 1L이다
//4. 각 도시당 주유소가 존재하나 기름의 가격이 다를 수 있다.
//5. 출발지부터 목적지까지의 거리를 갈때 최소비용을 구하여라 
//*/
//
///*
//입력
//1. 도시의 수 n개(2이상 100,000이하의 자연수)
//2. 인접한 두 도시간의 거리 n-1개
//3. 각 도시 주유소의 기름가격 n개
//거리의 총합,기름의 총가격은 1이상 1,000,000,000 이하의 자연수
//*/
//
///*
//출력
//최소비용
//*/
//
///*
//내가 생각한 풀이법
//1. n을 입력받아 도시간의 거리(Dis)와 주요소 기름 가격(Gas)을 저장할 배열 동적할당후 입력받음
//2. Gas에 인덱스를 설정하여 다음 주요소의 가격이 이전주유소보다 쌀 경우 인덱스 변경, 아닐경우 유지
//3. 변경될 경우 인덱스부터 인덱스+1까지 곱한후 result값에 합
//---------------------------------------------------------------------
//1단계 - 내림차순일 때
//2 - 오름차순일 때
//3. 다 같을 때
//
//if(gas의 인덱스가 gas[i]보다 클경우)
//	
//else if(gas의 인덱스가 gas[i]와 같을경우
//
//else 
//
//*/
//
///*내가 푼 답 58점*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	int i;
//	int* Dis;
//	int* Gas;
//	int index = 0;
//	int result = 0;
//
//	cin >> n;
//
//	Gas = new int[n];
//
//	fill_n(Gas, n, 1);
//
//	Dis = new int[n - 1];
//	for (i = 0; i < n - 1; i++)
//		cin >> Dis[i];
//	for (i = 0; i < n; i++)
//		cin >> Gas[i];
//
//	index = Gas[0];
//	for (i = 1; i < n; i++)
//	{
//		if (index > Gas[i])
//		{
//			result += index * Dis[i - 1];
//			index = Gas[i];
//		}
//		else
//			result += index * Dis[i - 1];
//	}
//	cout << result;
//
//	delete[]Dis;
//	delete[]Gas;
//	return 0;
//}
//
///* 정답 100점*/
//#include <iostream> 
//
//using namespace std;
//long long oil_price[100000];// 나와 차이점 1. 동적할당이아닌 전역변수를 활용하여 최대크기까지 지정
//long long road[100000]; // 나와 차이점 2. longlong을 이용하여 int의 크기적 한계를 극복
//
//int main()
//{
//	long long city;
//	long long min;
//	long long total; 
//
//	cin >> city;
//
//	for (int i = 0; i < city - 1; i++)
//	{
//		cin >> road[i];
//	}
//	for (int i = 0; i < city; i++)
//	{
//		cin >> oil_price[i];
//	}
//
//	min = oil_price[0];
//	total = min * road[0]; // 나와다른점 3. 아예 시작값을 더하고 시작
//						   
//	for (int i = 0; i < city; i++)
//	{
//		if (min >= oil_price[i + 1]) // 나와 다른점 4 else를 사용하지 않고 조건문을 변화하여 간단하게 만듬
//		{
//			min = oil_price[i + 1];
//		}
//		total += min * road[i + 1];
//	}
//	cout << total; 
//	return 0;
//}
//
//
