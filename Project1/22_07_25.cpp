//#include <iostream>
//#include <vector>
//
//using namespace std;
//int main()
//{
//    int a, b, c;
//    vector<int> ans;
//    int arr[10] = { 0, };
//    cin >> a >> b >> c;
//    int answer;
//    answer = a * b * c;
//
//    while (answer != 0)
//    {
//        ans.push_back(answer % 10);
//        answer /= 10;
//    }
//    for (int i = 0; i < ans.size(); i++)
//    {
//        for (int j = 0; j < 10; j++)
//        {
//            if (j == ans[i])
//                arr[j]++;
//        }
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << arr[i] << endl;
//    }
//    return 0;
//}