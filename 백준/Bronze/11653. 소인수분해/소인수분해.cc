#include <iostream>

using namespace std;

int main() {

	int N;
	int t = 2;
	cin >> N;
	while (N != 1)
	{
		if (N % t == 0)
		{
			N = N / t;
			cout << t << "\n";
		}
		else
		{
			t++;
		}
	}
	return 0;
}