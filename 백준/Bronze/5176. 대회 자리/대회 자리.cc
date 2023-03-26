#include <iostream>
#include <algorithm>
using namespace std;

int seat(int P,int M);

int main() {
	int TC;
	cin >> TC;
	int* result = new int[TC];
	for (int i = 0; i < TC; i++)
	{
		int P, M;
		cin >> P >> M;
		result[i] = seat(P, M);
	}

	for (int i = 0; i < TC; i++)
	{
		cout << result[i] << endl;
	}
	return 0;
}

int seat(int P, int M)
{
	int* arr = new int[P];
	int count = 0;

	for (int i = 0; i < P; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + P);
	int tmp = 0;
	for (int i = 0; i < P; i++)
	{
		if (arr[i] != tmp)
		{
			tmp = arr[i];
		}
		else
		{
			count++;
		}
	}
	return count;
}