///* ���α׷��ӽ� ���׿��� ã�ƶ� ���α׷��� ������ ���ϸ�*/
//
///* �־��� ���ϸ� n������ n/2������ �������� ������ ���� ���ϸ��� �������� ����*/
///*n�� �׻� ¦��= nums.size()*/
//
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int fac(int n)
//{
//	int a = 1;
//	for (int i = 1; i <= n; i++)
//		a *= i;	
//	return a;
//}
//
//int solution(vector<int> nums)
//{
//	int answer = 0;
//	vector<int> arr;
//	
//	arr.push_back(nums[0]);
//
//	for (int i = 1; i < nums.size(); i++)
//	{
//		if (find(arr.begin(), arr.end(), nums[i]) == arr.end())
//			arr.push_back(nums[i]);
//	}
//	if (arr.size() == 1)
//		answer = 1;
//	else
//		answer = fac(arr.size()) / (fac(arr.size() / 2) * fac(arr.size() - arr.size() / 2));
//
//	//if (answer < nums.size() / 2)
//	//	answer = nums.size()/2;
//	cout << answer;
//	return answer;
//
//}
//
//int main()
//{
//	vector<int> a = { 1,2,3,4,5,6 };
//	solution(a);
//}