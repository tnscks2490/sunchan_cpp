#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

	int M, N;
	cin >> M;
	cin >> N;
	int sum = 0;
	int* arr = new int[1000];
	int index = -1;
	for (int i = M; i <= N; i++)
	{
		int count = 0;
		for (int j = 1; j <= i/2; j++)
		{
			if (i % j == 0)
			{
				count++;
			}
		}
		if (count < 2 and count >0)
		{
			index++;
			arr[index] = i;
			sum = sum + i;
			
		}
	}

	if (index == -1)
	{
		cout << -1 << endl;
	}
	else {
		int min = *min_element(arr, arr + index);
		cout << sum << endl;
		cout << min << endl;
	}
	
	return 0;
}