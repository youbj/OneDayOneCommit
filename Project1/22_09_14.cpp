#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;

///*1041 주사위*/
///* 3개인 면 4개 (n-2)*4 + (n-1)*4 + (n-2)^2 + (n-2)*(n-1) */
//
//int main() {
//
//	int n;
//	cin >> n;
//	long long int arr[6];
//	long long int max = 0;
//	int k;
//	for (int i = 0; i < 6; i++) {
//		cin >> arr[i];
//		if (arr[i] > max)
//			k = i;
//	}
//	arr[k] = 0;
//	sort(arr, arr + 6);
//	long long int answer = 0;
//	long long int a = arr[0];
//	if (n > 2) {
//		answer += (a * 4 * ((n - 2) * (n - 1) + (n - 2) * (n - 2)));
//	}
//	a += arr[1];
//
//	answer += (a * 4 * ((2 * n) - 3));
//
//	a += arr[2];
//
//
//	cout << answer;
//}