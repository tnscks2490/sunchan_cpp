#include <iostream>

using namespace std;

int main() {

	int T;
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> T;
		sum += T;
	}
	cout << sum / 60 << endl;
	cout << sum % 60 << endl;
	return 0;
}