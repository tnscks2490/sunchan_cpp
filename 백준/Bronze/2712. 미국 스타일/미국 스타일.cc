#include <iostream>

using namespace std;

int main() {

	int T;
	cin >> T;
	cout << fixed;
	cout.precision(4);
	for (int i = 0; i < T; i++)
	{
		double a;
		string t;
		cin >> a >> t;
		if (t == "kg")
		{
			cout << 2.2046 * a << " lb\n";
		}
		else if (t == "l")
		{
			cout << 0.2642 * a << " g\n";
		}
		else if (t == "lb")
		{
			cout << 0.4536 * a << " kg\n";
		}
		else if (t == "g")
		{
			cout << 3.7854 * a << " l\n";
		}
	}
	return 0;
}