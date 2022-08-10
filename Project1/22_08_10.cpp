#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*백준 2750번*/

//int main() {
//	vector<int> arr;
//	int n;
//	cin >> n;
//
//	int a;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		arr.push_back(a);
//	}
//
//	sort(arr.begin(), arr.end());
//
//	for (int i = 0; i < n - 1; i++) {
//		if (arr[i] == arr[i + 1])
//			return 0;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << endl;
//	}
//}

///*백준 25305번*/
//
//int main() {
//	int n, k;
//	cin >> n >> k;
//	if (n < 0 || n>1000)
//		return 0;
//	if (k<0 || k>n)
//		return 0;
//
//	vector<int> arr;
//	int a;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		arr.push_back(a);
//	}
//
//	sort(arr.begin(), arr.end());
//	cout << arr[arr.size() - k];
//	return 0;
//}

///*백준 11650번*/
//
//int main() {
//	vector<pair< int, int>> arr;
//
//	int n;
//	cin >> n;
//
//	int a,b;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		arr.push_back(make_pair(a, b));
//	}
//
//	sort(arr.begin(), arr.end());
//
//	for (int i = 0; i < n; i++) {
//		cout << arr[i].first<< " " << arr[i].second << "\n";
//	}
//	return 0;
//}

///*백준 2751번*/
//
//int main() {
//	vector<int> arr;
//	int n;
//	cin >> n;
//
//	int a;
//	cin >> a;
//	arr.push_back(a);
//	for (int i = 1; i < n; i++) {
//		cin >> a;
//		arr.push_back(a);
//	}
//
//	sort(arr.begin(), arr.end());
//
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << "\n";
//	}
//	return 0;
//}