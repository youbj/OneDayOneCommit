
#include <iostream>
using namespace std;
/*
1. n개의 정수를 입력받아 동전의 개수 생성
2. k원을 입력받아 동전의 최소 사용 개수 구하기

1. n개의 동전이 1원부터 5원이므로 
*/
int main() {
	int n, k;
	int i;
	int* arr;

	cin >> n >> k;
	arr = new int[n];
	

	if (n % 2 == 0)// 짝수일때 5*10의 i제곱
	{
		for (i = 1; i < n ; i+2)
		{
			arr[i] = 5 * 10 ^ i;
		}
	}

	if (n % 2 == 1)// 홀수일때 10의 i제곱
	{
		for (i = 0; i < n / 2; i++)
		{

		}
	}

	return 0;
}