#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int Garr[6] = { 1,2,3,3,4,10 };
	int Sarr[7] = { 1,2,2,2,3,5,10 };
	for (int i = 0; i < N; i++)
	{
		int G = 6,S=7;
		int Gsum = 0, Ssum = 0;
		for (int j = 0; j < G; j++)
		{
			int input;
			cin >> input;
			Gsum += Garr[j] * input;
		}
		for (int j = 0; j < S; j++)
		{
			int input;
			cin >> input;
			Ssum += Sarr[j] * input;
		}
		if (Gsum > Ssum)
		{
			cout << "Battle " << i + 1 << ": Good triumphs over Evil\n";
		}
		else if (Gsum < Ssum)
		{
			cout << "Battle " << i + 1 << ": Evil eradicates all trace of Good\n";
		}
		else if (Gsum == Ssum)
		{
			cout << "Battle " << i + 1 << ": No victor on this battle field\n";
		}
	}
	return 0;
}