#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int mini = *min_element(arr, arr + N);
	if (N == 2)
	{
		for (int i = 1; i <= mini; i++)
		{
			if (arr[0] % i == 0 and arr[1] % i == 0)
			{
				cout << i << "\n";
			}
		}
	}
	else if (N == 3)
	{
		for (int i = 1; i <= mini; i++)
		{
			if (arr[0] % i == 0 and arr[1] % i == 0 and arr[2] % i == 0)
			{
				cout << i << "\n";
			}
		}
	}
	
	return 0;
}