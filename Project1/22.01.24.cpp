/*���� �׸��� �˰��� "�Ž�����"*/

/*
���� ������ Ǯ�̹�
1. 1000���� ������������ �Ž������̹Ƿ� ��� �������� �̿��ϸ� �ɰ��̴�
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	int cost;
	int count = 0;

	cin >> n;

	cost = 1000 - n;

	if (cost / 500 > 0)
	{
		count += cost / 500;
		cost = cost % 500;
	}	
	if (cost / 100 > 0)
	{
		count += cost / 100;
		cost = cost % 100;
	}
	if (cost / 50 > 0)
	{
		count += cost / 50;
		cost = cost % 50;
	}
	if (cost / 10 > 0)
	{
		count += cost / 10;
		cost = cost % 10;
	}
	if (cost / 1 > 0)
	{
		count += cost / 1;
	}
	cout << count;

}
