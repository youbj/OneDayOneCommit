//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int arr[3];
//	int answer = 0;
//	cin >> arr[0] >> arr[1] >> arr[2];
//	if (arr[0] == arr[1] || arr[0] == arr[2]) {
//		if (arr[1] == arr[2])
//			answer = 10000 + (arr[0] * 1000);
//		else
//			answer = 1000 + (arr[0] * 100);
//	}
//	else if (arr[1] == arr[2]) {
//		answer = 1000 + (arr[1] * 100);
//	}
//	else {
//		int max = arr[0];
//		max = max < arr[1] ? arr[1] : max;
//		max = max < arr[2] ? arr[2] : max;
//		answer = max * 100;
//	}
//	cout << answer;
//}