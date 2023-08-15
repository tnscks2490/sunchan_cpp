#include <iostream>
#include <algorithm>
//숭실 고려 한양 순서
using namespace std;

int main() {

	int arr[3] = { 0, };
	cin >> arr[0] >> arr[1] >> arr[2];
	if (arr[0] + arr[1] + arr[2] >= 100)
	{
		cout << "OK";
	}
	else
	{
		int mini = min_element(arr, arr + 3) - arr;

		if (mini == 0)
		{
			cout << "Soongsil";
		}
		else if (mini == 1)
		{
			cout << "Korea";
		}
		else if (mini == 2)
		{
			cout << "Hanyang";
		}
	}
	return 0;
}