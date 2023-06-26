#include <iostream>

using namespace std;

int main() {

	float d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	cout.precision(1);
	cout << fixed;
	float a, b, c;
	a = (d1 + d2 - d3) / 2;
	b = (d1 - d2 + d3) / 2;
	c = (d2 + d3 - d1) / 2;
	if (a <= 0 or b <= 0 or c <= 0)
	{
		cout << -1 << endl;
	}
	else if (a > 1000000 or b > 1000000 > c > 1000000)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << 1 << endl;
		cout << a << " " << b << " " << c << endl;
	}
	

	return 0;
}