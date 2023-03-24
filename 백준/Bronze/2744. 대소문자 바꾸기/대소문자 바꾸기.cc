#include <iostream>
#include <string>
using namespace std;
// Z = 90
int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (int(s[i]) < 91)
			s[i] = tolower(s[i]);
		else
		{
			s[i] = toupper(s[i]);
		}
	}

	for (int i = 0; i < s.length(); i++)
	{
		cout << s[i];
	}
	return 0;
}