#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int Num = (2*N-1)/2;
	int Mid = Num + 1;

	for (int i = 1; i <= 2*N-1; i++)
	{
		
		if (i < Mid)
		{
			for (int j = 1; j <= N - i; j++)
			{
				cout << " ";
			}
			for (int j = 1; j <= 2 * i - 1; j++)
			{
				cout << "*";
			}

			cout << endl;
		}
		else if (i == Mid)
		{
			for (int o = 0; o < 2 * N - 1; o++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else
		{
			for (int j = 1; j <= i - N; j++)
			{
				cout << " ";
			}
			for (int j = 1; j <= 2 * (Mid-(i-N)) - 1; j++)
			{
				cout << "*";
			}

			cout << endl;
		}
	}
	return 0;
}