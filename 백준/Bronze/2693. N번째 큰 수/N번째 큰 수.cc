#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int TC;
	cin >> TC;
	int* arr = new int[TC];
	for (int i = 0; i < TC; i++)
	{
		int arrnum[10] = { 0, };
		for (int j = 0; j < 10; j++)
		{
			cin >> arrnum[j];
		}
		sort(arrnum, arrnum + 10);
		
		arr[i] = arrnum[7];
	}
	for (int i = 0; i < TC; i++)
	{
		cout << arr[i] << endl;
	}
	
	delete arr;
	return 0;
}