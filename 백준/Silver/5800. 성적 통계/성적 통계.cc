#include <iostream>
#include <algorithm>
using namespace std;
//int MAX_num(int a);
//int MIN(int a);
//int Largest_gap(int a);
int main() {
	int TC;
	cin >> TC;

	int* maxarr = new int[TC];
	int* minarr = new int[TC];
	int* large_gap = new int[TC];
	for (int i = 0; i < TC; i++)
	{
		int a;
		cin >> a;
		int* arr = new int[a];
		for (int i = 0; i < a; i++)
		{
			cin >> arr[i];
		}
		maxarr[i] = *max_element(arr, arr + a);
		minarr[i] = *min_element(arr, arr + a);
		sort(arr, arr + a);
		int gap = arr[1] - arr[0];
		for (int i = 0; i < a-1; i++)
		{
			if (arr[i + 1] - arr[i] > gap)
			{
				gap = arr[i + 1] - arr[i];
			}
		}
		large_gap[i] = gap;
		delete arr;
	}
	for (int i = 0; i < TC; i++)
	{
		cout << "Class " << i+1 << endl;
		cout << "Max " << maxarr[i] << ", Min " << minarr[i] << ", Largest gap " << large_gap[i] << endl;
	}
	delete maxarr;
	delete minarr;
	delete large_gap;
	return 0;
}