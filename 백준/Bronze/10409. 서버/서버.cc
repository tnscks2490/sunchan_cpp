#include <iostream>

using namespace std;

int main() {
	int N, Time;
	int count = 0;
	cin >> N >> Time;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		Time = Time - arr[i];
		count++;
		if (Time < 0)
		{
			count--;
			break;
		}
	}
	cout << count << endl;
	return 0;
}