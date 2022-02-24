//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <map>
//using namespace std;
//
////n은 스테이지의 총 수/ stages는 유저가 깬 스테이지
//vector<int> solution(int N, vector<int> stages) {
//    vector<int> answer;
//    vector<int> sum;
//    vector<double> v;
//    vector<double>d;
//    int size = stages.size();
//    int count=1;
//
//    sort(stages.begin(), stages.end());
//
//    sum.push_back(stages[0]);
//    for (int i = 1; i < size; i++)
//    {
//        if (stages[i] != stages[i - 1])
//            sum.push_back(stages[i]);
//    }//12346 or 4
//
//    for (int i = 1; i < size ; i++)//0~7 0 1 2 3 4 5 6 
//    {       
//        if (stages[i-1] == stages[i])
//        {
//            count++;
//        }
//        else
//        {
//            v.push_back(count);
//            count = 1;
//        }
//    }   
//    v.push_back(count);
//
//    for (int i = 0; i < v.size(); i++)
//    {   
//		d.push_back(v[i] / size);      
//        size -= v[i];
//    }
//
//    if (sum[sum.size() - 1] > N)
//    {
//        d[d.size() - 1] = 0;
//        sum[sum.size() - 1] = N;
//    }
//
//    vector<double>dd = d;
//    vector<int>check;
//    sort(dd.begin(), dd.end());
//    reverse(dd.begin(), dd.end());
//
//    for (int i = 0; i < v.size(); i++)
//    {
//        int a = find(d.begin(), d.end(), dd[i]) - d.begin();
//        check.push_back(a);
//    }
//
//    for (int i = 0; i < check.size() - 1; i++)
//    {
//        if (check[i] == check[i + 1])
//            check[i + 1] += 1;
//    }
//
//    for (int i = 0; i < check.size(); i++)
//    {
//        answer.push_back(sum[check[i]]);
//    }
//
//    for (int i = 1; i <= N; i++)
//    {
//        if (find(answer.begin(), answer.end(), i) == answer.end())
//            answer.push_back(i);
//    }  
//    return answer;
//}
//
//int main()
//{
//    int n = 5;
//    vector<int> s = { 2, 1, 2, 6, 2, 4, 3, 3 };
//    solution(n, s);
//    int n1 = 4;
//    vector<int> s1 = { 4,4,4,4,4 };
//    solution(n1, s1);
//}
//
//
////정답
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//bool cmp(pair<double, int> a, pair<double, int> b) {
//    if (a.first == b.first)return a.second < b.second;
//    else return a.first > b.first;
//
//}
//
//vector<int> solution(int N, vector<int> stages) {
//    vector<int> answer;
//    vector<pair<double, int>> per; //실패율을 저장할 벡터
//    map<int, double> ma; 
//    int size = stages.size();
//
//    for (int i = 0; i < size; i++) 
//    {
//        ma[stages[i]]++;
//    }// 맵을 이용하여 중복된 숫자를 카운트하여 정렬
//
//    double minus_mem = 0;
//    for (int i = 1; i <= N; i++) {
//        if (ma[i] == 0) {
//            per.push_back({ 0,i });
//            continue;
//        }
//        per.push_back({ ma[i] / (size - minus_mem),i });
//        minus_mem += ma[i];
//    }
//
//    sort(per.begin(), per.end(), cmp);
//
//    for (auto o : per) {
//        answer.push_back(o.second);
//    }
//
//    return answer;
//}