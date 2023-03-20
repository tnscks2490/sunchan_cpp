#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int a;
	cin >> a;
	int tmp = a;
	int count = 0;

	while (tmp != 0) {
		tmp = tmp / 10;
		count++;
	}

	int* arr = new int[count];
	for (int i = 0; i < count; i++)
	{
		arr[i] = a % 10;
		a = a / 10;
	}
	sort(arr, arr + count,greater<int>());

	for (int i = 0; i < count; i++)
	{
		cout << arr[i];
	}
	
	return 0;
}