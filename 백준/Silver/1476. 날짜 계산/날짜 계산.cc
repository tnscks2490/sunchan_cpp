#include <iostream>

using namespace std;

int main()
{
	//E 1-15 S 1-28 M 1-19
	int E, S, M;
	cin >> E >> S >> M;
	int e = 0, s = 0, m = 0;
	int count = 0;
	while (true)
	{
		if (e == E and s == S and m == M)
		{
			cout << count << endl;
			break;
		}
		e++;
		if (e > 15)
			e = 1;
		s++;
		if (s > 28)
			s = 1;
		m++;
		if (m > 19)
			m = 1;
		count++;
	}
	return 0;
}

