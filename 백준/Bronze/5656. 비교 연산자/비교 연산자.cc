#include <iostream>

using namespace std;

int main() {
	int a, b;
	string t;
	int count = 1;
	while (true)
	{
		cin >> a >> t >> b;
		if (t.length() == 1)
		{
			if (t == ">")
			{
				if (a > b)
				{
					cout << "Case "<<count<<": " << "true" << endl;
				}
				else
				{
					cout << "Case " << count << ": " << "false" << endl;
				}
			}
			else if (t == "<")
			{
				if (a < b)
				{
					cout << "Case " << count << ": " << "true" << endl;
				}
				else
				{
					cout << "Case " << count << ": " << "false" << endl;
				}
			}
			else if (t == "E")
			{
				break;
			}
		}
		else
		{
			if (t == ">=")
			{
				if (a >= b)
				{
					cout << "Case " << count << ": " << "true" << endl;
				}
				else
				{
					cout << "Case " << count << ": " << "false" << endl;
				}
			}
			else if (t == "<=")
			{
				if (a <= b)
				{
					cout << "Case " << count << ": " << "true" << endl;
				}
				else
				{
					cout << "Case " << count << ": " << "false" << endl;
				}
			}
			else if (t == "==")
			{
				if (a == b)
				{
					cout << "Case " << count << ": " << "true" << endl;
				}
				else
				{
					cout << "Case " << count << ": " << "false" << endl;
				}
			}
			else if (t == "!=")
			{
				if (a != b)
				{
					cout << "Case " << count << ": " << "true" << endl;
				}
				else
				{
					cout << "Case " << count << ": " << "false" << endl;
				}
			}
		}
		count++;
	}
	
	return 0;
}