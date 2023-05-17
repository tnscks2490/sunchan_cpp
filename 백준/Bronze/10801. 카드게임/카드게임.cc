#include <iostream>

using namespace std;

int main() {
	int A[10] = { 0, };
	int B[10] = { 0, };
	int count = 0;
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
			count++;
		}
		else if (A[i] == B[i])
		{
			continue;
		}
		else
		{
			count--;
		}
	}

	if (count > 0)
	{
		cout << "A" << endl;
	}
	else if (count == 0)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "B" << endl;
	}
	return 0;
}