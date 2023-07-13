#include <iostream>

using namespace std;

int main() {

	int T,N,K;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N >> K;
		int count = 0;
		int candy;
		for (int j = 0; j < N; j++)
		{
			cin >> candy;
			count += candy / K;
		}
		cout << count << "\n";
	}
	return 0;
}