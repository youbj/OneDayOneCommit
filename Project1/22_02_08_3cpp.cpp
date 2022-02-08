/* 프로그래머스 그리디알고리즘 체육복*/

/*
	전체학생 n명,체육복을 잃어버린 학생 lost, 여분의 체육복이 있는학생 reserve가 주어질때 체육수업을 들을수 있는 
	최대 학생의 수 구하기
	여벌의 옷을 가져온 학생이 체육복을 도둑맞을수 있음 이때, 자신의 것을 남에게 빌려줄수 없다
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) 
{
	int answer = n - lost.size();
	int con=0;

	for (int i = 0; i < lost.size(); i++)
	{
		for (int j = 0; j < reserve.size(); j++)
		{
			if (lost[i]  == reserve[j])
			{
				con++;
				cout << con<<endl;
			}
		}
	}
	answer + con;

	
	for (int i = 0; i < lost.size(); i++)
	{
		for (int j = 0; j < reserve.size(); j++)
		{
			if (lost[i] + 1 == reserve[j])
			{
				answer++;
			}
		}
	}

	return answer;
}

int main()
{
	int n = 30;
	vector<int> a = { 1,30 };
	vector<int> b = { 1,30 };

	cout << solution(n, a, b);

}