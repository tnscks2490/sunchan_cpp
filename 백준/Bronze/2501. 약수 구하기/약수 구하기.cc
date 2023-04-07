#include <iostream>

using namespace std;

int main() {

	int N, K;
	cin >> N >> K;
	int* arr = new int[N];
	int index = 0;
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			arr[index] = i;
			index++;
		}
	}
	int* result = new int[index];
	for (int i = 0; i < index; i++)
	{
		result[i] = arr[i];
	}
	if (index + 1 < K)
	{
		cout << 0 << endl;
	}
	else {
		cout << result[K-1] << endl;
	}
	return 0;
}