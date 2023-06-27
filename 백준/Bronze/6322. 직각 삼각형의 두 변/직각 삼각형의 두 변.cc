#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.precision(3);
	cout << fixed;
	float a, b, c;
	int count = 1;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 and b == 0 and c == 0)
		{
			break;
		}

		cout << "Triangle #" << count << endl;
		if (a == -1)
		{
			a = pow(c, 2) - pow(b, 2);
			if ( a <= 0)
			{
				cout << "Impossible." << endl;
			}
			else
			{
				cout << "a = " << sqrt(a) << endl;
			}
			
		}
		else if (b == -1)
		{
			b = pow(c, 2) - pow(a, 2);
			if ( b <= 0)
			{
				cout << "Impossible." << endl;
			}
			else
			{
				cout << "b = " << sqrt(b) << endl;
			}
			
		}
		else if (c == -1)
		{
			c = pow(a, 2) + pow(b, 2);
			cout << "c = " << sqrt(c) << endl;			
		}
		count++;
		cout << endl;
	}
	return 0;
}