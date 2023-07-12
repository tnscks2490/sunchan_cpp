#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	double Price;
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < N; i++)
	{
		cin >> Price;
		cout << "$" << Price * 0.8 << endl;
	}
	return 0;
}