#include <iostream>

using namespace std;

int main() {

	int TC;
	cin >> TC;
	int* win = new int[TC];
	for (int i = 0; i < TC; i++)
	{
		int N;
		cin >> N;
		int count = 0;
		for (int j = 0; j < N; j++)
		{
			char a, b;
			cin >> a >> b;
			if (a != b)
			{
				if ((a == 'R' and b == 'S') or (a == 'S' and b == 'P')or (a == 'P' and b == 'R'))
				{
					count++;
				}
				else if ((a == 'R' and b == 'P')or (a == 'S' and b == 'R')or (a == 'P' and b == 'S'))
				{
					count--;
				}
				
			}
		}

		if (count > 0)
		{
			win[i] = 1;
		}
		else if (count <0)
		{
			win[i] = 2;
		}
		else
		{
			win[i] = 0;
		}
	}

	for (int i = 0; i < TC; i++)
	{
		if (win[i] == 1)
		{
			cout << "Player 1" << endl;
		}
		else if (win[i] == 2)
		{
			cout << "Player 2" << endl;
		}
		else
		{
			cout << "TIE" << endl;
		}
	}
	return 0;
}