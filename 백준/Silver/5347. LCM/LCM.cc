#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long int a, b,m,n,sum;
		cin >> a >> b;
		sum = a * b;
		m = max(a, b);
		n = min(a, b);
		while (true)
		{
			m = m % n;
			if (m == 0)
			{
				cout << sum/n << endl;
				break;
			}
			a = m;
			b = n;
			m = max(a, b);
			n = min(a, b);
		}
	}
	return 0;
}