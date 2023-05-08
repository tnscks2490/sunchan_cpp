#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int out = 0;
	int arr[101] = { 1, };
	arr[0] = 1;
	for (int i = 1; i <= 100; i++)
	{
		arr[i] = 0;
	}
	for (int i = 1; i <= N; i++)
	{
		int seatnum;
		cin >> seatnum;
		if (arr[seatnum] == 0)
		{
			arr[seatnum] = 1;
		}
		else if (arr[seatnum] == 1)
		{
			out++;
		}
	}
	cout << out << endl;
	return 0;
}