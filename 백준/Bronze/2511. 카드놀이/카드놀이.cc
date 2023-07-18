#include <iostream>

using namespace std;

int main() {

	int A[10] = { 0, };
	int B[10] = { 0, };
	char WLD[10] = {};
	int AL = 0;
	int BL = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> B[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (A[i] > B[i])
		{
			AL += 3;
			WLD[i] = 'A';
		}
		else if (A[i] == B[i])
		{
			AL++;
			BL++;
			WLD[i] = 'D';
		}
		else if (A[i] < B[i])
		{
			BL += 3;
			WLD[i] = 'B';
		}
	}
	cout << AL << " " << BL << "\n";
	if (AL > BL)
	{
		cout << "A" << "\n";
	}
	else if (AL == BL)
	{
		if (AL == 10)
		{
			cout << "D" << "\n";
		}
		else 
		{
			for (int i = 9; i >= 0; i--)
			{
				if (WLD[i] != 'D')
				{
					cout << WLD[i] << "\n";
					break;
				}
			}
		}
	}
	else if (AL < BL)
	{
		cout << "B" << "\n";
	}
	return 0;
}