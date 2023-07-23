#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 and b == 0 and c == 0)
		{
			break;
		}
		int arr[3] = { a,b,c };
		sort(arr, arr + 3);

		if (pow(arr[2], 2) == pow(arr[0], 2) + pow(arr[1], 2))
		{
			cout << "right" << endl;
		}
		else
		{
			cout << "wrong" << endl;
		}
	}
	return 0;
}