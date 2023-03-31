#include <iostream>

using namespace std;

int main() {
	int TC;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		int sum = 0;
		int s;
		cin >> s;
		sum = sum + s;
		int n;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			int p, q;
			cin >> p >> q;
			sum = sum + p * q;

		}
		cout << sum << endl;
	}
	return 0;
}