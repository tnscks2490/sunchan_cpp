#include <iostream>

using namespace std;

int main() {

	int TC;
	cin >> TC;
	int Awin = 0, Bwin = 0;
	for (int i = 0; i < TC; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
		{
			Awin++;
		}
		else if (a < b)
		{
			Bwin++;
		}
	}
	cout << Awin << " " << Bwin << endl;
	return 0;
}