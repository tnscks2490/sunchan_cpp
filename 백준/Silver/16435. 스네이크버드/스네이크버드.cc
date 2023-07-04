#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N, L;
	cin >> N >> L;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);
	for (int i = 0; i < N; i++)
	{
		if (arr[i] <= L)
		{
			L++;
		}
		else
		{
			break;
		}
	}
	cout << L << endl;
	return 0;
}