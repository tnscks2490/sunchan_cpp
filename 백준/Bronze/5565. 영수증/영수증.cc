#include <iostream>

using namespace std;

int main() {

	int total;
	cin >> total;
	for (int i = 0; i < 9; i++)
	{
		int a;
		cin >> a;
		total -= a;
	}

	cout << total << endl;
	return 0;
}