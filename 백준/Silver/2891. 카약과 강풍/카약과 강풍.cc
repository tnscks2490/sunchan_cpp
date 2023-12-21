#include <iostream>

using namespace std;

int main() {

	int N, S, R;
	cin >> N >> S >> R;
	int* teamarr = new int[N];
	for (int i = 0; i < N; i++)
	{
		teamarr[i] = 1;
	}
	for (int i = 0; i < S; i++)
	{
		int tmp;
		cin >> tmp;
		teamarr[tmp - 1] = 0;
	}

	for (int i = 0; i < R; i++)
	{
		int tmp;
		cin >> tmp;
		teamarr[tmp - 1] += 1;
	}


	for (int i = 0; i < N; i++)
	{
		if (i == 0)
		{
			if (teamarr[i] == 2)
			{
				if (teamarr[i + 1] == 0)
				{
					teamarr[i + 1] += 1;
				}
			}
		}
		else if (i > 0 && i <N-1)
		{
			if (teamarr[i] == 2)
			{
				if (teamarr[i - 1] == 0)
				{
					teamarr[i - 1] += 1;
				}
				else if (teamarr[i + 1] == 0)
				{
					teamarr[i + 1] += 1;
				}
			}
		}
		else if (i == N - 1)
		{
			if (teamarr[i] == 2)
			{
				if (teamarr[i - 1] == 0)
				{
					teamarr[i - 1] += 1;
				}
			}
		}
	}
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		if (teamarr[i] == 0)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}