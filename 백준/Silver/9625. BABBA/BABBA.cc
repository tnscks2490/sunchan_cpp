#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int* arr = new int[N + 1];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	if (N == 1)
	{
		cout << 0 << " " << 1;
	}
	else 
	{
		for (int i = 3; i <= N; i++)
		{
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		cout << arr[N - 1] << " " << arr[N];
	}
	
	return 0;
}