/*���� �׸��� �˰��� 3�� ATM����*/

/*����
1. atm ���� �Ѵ��̴�
2. n���� ������� ���� �����Ѵ� �Ҷ� ���� �̴½ð��� P�̴�
3. ���� �̴� n���� ������� �Ҹ��ϰ� �� ���ð��� ���� �ּ�ȭ �Ͽ� �װ��� ����϶�
*/

/*
���� ������ �ذ� ���
1. n���� ����� �Է¹޾� �����Ҵ� �� P�� �迭�� ��ҷ� ������
2. ���ð��� ���� �ּ�ȭ �ϱ����ؼ� ����ð��� ���� ������� ���� ������ �ɰ��̴�
3. �׷��Ƿ� �ּҰ� ������ �� ��, �迭�� �� ��Ұ� ���� ���Ͽ� ����Ѵ�.
*/


#include <iostream>
#include <algorithm> // sort�Լ� ����� ���� �˰��� ���

using namespace std;


//1�� �˰��� ������� ���
//int main()
//{
//	int n;//��� �ο�
//	int* arr; // ����ο��� ���ð��� ������ �迭
//	int count = 0;
//	int result = 0;
//	int i;
//	cin >> n;
//	arr = new int[n];// �����Ҵ�
//
//	for (i = 0; i < n; i++)
//		cin >> arr[i]; // ��� �ð� �Է�
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

//2�� �Լ��̿�
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

