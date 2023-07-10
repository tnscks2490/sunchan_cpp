#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	int arr[10001] = { 0, };
	int a=0;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		arr[a]++;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			cout << i << "\n";
		}
	}
	return 0;
}