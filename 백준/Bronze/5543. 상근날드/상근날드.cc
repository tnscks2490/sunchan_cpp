#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 3);
	sort(arr + 3, arr + 5);
	cout << (arr[0] + arr[3])-50;
	return 0;
}