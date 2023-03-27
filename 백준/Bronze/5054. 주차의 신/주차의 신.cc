#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int TC;
	cin >> TC;
	int* arr = new int[TC];
	for (int i = 0; i < TC; i++)
	{
		int SC;
		cin >> SC;
		int* SCarr = new int[SC];
		for (int j = 0; j < SC; j++)
		{
			cin >> SCarr[j];
		}
		
		int LongS = *max_element(SCarr, SCarr + SC);
		int ShortS = *min_element(SCarr, SCarr + SC);
		arr[i] = (LongS - ShortS) * 2;
	}
	for (int i = 0; i < TC; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}