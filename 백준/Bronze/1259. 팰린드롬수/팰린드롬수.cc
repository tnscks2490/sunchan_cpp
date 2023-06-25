#include <iostream>

using namespace std;

int main() {
	string input;
	int Len=0;
	while (true)
	{
		cin >> input;
		Len = input.length();
		if (input == "0")
		{
			break;
		}
		else
		{
			if (Len == 1)
			{
				cout << "yes" << endl;
			}
			else if (Len == 2)
			{
				if (input[0] == input[1])
				{
					cout << "yes" << endl;
				}
				else
				{
					cout << "no" << endl;
				}
			}
			else if (Len == 3)
			{
				if (input[0] == input[2])
				{
					cout << "yes" << endl;
				}
				else
				{
					cout << "no" << endl;
				}
			}
			else if (Len == 4)
			{
				if (input[0] == input[3] and input[1] == input[2])
				{
					cout << "yes" << endl;
				}
				else
				{
					cout << "no" << endl;
				}
			}
			else if (Len == 5)
			{
				if (input[0] == input[4] and input[1] == input[3])
				{
					cout << "yes" << endl;
				}
				else
				{
					cout << "no" << endl;
				}
			}
		}
	}
	return 0;
}