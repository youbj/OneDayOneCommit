/*22.01.27 프로그래머스 완전탐색 모의고사*/

/*3명의 수포자의 규칙성있는 문제의 답과 정답을 비교하여 최다득점자 출력*/

/*
총 문제는 최대10000문제
1번- 12345반복(5자리) - 2000번반복
2번- 21232425반복(8자리)- 1250번반복
3번- 3311224455반복(10자리) - 1000번반복
5자리의 시험의 답과 비교
*/

//
//vector<int> solution(vector<int> answers) 
//{
//    vector<int> answer;
//    vector<int>Su1 = { 1,2,3,4,5 };
//    vector<int>Su2 = { 2,1,2,3,2,4,2,5 };
//    vector<int>Su3 = { 3,3,1,1,2,2,4,4,5,5 };
//    int s1 = 0, s2 = 0, s3 = 0;
//
//    for (int i = 0; i < 5; i++)
//    {
//        if (answers[i] == Su1[i])
//            s1++;
//    }
//    s1 *= 2000;
//
//    for (int i = 0; i < 8; i++)
//    {
//        if (answers[i] == Su2[i])
//            s2++;
//    }
//    s2 *= 1250;
//
//    for (int i = 0; i < 10; i++)
//    {
//        if (answers[i] == Su3[i])
//            s3++;
//    }
//    s3 *= 1000;
//
//    cout << s1 << s2 << s3;
//    return answer;
//}
//
//int main()
//{
//    vector<int> answers;
//
//    for (int i = 0; i < 5; i++)
//    {
//        cin >> answers[i];
//    }
//    
//   /* for (int i = 0; i < solution(answers).size(); i++)
//    {
//        cout << solution(answers)[i];
//    }*/
//}

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> answers;
	int a;

	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		answers.push_back(a);
	}

	vector<int> answer;
	vector<int>Su1 = { 1,2,3,4,5 };
	vector<int>Su2 = { 2,1,2,3,2,4,2,5 };
	vector<int>Su3 = { 3,3,1,1,2,2,4,4,5,5 };
	int s1 = 0, s2 = 0, s3 = 0;
	int i;
	int k = 0;

	for (i = 0; i < answers.size(); i++)
	{
		if (i % 5 == 0)
			k++;

		if (i < 5)
		{
			if (answers[i] == Su1[i])
				s1++;
		}
		else
		{
			if (answers[i] == Su1[i - (5 * k)])
				s1++;
		}
	}
	k = 0;

	for (i = 0; i < answers.size(); i++)
	{
		if (i % 8 == 0)
			k++;

		if (i < 8)
		{
			if (answers[i] == Su2[i])
				s2++;
		}
		else
		{
			if (answers[i] == Su2[i - (8 * k)])
				s2++;
		}
	}
	k = 0;

	for (i = 0; i < answers.size(); i++)
	{
		if (i % 10 == 0)
			k++;

		if (i < 10)
		{
			if (answers[i] == Su3[i])
				s3++;
		}
		else
		{
			if (answers[i] == Su3[i - (10 * k)])
				s3++;
		}
	}  

	vector<int>des;
	des.push_back(s1);
	des.push_back(s2);
	des.push_back(s3);
	sort(des.begin(), des.end());

	if (des[2] == s1)
		answer.push_back(1);
	if (des[2] == s2)
		answer.push_back(2);
	if (des[2] == s3)
		answer.push_back(3);

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << " ";
	}
}