#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N;
	cin >> N;
	int sum = 0;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		
	}
	sort(arr, arr + N,greater<int>());
	for (int i = 0; i < N; i++)
	{
		arr[i] = arr[i] - (N-(i+1));
	}
	/*for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}*/
	int M = *max_element(arr, arr + N);
	sum = M + N + 1;
	cout << sum << endl;
	return 0;
}