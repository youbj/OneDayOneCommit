//#include <iostream>
//using namespace std;
//int main() {
//	long long int n;
//	int answer = 0;
//	cin >> n;
//
//	answer += n / 14;
//	n %= 14;
//	answer += n / 7;
//	n %= 7;
//	answer += n;
//
//	cout << answer;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	int h, m; cin >> h >> m;
//
//	for (int i = 0; i < n; i++) {
//		int a; cin >> a;
//		h += a / 60;
//		m += a % 60;
//	}
//	h += m / 60;
//	m %= 60;
//	h %= 24;
//	cout << h << " " << m;
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n; cin >> n;
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		int a, b; char c;
//		cin >> a >> c >> b;
//		switch (c) {
//		case '+':
//			sum += (a + b);
//			break;
//		case '*':
//			sum += (a * b);
//			break;
//		case '-':
//			sum += (a - b);
//			break;
//		case '/':
//			sum += (a / b);
//			break;
//		
//		}
//	}
//	cout << sum;
//	return 0;
//}

#include <iostream>

using namespace std;

int main() {
	int answer = 0;
	int n; cin >> n;
	int check = 0;
	int num = -1;


	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		if (i == 0 || i == n - 1) {
			answer += a;
		}
		else {
			if (i == 1){
				num = a;
				answer += a;
			}
			else if (i == 2) {
				check = num - a;
				answer += a;
			} 
			else {
				if (check == 0) {
					answer += a;
					check = num - a;
				}
				else if (check < 0) {
					answer += a;
					if (num - a > 0) {
						answer = 0;
						break;
					}
					num = a;
				}
				else {
					answer += a;
					if (num - a < 0) {
						answer = 0;
						break;
					}
					num = a;
				}
			}
		}
	}

	cout << answer;
	return 0;
}