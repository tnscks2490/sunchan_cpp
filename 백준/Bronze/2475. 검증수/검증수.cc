#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int result = 0;
	result = a * a + b * b + c * c + d * d + e * e;
	result = result % 10;
	cout << result << endl;
	return 0;
}