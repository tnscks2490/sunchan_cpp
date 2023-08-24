#include <iostream>

using namespace std;

int main() {

	int N, M;
	cin >> N >> M;
	int* arr = new int[N + 1] {0, };
	for (int t = 0; t < M; t++)
	{
		int i, j, k;
		cin >> i >> j >> k;
		int index = i;
		for (int w = i; w <= j; w++)
		{
			arr[w] = k;
		}
	}
	for (int i = 1; i < N + 1; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}