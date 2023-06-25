#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int* arr = new int[N];
	int maxnum = 0;
	int start = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	start = arr[0];
	for (int i = 1; i < N; i++)
	{
		if (arr[i] > arr[i-1])
		{
			maxnum = max(maxnum,arr[i] - start);
		}
		else
		{
			start = arr[i];
		}
	}
	cout << maxnum << endl;
	return 0;
}