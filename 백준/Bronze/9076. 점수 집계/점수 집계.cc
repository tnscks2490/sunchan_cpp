#include <iostream>
#include <algorithm>
using namespace std;

int Check_point(int a, int b, int c, int d, int e);

int main() {
	int TC;
	cin >> TC;
	int *arr = new int[TC];
	for (int i = 0; i < TC; i++)
	{
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		arr[i] = Check_point(a,b,c,d,e);
	}

	for (int i = 0; i < TC; i++)
	{
		if (arr[i] == -1)
		{
			cout << "KIN" << endl;
		}
		else
		{
			cout << arr[i] << endl;
		}
	}
	return 0;
}

int Check_point(int a,int b,int c,int d, int e )
{
	int arr[5] = { a,b,c,d,e };
	int max = *max_element(arr, arr + 5);
	int min = *min_element(arr, arr + 5);
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		
		if (arr[i] == max)
		{
			arr[i] = 0;
			max = 0;
		}
		else if (arr[i] == min)
		{
			arr[i] = 0;
			min = 0;
		}
		sum = sum + arr[i];
	}
	sort(arr, arr + 5);
	int max2 = *max_element(arr + 2, arr + 5);
	int min2 = *min_element(arr + 2, arr + 5);

	if (max2 - min2 >= 4)
	{
		return -1;
	}
	else
	{
		return sum;
	}
}