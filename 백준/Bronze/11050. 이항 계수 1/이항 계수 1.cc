#include <iostream>

using namespace std;

int main() {

	int N, K;
	cin >> N >> K;
	int up=1, down=1;
	for (int i = N; i > N-K; i--)
	{
		up *= i;
	}
	for (int i = 1; i <= K; i++)
	{
		down *= i;
	}
	cout << up / down << "\n";

	return 0;
}