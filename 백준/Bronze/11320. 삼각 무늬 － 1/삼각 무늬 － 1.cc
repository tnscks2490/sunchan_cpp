#include <iostream>

using namespace std;

int main() {

	int TC,a,b;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		cin >> a >> b;
		cout << (a / b) * (a / b) << endl;
	}
	return 0;
}