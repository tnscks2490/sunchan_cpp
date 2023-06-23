#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	unsigned long long int sum = 0;
	for (int i = 1; i < N; i++)
	{
		sum += (N+1) * i;
	}
	cout << sum << endl;
	return 0;
}