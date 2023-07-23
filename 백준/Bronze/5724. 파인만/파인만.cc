#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a;
	while (true)
	{
		cin >> a;
		if (a == 0)
		{
			break;
		}
		int sum = 0;
		for (int i = 1; i <= a; i++)
		{
			sum += pow(i, 2);
		}
		cout << sum << endl;
	}
	return 0;
}