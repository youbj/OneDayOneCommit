
#include <iostream>
using namespace std;
/*
1. n���� ������ �Է¹޾� ������ ���� ����
2. k���� �Է¹޾� ������ �ּ� ��� ���� ���ϱ�

1. n���� ������ 1������ 5���̹Ƿ� 
*/
int main() {
	int n, k;
	int i;
	int* arr;

	cin >> n >> k;
	arr = new int[n];
	

	if (n % 2 == 0)// ¦���϶� 5*10�� i����
	{
		for (i = 1; i < n ; i+2)
		{
			arr[i] = 5 * 10 ^ i;
		}
	}

	if (n % 2 == 1)// Ȧ���϶� 10�� i����
	{
		for (i = 0; i < n / 2; i++)
		{

		}
	}

	return 0;
}