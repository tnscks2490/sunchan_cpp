#include <iostream>

using namespace std;

int main() {

	int A, B, C, M;
	cin >> A >> B >> C >> M;
	int P = 0,W = 0;

	for (int i = 0; i < 24; i++)
	{

		if (P + A <= M)
		{
			W += B;
			P += A;
		}
		else if (P + A > M)
		{
			P -= C;
			if (P < 0)
			{
				P = 0;
			}
		}
	}
	cout << W << endl;

	return 0;
}