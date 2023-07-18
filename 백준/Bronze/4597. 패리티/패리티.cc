#include <iostream>
#include <string>
using namespace std;

// e는 짝수 패리티
// o는 홀수 패리티
int main() {

	string n;
	while (1)
	{
		cin >> n;
		if(n == "#")
		{
			break;
		}
		int p = 0;
		for (int i = 0; i < n.length(); i++)
		{
			if (n[i] == '1')
			{
				p++;
			}
		}

		if (n[n.length() - 1] == 'e')
		{
			if (p % 2 == 0)
			{
				n.pop_back();
				n += '0';
			}
			else
			{
				n.pop_back();
				n += '1';
			}
			cout << n << '\n';
		}
		else if (n[n.length() - 1] == 'o')
		{
			if (p % 2 == 0)
			{
				n.pop_back();
				n += '1';
			}
			else
			{
				n.pop_back();
				n += '0';
			}
			cout << n << '\n';
		}

	}
	return 0;
}