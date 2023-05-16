#include <iostream>

using namespace std;

int main() {

	long int a, b;
	cin >> a >> b;
	long int sum = 0;
	if (a > b)
	{
		sum = ((a - b + 1) * (a + b)) / 2;
		cout << sum << endl;
	}
	else if (a < b)
	{
		sum = ((b - a + 1) * (a + b)) / 2;
		cout << sum << endl;
	}
	else
	{
		cout << a << endl;
	}
	
	return 0;
}