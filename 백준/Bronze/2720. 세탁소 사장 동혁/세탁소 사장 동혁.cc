#include <iostream>

using namespace std;

int main() {

	int TC;
	int ChangeList[4] = { 25,10,5,1 };
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		int ChangeNum[4] = { 0, };
		int Listindex = 0;
		int N;
		cin >> N;
		
		while (true)
		{
			if (N - ChangeList[Listindex] >= 0)
			{
				N = N - ChangeList[Listindex];
				ChangeNum[Listindex]++;
			}
			else
			{
				Listindex++;
			}

			if (N == 0)
			{
				break;
			}
		}
		for (int j = 0; j < 4; j++)
		{
			cout << ChangeNum[j] << " ";
		}
		cout << endl;
	}
	return 0;
}