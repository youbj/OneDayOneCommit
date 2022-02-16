///* 프로그래머스 코테연습 찾아라 프로그래밍 마스터 폰켓몬*/
//
///* 주어진 포켓몬 n마리중 n/2마리를 가져가도 좋지만 같은 포켓몬을 가져갈수 없다*/
///*n은 항상 짝수= nums.size()*/
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