#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int WU[10] = { 0, };
	int KU[10] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		cin >> WU[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> KU[i];
	}
	sort(WU,WU+10);
	sort(KU, KU + 10);
	int sumW = WU[9] + WU[8] + WU[7];
	int sumK = KU[9] + KU[8] + KU[7];

	cout << sumW << " " << sumK << endl;
	return 0;
}