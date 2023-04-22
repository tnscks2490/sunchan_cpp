#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int index[30] = { 0, };
	for (int i = 0; i < 30; i++)
	{
		index[i] = i+1;
	}

	int arr[28] = { 0, };
	for (int i = 0; i < 28; i++)
	{
		cin >> arr[i];
	}
	int result[2] = { 0, 0 };
	int a = 0;
	sort(arr, arr + 28);
	int inx = 0;
	for (int i = 0; i < 30; i++)
	{
		if (index[i] != arr[inx])
		{
			result[a] = index[i];
			a++;
		}
		else
		{
			inx++;
		}
	}
	cout << result[0] << endl;
	cout << result[1] << endl;
	return 0;
}