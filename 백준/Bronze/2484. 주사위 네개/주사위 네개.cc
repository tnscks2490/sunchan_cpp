#include <iostream>
#include <algorithm>
#include <algorithm>
using namespace std;

int Price(int a,int b, int c, int d);
int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	int MAX = 0;
	
	for (int i = 0; i < N; i++)
	{
		int num[4] = { 0, };
		for (int j = 0; j < 4; j++)
		{
			cin >> num[j];
		}
		sort(num, num + 4);
		arr[i] = Price(num[0], num[1], num[2], num[3]);
	}
	MAX = *max_element(arr, arr + N);
	cout << MAX << endl;
	return 0;
}

int Price(int a, int b, int c, int d)
{
	if (a == b and b == c and c == d)
	{
		return 50000 + (a * 5000);
	}
	else if ((a == b and b == c and c != d)or (b == c and c == d and a != d))
	{
		return 10000 + (b * 1000);
	}
	else if ((a == b and c == d and b != c))
	{
		return 2000 + (a * 500) + (c * 500);
	}
	else if (a==b and b!=c and c !=d)
	{
		return 1000 + (a * 100);
	}
	else if (a != b and b == c and c != d)
	{
		return 1000 + (b * 100);
	}
	else if (a != b and b != c and c == d)
	{
		return 1000 + (c * 100);
	}
	else if (a != b and b != c and c != d)
	{
		return 100 * d;
	}
}