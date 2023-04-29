#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		if (i % 2 == 1)
		{
			for (int j = 0; j < N; j++)
			{
				cout << "* ";
			}
		}
		else
		{
			cout << " ";
			for (int j = 0; j < N; j++)
			{
				cout << "* ";
			}
		}
		cout << endl;
	}
	return 0;
}