///*���� �׸���˰��� "����"*/
//
///*
//����
//1. ���̰� N�� �迭 A,B�� ��Ҹ� ���� ���Ͽ� ���� ���� �ּҰ� �Ǵ� ���� ����Ͻÿ�
//2. A�� ��迭���� ������ B�� ��Ҵ� ��迭 �ؼ� �ȵȴ�.
//*/
//
///*
//�Է�
//1. ù��°�� 50���� ���� ���� N�� �Է¹���
//2. �ι�°�� A�� ��Ҹ� �Է¹���
//3. ����°�� B�� ��Ҹ� �Է¹��� -> A��B�� ��Ҵ� 100���� ���� ���� �����̴�
//*/
//
///*
//���� ������ Ǯ�̹�
//1. ���� N�� �Է¹��� �� 2���� �迭�� �����Ҵ��Ѵ�.
//2. B�迭�� ��迭�� �� ���� ������ B�迭�� ����Ͽ� ��迭 �� ���ο� �迭�� �����Ѵ�
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
//		cin >> arrA[i]; // �迭 A�� ���Է�
//	for (i = 0; i < n; i++)
//		cin >> arrB[i]; // �迭 B�� ���Է�
//
//	sort(arrA, arrA + n); // �迭 A�� ������������ ��迭
//
//	arrC = new int[n]; // �迭 B��� �迭�� �迭 C����
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