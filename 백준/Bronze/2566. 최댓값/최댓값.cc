#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int arr[9] = { 0, };
	int max=0, x, y;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[j];
		}
		int tmpmax = *max_element(arr, arr + 9);
		if (tmpmax >= max)
		{
			max = tmpmax;
			x = i+1;
			y = max_element(arr, arr + 9) - arr;
			y++;
		}
	}
	cout << max << endl;
	cout << x << " " << y << endl;
	return 0;
}