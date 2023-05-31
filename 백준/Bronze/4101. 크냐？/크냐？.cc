#include <iostream>

using namespace std;

int main() {

	int a, b;

	while (true)
	{
		cin >> a >> b;
		if (a > b)
		{
			cout << "Yes" << endl;
		}
		else if (a < b)
		{
			cout << "No" << endl;
		}
		else
		{
			if (a == 0)
			{
				break;
			}
			else
			{
				cout << "No" << endl;
			}
		}
	}
	return 0;
}