#include <iostream>

using namespace std;

int main() {

	int n0;
	int count = 1;
	while (true)
	{
		cin >> n0;
		if (n0 == 0)
		{
			break;
		}

		if (n0 % 2 == 0)
		{
			cout << count << ". even " << n0/ 2<<endl;
		}
		else
		{
			cout << count << ". odd " << (n0 - 1) / 2 << endl;
		}
		count++;
	}
	return 0;
}