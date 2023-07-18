#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a, b;
	int count = 1;
	while (true)
	{
		cin >> a >> b;
		
		if (a == "END" and b == "END")
		{
			break;
		}
		else 
		{
			sort(a.begin(),a.end());
			sort(b.begin(),b.end());
			bool s = true;
			if (a.length() == b.length())
			{
				for (int i = 0; i < a.length(); i++)
				{
					if (a[i] != b[i])
					{
						s = false;
					}
				}
				if (s)
				{
					cout << "Case " << count << ": same\n";
				}
				else
				{
					cout << "Case " << count << ": different\n";
				}
			}
			else
			{
				cout << "Case " << count << ": different\n";
			}
		}
		count++;
	}
	return 0;
}