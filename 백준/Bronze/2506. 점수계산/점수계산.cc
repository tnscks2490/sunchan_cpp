#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int sum = 0;
	int point = 1;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> arr[i];
	}
	if (arr[0] == 1)
	{
		sum += point;
	}
	for (int i = 1; i < N; i++)
	{
		if (arr[i - 1] == 1 and arr[i] == 1)
		{
			point++;
			sum += point;
		}
		else if(arr[i] == 0)
		{
			point = 1;
		}
		else if (arr[i] == 1)
		{
			sum += point;
		}
	}
	cout << sum << endl;
	return 0;
}