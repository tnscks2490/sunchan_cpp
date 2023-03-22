#include <iostream>

using namespace std;

int main() {

	int K;
	int sum = 0;
	cin >> K;
	int* arr = new int[K];
	for (int i = 0; i < K; i++)
	{
		cin >> arr[i];
	}
	int* result = new int[K];
	for (int i = 0; i < K; i++)
	{
		if (arr[i] != 0)
		{
			result[i] = arr[i];
		}
		else {
			int tmp = i;
			result[i] = arr[i];
			while (true)
			{

				if (result[tmp] == 0)
				{
					tmp--;
				}
				else
				{
					result[tmp] = 0;
					break;
				}
			}
		}
	}
	for (int i = 0; i < K; i++)
	{
		sum = sum + result[i];

	}
	cout << sum << endl;
	return 0;
}