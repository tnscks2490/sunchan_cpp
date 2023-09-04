#include <iostream>

using namespace std;

int main() {

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N, D;
		cin >> N >> D;
		int sum = 0;
		for (int j = 0; j < N; j++)
		{
			int v;
			double f,c,tmp;
			cin >> v >> f >> c;
			tmp = f / c;
			if (D <= v * tmp)
			{
				sum++;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}