#include <iostream>

using namespace std;

int main() {

	int A, B, C, D, P;
	int X=0, Y = 0;
	cin >> A >> B >> C >> D >> P;
	X = A * P;
	if (C < P)
	{
		Y = B + D * (P-C);
	}
	else
	{
		Y = B;
	}
	cout << min(X, Y) << "\n";
	return 0;
}