#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int* arr = new int[N];
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = N-1; i > 0; i--)
	{
		if (arr[i] <= arr[i -1])
		{
			while (true)
			{
				if (arr[i] > arr[i - 1])
				{
					break;
				}
				else
				{
					arr[i-1]--;
					count++;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}