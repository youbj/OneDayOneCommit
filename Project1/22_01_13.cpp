///*백준 그리디알고리즘 "보물"*/
//
///*
//문제
//1. 길이가 N인 배열 A,B의 요소를 각각 곱하여 더한 합이 최소가 되는 값을 출력하시오
//2. A는 재배열가능 하지만 B의 요소는 재배열 해선 안된다.
//*/
//
///*
//입력
//1. 첫번째로 50보다 작은 정수 N을 입력받음
//2. 두번째로 A의 요소를 입력받음
//3. 세번째로 B의 요소를 입력받음 -> A와B의 요소는 100보다 작은 양의 정수이다
//*/
//
///*
//내가 생각한 풀이법
//1. 먼저 N을 입력받은 후 2개의 배열에 동적할당한다.
//2. B배열을 재배열할 수 없기 때문에 B배열을 대신하여 재배열 될 새로운 배열을 선언한다
//*/
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n, i;
//	int* arrA;
//	int* arrB;
//	int* arrC;
//
//	int result=0;
//
//	cin >> n;
//	arrA = new int[n];
//	arrB = new int[n];
//
//	for (i = 0; i < n; i++)
//		cin >> arrA[i]; // 배열 A에 수입력
//	for (i = 0; i < n; i++)
//		cin >> arrB[i]; // 배열 B에 수입력
//
//	sort(arrA, arrA + n); // 배열 A를 오름차순으로 재배열
//
//	arrC = new int[n]; // 배열 B대신 배열될 배열 C선언
//
//	for (int i = 0; i < n; i++)
//	{
//		arrC[i] = arrB[i];
//	}
//	sort(arrC, arrC + n);
//	reverse(arrC, arrC + n);
//
//	for (i = 0; i < n; i++)
//	{
//		result += arrA[i] * arrC[i];
//	}
//
//	cout << result;
//	delete[]arrA, arrB, arrC;
//	return 0;
//}