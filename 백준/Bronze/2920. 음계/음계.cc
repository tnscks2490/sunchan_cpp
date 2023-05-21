#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N[8] = { 0, };

	for (int i = 0; i < 8; i++)
	{
		cin >> N[i];
	}
	if (N[0] == 1)
	{
		bool c = true;
		for (int i = 0; i < 8; i++)
		{
			if (i + 1 != N[i])
			{
				cout << "mixed" << endl;
				c = false;
				break;
			}
		}
		if (c == true)
		{
			cout << "ascending" << endl;
		}
	}
	else if (N[0] == 8)
	{
		bool c = true;
		for (int i = 0; i < 8; i++)
		{
			if (8 - i != N[i])
			{
				cout << "mixed" << endl;
				c = false;
				break;
			}
		}
		if (c == true)
		{
			cout << "descending" << endl;
		}
	}
	else
	{
		cout << "mixed" << endl;
	}
	
	
	return 0;
}