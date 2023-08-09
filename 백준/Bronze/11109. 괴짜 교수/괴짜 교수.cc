#include <iostream>

using namespace std;

int main() {

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int d, n, s, p;
		cin >> d >> n >> s >> p;
		if ( (d + (n * p)) > (n * s))
		{
			cout << "do not parallelize\n";
		}
		else if ((d + (n * p)) == (n * s))
		{
			cout << "does not matter\n";
		}
		else
		{
			cout << "parallelize\n";
		}
	}
	return 0;
}