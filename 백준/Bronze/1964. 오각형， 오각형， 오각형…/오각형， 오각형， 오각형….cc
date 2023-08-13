#include <iostream>

using namespace std;
// 5 12 22 35
// 7 10 13 16
int main() {

	int N;
	cin >> N;
	if (N == 1)
	{
		cout << 5;
	}
	else
	{
		long long int P = 0;
		long long int sum = 2;

		int* arr = new int[N - 1];
		arr[0] = 2;
		for (int i = 1; i < N - 1; i++)
		{
			arr[i] = arr[i - 1] + 3;
			sum += arr[i];
		}
		//cout << sum << endl;
		P = N * 5 + sum;
		cout << P % 45678;
	}
	
	return 0;
}