#include <iostream>

using namespace std;

int main() {

	int TC;
	cin >> TC;
	int r, e, c;
	for (int i = 0; i < TC; i++)
	{
		cin >> r >> e >> c;
		if (r > e - c)
		{
			cout << "do not advertise" << endl;
		}
		else if (r == e - c)
		{
			cout << "does not matter" << endl;
		}
		else
		{
			cout << "advertise" << endl;
		}
	}

	return 0;
}