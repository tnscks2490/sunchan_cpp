#include <iostream>

using namespace std;

int main() {
	int TC;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		int N;
		cin >> N;
		int sum = 0;
		for (int j = 0; j < N; j++)
		{
			int input;
			cin >> input;
			sum += input;
		}
		cout << sum << endl;
	}
	return 0;
}