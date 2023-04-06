#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int arr[7] = { 0, };
	int count = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 == 1)
			count++;
	}
	int* odd = new int[count];
	int index = 0;
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{

		if (arr[i] % 2 == 1)
		{
			odd[index] = arr[i];
			sum += arr[i];
			index++;
		}
			
	}
	sort(odd, odd + count);
	if (index > 0) {
		cout << sum << endl;
		cout << odd[0];
	}
	else
		cout << -1 << endl;
	return 0;
}