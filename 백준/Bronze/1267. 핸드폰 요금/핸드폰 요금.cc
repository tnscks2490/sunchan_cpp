#include <iostream>

using namespace std;

int main() {

	int n,a;
	int M=0, Y=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		Y += ((a+1) / 30) * 10;
		if (a+1 % 30 > 0)
		{
			Y += 10;
		}
		M = M + ((a+1) / 60) * 15;
		if (a+1 % 60 > 0)
		{
			M += 15;
		}

	}
	if (M > Y)
	{
		cout << "Y " << Y;
	}
	else if (M < Y)
	{
		cout << "M " << M;
	}
	else if (M == Y)
	{
		cout << "Y M " << Y;
	}

	return 0;
}