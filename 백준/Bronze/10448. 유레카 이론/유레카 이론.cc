#include <iostream>

using namespace std;

int main() {

	int arr[44];
	arr[0] = 1;
	for (int i = 1; i < 44; i++)
	{
		arr[i] = arr[i - 1] + i + 1;
	}
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int a;
		cin >> a;
		bool t=false;
		for (int j = 0; j < 44; j++)
		{
			for (int k = 0; k < 44; k++)
			{
				for (int o = 0; o < 44; o++)
				{
					if (arr[j] + arr[k] + arr[o] == a)
					{
						t = true;
					}
				}
			}
		}
		if (t)
		{
			cout << "1\n";
		}
		else
		{
			cout << "0\n";
		}
	}

	return 0;
}