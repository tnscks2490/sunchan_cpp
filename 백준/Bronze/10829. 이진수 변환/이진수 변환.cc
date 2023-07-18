#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	long long int N=0;
	cin >> N;
	if (N == 0)
	{
		cout << 0 << "\n";
	}
	else
	{
		string s = "";
		while (1)
		{
			if (N == 0)
			{
				break;
			}

			if (N % 2 == 1)
			{
				s += "1";
			}
			else
			{
				s += "0";
			}
			N = N / 2;
		}
		reverse(s.begin(), s.end());
		if (s[0] == '0')
		{
			s.erase(s.begin());
		}
		else
		{
			cout << s << "\n";

		}
		
	}
	
	return 0;
}