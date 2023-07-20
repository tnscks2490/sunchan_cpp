#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	while (true) {
		cin >> a >> b >> c >> d;
		if (a == b and b == c and c == d and a == 0)
		{
			break;
		}
		cout << c - b << " " << d - a<<"\n";
	}
	return 0;
}