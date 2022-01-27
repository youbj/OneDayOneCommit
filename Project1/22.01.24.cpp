///*백준 그리디 알고리즘 "거스름돈"*/
//
///*
//내가 생각한 풀이법
//1. 1000엔을 지불했을때의 거스름돈이므로 몫과 나머지를 이용하면 될것이다
//*/
//
//#include <iostream>
//using namespace std;
//
//int coin[6] = { 500,100,50,10,5,1 };
//
//int main()
//{
//	int n;
//	int cost;
//	int count = 0;
//
//	cin >> n;
//
//	cost = 1000 - n;
//
//	for (int i = 0; i < 6; i++)
//	{
//		count += cost / coin[i];
//		cost = cost % coin[i];
//	}
//	cout << count;
//
//}
