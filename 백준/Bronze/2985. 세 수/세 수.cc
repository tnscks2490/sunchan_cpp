#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b + c)
	{
		cout << a << "=" << b << "+" << c;
	}
	else if (a == b * c)
	{
		cout << a << "=" << b << "*" << c;
	}
	else if (a == b / c and b%c == 0)
	{
		cout << a << "=" << b << "/" << c;
	}
	else if (a == b - c)
	{
		cout << a << "=" << b << "-" << c;
	}
	else if (c == a + b)
	{
		cout << a << "+" << b << "=" << c;
	}
	else if (c == a * b)
	{
		cout << a << "*" << b << "=" << c;
	}
	else if (c == a / b and a%b == 0)
	{
		cout << a << "/" << b << "=" << c;
	}
	else if (c == a - b)
	{
		cout << a << "-" << b << "=" << c;
	}
	return 0;
}