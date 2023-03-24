#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (int(s[i]) > 64 and int(s[i] < 91))
		{
			if (int(s[i]) + 13 > 90)
			{
				s[i] = (int(s[i]) + 13- 90)+64;
			}
			else
				s[i] = int(s[i]) + 13;
		}
		if (int(s[i]) > 96 and int(s[i] < 123))
		{
			if (int(s[i]) + 13 > 122)
			{
				s[i] = (int(s[i]) + 13 - 122) + 96;
			}
			else
				s[i] = int(s[i]) + 13;
		}
	}

	for (int i = 0; i < s.length(); i++)
	{
		cout << s[i];
	}
	return 0;
}