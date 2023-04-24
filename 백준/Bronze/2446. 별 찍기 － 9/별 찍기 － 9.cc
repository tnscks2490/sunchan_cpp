#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	for (int i = 0; i < 2 * N - 1; i++)
	{
		if (i < N)
		{
			for (int j = 0; j < i; j++)
			{
				cout << " ";
			}
			for (int o = 1; o < 2 * (N -i); o++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else 
		{
			for (int j = 0; j < (2*N-2)-i; j++)
			{
				cout << " ";
			}
			for (int o = 0; o <= 2*i-(2*N-2); o++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
}