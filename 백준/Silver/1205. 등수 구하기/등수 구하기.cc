#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N, S, P;
	cin >> N >> S >> P;
	int* arr = new int[P]{};
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];	
	}
	if (S <= arr[P - 1] and S !=0)
	{
		cout << -1;
	}
	else
	{
		int mini = min_element(arr, arr + P)-arr;
		arr[mini] = S;
		sort(arr, arr + P,greater<int>());
		for (int i = 0; i < P; i++)
		{
			if (arr[i] == S)
			{
				cout << i+1;
				break;
			}
		}
	}

	return 0;
}