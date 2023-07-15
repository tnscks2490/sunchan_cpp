#include <iostream>

using namespace std;

int main() {

	cout.precision(2);
	cout << fixed;
	int T,A, B, C, D, E;
	 
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B >> C >> D >> E;
		double sum = A * 350.34 + B * 230.90 + C * 190.55 + D * 125.30 + E * 180.90;
		cout << "$" << sum << "\n";
	}
	return 0;
}