#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int sum = 0;
	for (int i = 0; i <= N; i++)
	{
		for (int j = i; j <= N; j++)
		{
			sum = sum + i + j;
		}
	}

	cout << sum << endl;

	return 0;
}