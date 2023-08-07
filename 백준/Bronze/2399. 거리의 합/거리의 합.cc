#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int* arr = new int[N];
	long long int sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			sum += llabs(arr[i] - arr[j]);
		}
	}
	cout << sum << "\n";
	return 0;
}