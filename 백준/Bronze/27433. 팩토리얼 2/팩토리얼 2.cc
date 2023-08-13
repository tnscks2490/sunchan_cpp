#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	if (N == 0)
	{
		cout << 1 << "\n";
	}
	else
	{
		long long int sum = 1;
		for (int i = 1; i <= N; i++)
		{
			sum *= i;
		}
		cout << sum << "\n";
	}
	return 0;
}