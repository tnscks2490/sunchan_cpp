#include <iostream>

using namespace std;

int main() {
	int minkuk[4] = { 0, };
	int minsum = 0;
	int manse[4] = { 0, };
	int mansum = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> minkuk[i];
		minsum += minkuk[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> manse[i];
		mansum += manse[i];
	}

	if (minsum >= mansum)
	{
		cout << minsum << endl;
	}
	else
	{
		cout << mansum << endl;
	}
	return 0;
}