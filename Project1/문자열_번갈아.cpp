///*
//요청사항 
// 문자열을 앞뒤로 번갈아 출력하시오
// 100자이내의 문자열 입력
// 입력된 문자열의 앞뒤로 출력
//*/
//
///*
//해결방법
//1. string을 이용하여 문자열 입력받고 함수 length를 이용하여 문자열의 길이 구함
//2. 순서대로 앞과 뒤에서 출력하므로 변수를 이용하여 순서대로 출력
//*/
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string str;
//	cin >> str;
//	int len = str.length();
//	for (int i = 0; i < len; i++)
//	{
//		if (i == len - 1)
//		{
//			cout << str[i];
//			return 0;
//		}
//		cout << str[i] << str[len - 1];
//		len -= 1;
//	}
//
//	return 0;
//}