#include <iostream>

using namespace std;

int main() {

	int TC,N,M;
	cin >> TC;
	int U, T;
	for (int i = 0; i < TC; i++)
	{
		cin >> N >> M;
		U = 2 * M - N;
		T = M - U;
		cout << U << " " << T << endl;
	}
	return 0;
}