#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 1;
	getline(cin, s);
	if (s.size() > 1000000)
		return 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ')
		{
			if (i == 0 || i == s.size() - 1)
				continue;
			count++;
		}

	}
	
	cout << count;
}