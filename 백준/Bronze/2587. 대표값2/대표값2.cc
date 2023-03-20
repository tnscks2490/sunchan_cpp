#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[5] = { 0, };
	int avr = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		avr = avr + arr[i];
	}
	avr = avr / 5;
	sort(arr, arr + 5);

	cout << avr << endl;
	cout << arr[2] << endl;
	return 0;
}