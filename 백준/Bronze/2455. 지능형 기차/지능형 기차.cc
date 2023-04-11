#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int arr[5] = { 0, };
	for (int i = 1; i <= 4; i++)
	{
		int OutP, OnP;
		cin >> OutP >> OnP;
		arr[i] = arr[i - 1] - OutP + OnP;
	}
	sort(arr, arr + 5);
	cout << arr[4] << endl;
	return 0;
}