#include <iostream>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	for (int i = 1; i <= 2 * N - 1; i++)
	{
		if (i < N)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << "*";
			}
			for (int k = 0; k < (2 * N) - 2 * i; k++)
			{
				cout << " ";
			}
			for (int j = 1; j <= i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else if (i == N)
		{
			for (int a = 1; a <= 2 * N; a++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else {
			for (int j = 1; j <= N-(i-N); j++)
			{
				cout << "*";
			}
			for (int k=1; k <=2*(i-N);k++)
			{
				cout << " ";
			}
			for (int j = 1; j <= N - (i - N); j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		
	}

	return 0;
}