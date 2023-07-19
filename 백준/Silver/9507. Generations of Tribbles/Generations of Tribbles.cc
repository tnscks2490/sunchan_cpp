#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int M = *max_element(arr, arr + N);
	if (M < 4)
	{
		for (int i = 0; i < N; i++)
		{
			if (arr[i] == 1)
			{
				cout << 1 << "\n";
			}
			else if (arr[i] == 2)
			{
				cout << 2 << "\n";
			}
			else if (arr[i] == 3)
			{
				cout << 4 << "\n";
			}
		}
	}
	else
	{
		long long int* Pibo = new long long int[M+1];
		Pibo[0] = 1;
		Pibo[1] = 1;
		Pibo[2] = 2;
		Pibo[3] = 4;
		for (int i = 4; i <= M; i++)
		{
			Pibo[i] = Pibo[i - 4] + Pibo[i - 3] + Pibo[i - 2] + Pibo[i - 1];
		}
		for (int i = 0; i < N; i++)
		{
			cout << Pibo[arr[i]] <<"\n";
		}
	}
	
	return 0;
}