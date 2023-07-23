#include <iostream>

using namespace std;

int main() {

	int L, P, V;
	int count = 1;
	while (true)
	{
		int sum = 0;
		cin >> L >> P >> V;
		if (L == 0 and P == 0 and V == 0)
		{
			break;
		}
		sum = (V / P) * L;
		if (V % P >= L)
		{
			sum += L;
		}
		else
		{
			sum += V % P;
		}
		cout << "Case "<<count <<": " <<sum << endl;
		count++;
	}
	return 0;
}