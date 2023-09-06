#include <iostream>

using namespace std;

int main() {

	int a;
	long long int sum = 0;
	while (true)
	{
		cin >> a;
		if (a == -1)
		{
			break;
		}
		sum += a;
	}
	cout << sum << endl;
	return 0;
}