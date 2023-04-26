#include <iostream>

using namespace std;

int main() {

	long long int N, M;
	cin >> N >> M;
	if (N > M)
		cout << N - M << endl;
	else
		cout << M - N << endl;

	return 0;
}