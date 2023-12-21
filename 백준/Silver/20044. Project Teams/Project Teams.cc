#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int T,Length;
	cin >> T;
	Length = T * 2;
	int* arr = new int[Length];
	int* result = new int[T];
	
	for (int i = 0; i < Length; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + Length);
	for (int i = 0; i < T; i++)
	{
		result[i] = arr[i] + arr[Length - i-1];
	}
	sort(result, result + T);
	cout << result[0] << endl;
	return 0;
}