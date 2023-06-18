#include <iostream>

using namespace std;

int main() {
	int cup[4] = { 0,1,2,3 };

	int N;
	cin >> N;
	int x, y;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		cup[0] = cup[x];
		cup[x] = cup[y];
		cup[y] = cup[0];
		cup[0] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		if (cup[i] == 1)
		{
			cout << i << endl;
		}
	}
	return 0;
}