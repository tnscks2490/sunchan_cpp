#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	if (N == 0)
	{
		cout << 1 << endl;
	}
	else {
		int sum = 1;
		for (int i = N; i >= 1; i--)
		{
			sum = sum * i;
		}
		cout << sum << endl;
	}
	
	return 0;
}