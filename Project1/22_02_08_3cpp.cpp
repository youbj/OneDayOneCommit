/* ���α׷��ӽ� �׸���˰��� ü����*/

/*
	��ü�л� n��,ü������ �Ҿ���� �л� lost, ������ ü������ �ִ��л� reserve�� �־����� ü�������� ������ �ִ� 
	�ִ� �л��� �� ���ϱ�
	������ ���� ������ �л��� ü������ ���ϸ����� ���� �̶�, �ڽ��� ���� ������ �����ټ� ����
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