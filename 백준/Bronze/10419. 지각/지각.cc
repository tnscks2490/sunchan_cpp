#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N,t;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> t;
		int a = 0;
		while (true)
		{
			if (t < a + pow(a, 2))
			{
				break;
			}
			a++;
		}
		a--;
		cout << a << "\n";
	}
	return 0;
}