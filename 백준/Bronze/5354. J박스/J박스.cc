#include <iostream>

using namespace std;

int main() {

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int a;
		cin >> a;
		if (a == 1)
		{
			cout << "#" << "\n\n";
		}
		else
		{
			for (int k = 0; k < a; k++)
			{
				cout << "#";
			}
			cout << "\n";
			for (int t = 0; t < a - 2; t++)
			{
				cout << "#";
				for (int j = 1; j < a - 1; j++)
				{
					cout << "J";
				}
				cout << "#\n";
			}
			for (int k = 0; k < a; k++)
			{
				cout << "#";
			}
			cout << "\n\n";
		}
		

	}
	return 0;
}
