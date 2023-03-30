#include <iostream>

using namespace std;

int main() {
	int TC;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		int N;
		cin >> N;
		int sumC = 0;
		double sumG = 0;
		for (int j = 0; j < N; j++)
		{
			int C;
			double G;
			cin >> C >> G;
			sumC = sumC + C;
			sumG = sumG + G*C;
		}
		cout << sumC << " ";
		cout.fixed;
		cout.precision(2);
		if (sumG / sumC == 0)
		{
			cout << "0.0" << endl;
		}
		else
		{
			cout << sumG / sumC << endl;
		}
		
	}
	return 0;
}