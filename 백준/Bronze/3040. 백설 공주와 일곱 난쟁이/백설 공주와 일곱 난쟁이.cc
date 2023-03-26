#include <iostream>

using namespace std;

int main() {

	int arr[9] = { 0, };
	int result[7] = { 0, };
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}

	sum = sum - 100;
	int a=0, b=0;
	bool t = true;
	for (int i = 0; i < 9; i++)
	{
		for (int j = i; j < 9; j++)
		{
			if (arr[i] + arr[j] == sum) {
				if (i != j)
				{
					a = i;
					b = j;
					t = false;
				}
			}
		}
		if (t = false)
		{
			break;
		}
	}
	int index = 0;
	for (int k = 0; k < 9; k++)
	{
		
		if (k != a and k != b)
		{
			result[index] = arr[k];
			index++;
		}
	}
	for (int o = 0; o < 7; o++)
	{
		cout << result[o] << endl;
	}
	return 0;
}