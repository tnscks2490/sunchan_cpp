#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int s = 0;
	int count = 1;
	while (true)
	{
		if (N >= count)
		{
			N -= count;
			count++;
			s++;
		}
		else
		{
			count = 1;
		}

		if (N == 0)
		{
			break;
		}
	}
	cout << s << endl;
	return 0;
}