#include <iostream>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int count = 0;
	int t = N-1;
	while (K != 0)
	{
		if ((K - arr[t]) >= 0 )
		{
			count = count + K/arr[t];
			K = K % arr[t];
		}
		else
		{
			t--;
		}
	}

	cout << count <<endl;
	return 0;
}