#include <iostream>

using namespace std;

int main() {

	int L, R, A;
	cin >> L >> R >> A;
	if (L > R)
	{
		if (L - R > A)
		{
			R += A;
			cout << R * 2 << endl;
		}
		else if (L - R < A)
		{
			A -= (L - R);
			L = L + A / 2;
			cout << L * 2 << endl;
		}
		else if (L - R == A)
		{
			cout << L * 2 << endl;
		}
	}
	else if (L < R)
	{
		if (R - L > A)
		{
			L += A;
			cout << L * 2 << endl;
		}
		else if (R - L < A)
		{
			A -= (R - L);
			R = R + A / 2;
			cout << R * 2 << endl;
		}
		else if (R - L == A)
		{
			cout << R * 2 << endl;
		}
	}
	else if (L == R)
	{
		R += A/2;
		cout << R * 2 << endl;
	}
	return 0;
}