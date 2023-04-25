#include <iostream>

using namespace std;

int main() {

	int M, D;
	cin >> M;
	cin >> D;
	if (M < 2)
	{
		cout << "Before" << endl;
	}
	else if (M == 2)
	{
		if (D < 18)
		{
			cout << "Before" << endl;
		}
		else if (D == 18)
		{
			cout << "Special" << endl;
		}
		else
		{
			cout << "After" << endl;
		}
	}
	else
	{
		cout << "After" << endl;
	}

	return 0;
}