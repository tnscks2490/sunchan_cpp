#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 and b == 0 and c == 0)
		{
			break;
		}
		if (b - a == c - b)
		{
			cout << "AP " << c + (c - b) << endl;
		}

		else if ( b/a == c/b and b%a == 0 and c%b == 0)
		{
			cout << "GP " << c * (c/b) << endl;
		}
		

	}
	return 0;
}
