#include <iostream>

using namespace std;

int main() {

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int n;
		cin >> n;
		int* arr = new int[n+1] {0, };
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (j % i == 0)
				{
					if (arr[j] == 0)
					{
						arr[j] = 1;
					}
					else if (arr[j] == 1)
					{
						arr[j] = 0;
					}
				}
			}
		}
		int sum = 0;
		for (int k = 0; k <= n; k++)
		{
			if (arr[k] == 1)
			{
				sum++;
			}
		}
		cout << sum << "\n";
	}
	
	return 0;
}