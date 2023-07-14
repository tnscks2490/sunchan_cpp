#include <iostream>

using namespace std;

int main() {

	cout.precision(2);
	cout << fixed;
	double n,t;
	cin >> n;
	while (true)
	{
		cin >> t;
		if (t == 999)
		{
			break;
		}
		cout << t - n << "\n";
		n = t;
	}
	return 0;
}