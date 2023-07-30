#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	int one = 0, zero = 0;
	for (int i = 0; i < s.length()-1; i++)
	{
		if (s[i] != s[i + 1])
		{
			if (s[i] == '1')
			{
				one++;
			}
			else if (s[i] == '0')
			{
				zero++;
			}
		}
	}
	if (s[s.length()-1] == '1')
	{
		one++;
	}
	else if (s[s.length()-1] == '0')
	{
		zero++;
	}
		


	cout << min(one, zero);
	return 0;
}