#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		if (i != N)
		{
			if (i == 1)
			{
				for (int k = 0; k < N - i; k++)
				{
					cout << " ";
				}
				cout << "*" << endl;
			}
			else if (i != 1)
			{
				for (int k = 0; k < N - i; k++)
				{
					cout << " ";
				}
				cout << "*";
				for (int o = 0; o < 2 * (i - 1) - 1; o++)
				{
					cout << " ";
				}
				cout << "*" << endl;
			}

		}
		else if (i == N)
		{
			for (int j = 0; j < 2 * N - 1; j++)
			{
				cout << "*";
			}
		}
	}
	return 0;
}