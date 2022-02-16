//#include <string>
//#include <vector>
//#include <set>
//using namespace std;
//
//vector<int> solution(vector<int> numbers) {
//    vector<int> answer;   
//    set<int> ad;
//
//    for (int i = 0; i < numbers.size() - 1; i++)
//    {
//        for (int j = i+1; j < numbers.size(); j++)
//        {
//            ad.insert(numbers[i] + numbers[j]);
//        }      
//    }
//    answer.assign(ad.begin(), ad.end());
//
//    return answer;
//}
//
//int main()
//{
//    vector<int>a = { 2,1,3,4,1 };
//    solution(a);
//}