#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

	long long int N;
	cin >> N;
	int count = 0;
	while (true)
	{
		if (N <= 2)
		{
			break;
		}
		count += N % 2;
		N = N / 2;
	}
	if (count == 0)
	{
		cout << 1 << "\n";
	}
	else
	{
		cout << 0 << "\n";
	}

	return 0;
}