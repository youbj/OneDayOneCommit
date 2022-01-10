/*백준 그리디 알고리즘 3번 ATM문제*/

/*문제
1. atm 기기는 한대이다
2. n명의 사람들이 돈을 인출한다 할때 돈을 뽑는시간은 P이다
3. 돈을 뽑는 n명의 사람들이 소모하게 될 대기시간의 합을 최소화 하여 그값을 출력하라
*/

/*
내가 생각한 해결 방법
1. n명의 사람을 입력받아 동적할당 후 P를 배열의 요소로 가진다
2. 대기시간의 합을 최소화 하기위해선 인출시간이 빠른 사람부터 돈을 뽑으면 될것이다
3. 그러므로 최소값 나열을 한 후, 배열의 각 요소간 합을 구하여 출력한다.
*/


#include <iostream>
#include <algorithm> // sort함수 사용을 위한 알고리즘 헤더

using namespace std;


//1번 알고리즘 헤더파일 사용
//int main()
//{
//	int n;//대기 인원
//	int* arr; // 대기인원당 대기시간을 저장할 배열
//	int count = 0;
//	int result = 0;
//	int i;
//	cin >> n;
//	arr = new int[n];// 동적할당
//
//	for (i = 0; i < n; i++)
//		cin >> arr[i]; // 대기 시간 입력
//
//	sort(arr, arr + n);
//
//	for (i = 0; i < n; i++)
//	{
//		count += arr[i];
//		result += count;
//	}
//	cout << result;
//  delete[]arr;
//	return 0;
//}

//2번 함수이용
void minarr(int a, int *arr);

int main()
{
	int n,i;
	int* arr;
	int count = 0, result = 0;

	cin >> n;
	arr = new int[n];

	for (i = 0; i < n; i++)
		cin >> arr[i];

	for (i = 1; i < n; i++)
	{
		minarr(i, arr);
	}

	for (i = 0; i < n; i++)
	{
		count += arr[i];
		result += count;
	}
	cout << result;
}

void minarr(int a, int* arr)
{
	int b=0;

	for (int j = 0; j < a; j++)
	{
		if (arr[a] < arr[j])
		{
			b = arr[a];
			arr[a] = arr[j];
			arr[j] = b;
		}
	}
}

