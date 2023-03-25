#include <iostream>

using namespace std;

int main() {
	int TC;
	cin >> TC;
	int* arr = new int[TC*2];
	for (int i = 0; i < TC; i++)
	{	
		int num[7] = { 0, };
		int sum = 0;
		int even_min = 100;
		for (int j = 0; j < 7; j++)
		{
			cin >> num[j];
			if (num[j] % 2 == 0)
			{
				sum = sum + num[j];
				if (num[j] < even_min)
					even_min = num[j];
			}
		}
		arr[2*i] = sum;
		arr[2 * i + 1] = even_min;
	}

	for (int i = 0; i < TC; i++)
	{
		cout << arr[2 * i] << " " << arr[2 * i + 1] << endl;
	}
	return 0;
}