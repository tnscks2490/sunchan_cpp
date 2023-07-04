#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	if (arr[2] - arr[1] == arr[1] - arr[0])
	{
		cout << arr[N - 1] + arr[2] - arr[1] << endl;
	}
	else
	{
		cout << arr[N - 1] * (arr[1] / arr[0]) << endl;
	}
	return 0;
}