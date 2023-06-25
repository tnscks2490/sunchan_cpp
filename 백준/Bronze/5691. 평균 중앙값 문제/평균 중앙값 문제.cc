#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int A, B;
	while (true)
	{
		cin >> A >> B;
		if (A == 0 and B == 0)
		{
			break;
		}
		else
		{
			cout << 2 * A - B << endl;
		}
	}
	return 0;
}