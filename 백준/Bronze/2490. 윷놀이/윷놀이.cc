#include <iostream>

using namespace std;

int main() {

	char arr[3] = {};
	for (int i = 0; i < 3; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int sum = 0;
		sum = a + b + c + d;
		if (sum == 1)
		{
			arr[i] = 'C';
		}
		else if (sum == 2)
		{
			arr[i] = 'B';
		}
		else if (sum == 3)
		{
			arr[i] = 'A';
		}
		else if (sum == 4)
		{
			arr[i] = 'E';
		}
		else
		{
			arr[i] = 'D';
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}