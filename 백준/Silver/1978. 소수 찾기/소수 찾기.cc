#include <iostream>

using namespace std;

int main() {
	int TC;
	cin >> TC;
	int* arr = new int[TC];
	for (int i = 0; i < TC; i++)
	{
		cin >> arr[i];
	}
	int count = 0;
	for (int i = 0; i < TC; i++)
	{
		int tmp = 0;
		for (int j = 1; j <= arr[i]/2; j++)
		{
			if (arr[i] % j == 0)
			{
				tmp++;
			}
		}
		if (tmp < 2 and tmp >0)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}