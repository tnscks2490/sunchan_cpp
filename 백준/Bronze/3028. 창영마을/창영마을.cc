#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	cin >> s;
	int a = 1, b = 0, c = 0;
	int tmp = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'A')
		{
			tmp = b;
			b = a;
			a = tmp;
		}
		else if (s[i] == 'B')
		{
			tmp = c;
			c = b;
			b = tmp;
		}
		else if (s[i] == 'C')
		{
			tmp = c;
			c = a;
			a = tmp;
		}
	}
	if (a == 1)
	{
		cout << 1 << "\n";
	}
	else if (b == 1)
	{
		cout << 2 << "\n";
	}
	else if (c == 1)
	{
		cout << 3 << "\n";
	}
	return 0;
}