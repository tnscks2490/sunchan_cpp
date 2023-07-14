#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N, W, H,T,C;
	cin >> N >> W >> H;
	C = sqrt(pow(W, 2) + pow(H, 2));
	for (int i = 0; i < N; i++)
	{
		cin >> T;
		if (T > C)
		{
			cout << "NE" << "\n";
		}
		else
		{
			cout << "DA" << "\n";
		}
	}
	return 0;
}