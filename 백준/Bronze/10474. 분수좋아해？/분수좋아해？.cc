#include <iostream>

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
		cout << A / B << " " << A % B << " / " << B << endl;
	}
	return 0;
}