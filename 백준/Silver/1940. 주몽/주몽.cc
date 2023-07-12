#include <iostream>

using namespace std;

int main() {

	int N, M;
	cin >> N;
	cin >> M;
	int count = 0;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i != j and arr[i] + arr[j] == M)
			{
				count++;
			}
		}
	}
	cout << count/2 << endl;
	return 0;
}