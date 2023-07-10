#include <iostream>

using namespace std;

int main() {
	long long int a, b;
	cin >> a >> b;
	long long int A = min(a, b);
	long long int B = max(a, b);
	if (A == B)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << B - A - 1 << endl;
		for (long long int i = A + 1; i < B; i++)
		{
			cout << i << " ";
		}
	}
	
	return 0;
}