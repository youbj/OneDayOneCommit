///*���� �׸��� �˰��� "ȸ�ǽǹ���"*/
///* 22.01.17 ~ 01.19 ���� �������� ���Ͽ� 01.17����  */
///*
//����
//1. 1���� ȸ�ǽ��� ����Ϸ��� n���� ȸ�ǿ� ���� ���ǥ�ۼ�
//2. �� ȸ�� i�� �ð��� �־����� ��ġ�°� �Ұ��� ������ ���۽ð��� ������ �ð��� ��ĥ �� �ִ�.
//3. �� ��, ȸ�ǽ��� ����� �� �ִ� �ִ� ȸ���� ���� ���Ͽ���
//*/
//
///*
//�Է�
//1. ȸ���� �� n
//2. ��° �ٺ��� n+1�ٱ��� �� ȸ���� ���۽ð��� �� �ð��� ����" " �� �ΰ� �Է�
//3. ���۽ð��� ������ �ð��� 2^31 -1���� �۰ų� ���� �ڿ���
//*/
//
///*
//���
//�ִ� ȸ���� ��
//*/
//
///*
//���� ������ Ǯ�̹�
//1. n�� �ִ� 100000���� �ü������Ƿ� arr[100000][2]�� �迭�� �����Ͽ� ���
//2. arr[i][1]�� arr[i][2]�� ���� ���� ���� ��(���Ͻ� arr[i][1]�켱)�� ���� ���� ȸ�� �� ������ ������?
//	-> vectorȭ first�� �������� �����Ͽ� first�� second�� ���� ���ϰ� ���� ���� ���� �����Ͽ�
//	   second���� ���� first���ų� ū���� �̵��� �ݺ��ϸ� �ɰͰ���
//3. arr�� ȸ�� ���۽����� �������� �������� �����Ѵٸ� ���ϱ� ���� ���̴�
//	-> vector�� ����ϸ� ����������
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
//	sort(arr.begin(), arr.end()); // ���� �Ϸ�
//	/*
//	1. ���۽ð��� ���ð��� ���� ���� �������� ��� �� �ε����� ����
//	2. �ε����� ���ð��� �������� ���۽ð��� ���Ͽ� ���ð����� ũ�ų� ���� ��� 1�� �ݺ�
//					��
//		0��  0 6	6	
//		1��  1 4	5
//		2��  2 13	15
//		3��  3 5	8
//		4��  3 8	11
//		5��  5 7	12
//		6��  5 9	14
//		7��  6 10	16
//		8��  8 11	19
//		9��  8 12	20
//		10�� 12 14	26
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
///*����*/
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
////		cin >> a[i].second >> a[i].first; // second-> first������ �Է¹���
////	}
////	
////	sort(a.begin(), a.end());
////	// ������ �ð����� ����
////
////	int savetime = 0, ans = 0;
////	// savetime = endtime���� index, ans = count
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
//		0��   1		4	//st =4,ans =1	
//		1��   3		5	//st =7, ans =2
//		2��   0		6	//st =8, ans =3
//		3��   5		7	//st =14 ans =4
//		4��   3		8	
//		5��   5		9	
//		6��   6		10	
//		7��   8		11	
//		8��   8		12
//		9��   2		13
//		10��  12	14	
//*/