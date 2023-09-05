#include <iostream>
#include <string>
using namespace std;
// A 65 Z 90  
// a 97 z 122
int main() {
	
	char C[53];
	C[0] = '0';
	for (int i = 1; i <= 26; i++)
	{
		C[i] = 96 + i;
	}
	for (int i = 27; i < 53; i++)
	{
		C[i] = 38 + i;
	}
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < 53; j++)
		{
			if (s[i] == C[j])
			{
				sum += j;
			}
		}
	}
	bool t = true;
	for (int i = 2; i < sum; i++)
	{
		if (sum % i == 0)
		{
			t = false;
		}
	}
	if (t)
	{
		cout << "It is a prime word.\n";
	}
	else
	{
		cout << "It is not a prime word.\n";
	}



	return 0;
}