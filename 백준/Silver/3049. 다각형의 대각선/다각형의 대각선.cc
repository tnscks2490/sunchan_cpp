#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	if (N < 4)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << (N * (N - 1) * (N - 2) * (N - 3)) / 24 << endl;
	}
	return 0;
}