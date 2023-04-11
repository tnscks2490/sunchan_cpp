#include <iostream>

using namespace std;

int main() {

	int NumOfDay;
	cin >> NumOfDay;
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		int CarNum;
		cin >> CarNum;
		if (CarNum == NumOfDay)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}