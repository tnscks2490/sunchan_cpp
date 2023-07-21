#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;
	string s,c;
	cin.ignore();
	for (int i = 0; i < N; i++)
	{
		getline(cin, s);
		for (int k = 0; k < s.length(); k++)
		{
			if (s[k] != ' ')
			{
				s[k] = tolower(s[k]);
			}
		}
		c = s;
		bool tr = true;
		reverse(s.begin(), s.end());
		for (int j = 0; j < s.length(); j++)
		{
			if (c[j] != s[j])
			{
				tr = false;
			}
		}
		if (tr)
		{
			cout << "Yes" << "\n";
		}
		else
		{
			cout << "No" << "\n";
		}
	}
	return 0;
}