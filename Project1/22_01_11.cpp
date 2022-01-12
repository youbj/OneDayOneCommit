///* 백준 그리드 알고리즘 1번 동전*/
//
///*
//문제
//1. 동전의 종류 n개와 가치k원이 주어진다
//2. 가치k원을 만드는 동전의 최소 갯수를 구하라
//*/
//
///*
//내가 생각한 해결법
//1. 동전의 종류 n을 입력받았을때 오름차순으로 정렬되어야함으로
//   2로 나눈 몫이 0일경우와 1일경우를 나누어 출력하고 하나의 동적할당배열에 입력한다
//2. 가치k의 값을 동적할당배열의 요소를 역순으로 나눈후 몫이 원래값보다 낮을경우 
//   배열의 요소로 나눈값을 count하고 k의 값을 몫의 값으로 변경한다.
//*/
//
//#include <iostream>
//
//using namespace std;
//
//void PrintSaveOdd(int a, int* arr); // 홀수
//void PrintSaveEve(int a, int* arr); // 짝수
//
//int main()
//{
//	int n, k;
//	int* arr;
//	int count = 0;
//	int i;
//
//	cin >> n >> k; //동전의 종류와 전체 가치입력받음
//
//	arr = new int[n]; // 동전의 가치를 요소로 가지는 배열을 동적할당
//
//	for (i = 0; i < n; i++)
//	{
//		if (i % 2 == 0)//짝수 인덱스의 요소값(1,10,100,1000...)
//		{
//			PrintSaveOdd(i, arr);
//		}
//		if (i % 2 == 1)//홀수 인덱스의 요소값(5,50,500,5000...)
//		{
//			PrintSaveEve(i, arr); 
//		}
//	}
//
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (k % arr[i] < k)
//		{
//			count += k / arr[i];
//			k = k % arr[i];
//		}
//	}
//	cout << count;
//
//	delete[]arr;
//	return 0;
//}
//
//void PrintSaveOdd(int a, int* arr) // 홀수
//{
//	if (a == 0)
//	{
//		arr[a] = 1;
//		cout << arr[a] << endl;	
//	}
//	else
//	{
//		arr[a] = arr[a - 2] * 10;
//		cout << arr[a] << endl;
//	}
//	 
//}
//
//void PrintSaveEve(int a, int* arr) // 짝수
//{
//	if (a == 1)
//	{
//		arr[a] = 5;
//		cout << arr[a] << endl;
//	}
//	else
//	{
//		arr[a] = arr[a - 2] * 10;
//		cout << arr[a] << endl;
//	}
//}
//
///*
//위의 답은 정답이 아니다 
//그 이유는 문제에서 동전의 종류를 입력을 받으라고 했지만 내가 생각했을때는
//규칙성을 가지고있게 출력을 한다고 판단하고 실수를 하였다.
//다음부터는 임의판단하지말고 주어진 주제만을 생각하자
//*/
//
//// 정답
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n, k;
//	int* arr;
//	int count = 0;
//	int i;
//
//	cin >> n >> k; //동전의 종류와 전체 가치입력받음
//
//	arr = new int[n]; // 동전의 가치를 요소로 가지는 배열을 동적할당
//
//	for (i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (k % arr[i] < k)
//		{
//			count += k / arr[i];
//			k = k % arr[i];
//		}
//	}
//	cout << count;
//
//	delete[]arr;
//
//	return 0;
//}