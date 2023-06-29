#include <iostream>
using namespace std;

int main() {

	int TC;
	cin >> TC;
	long int a, b, c;
	long int Mnum = 0;
	int* arr = new int[TC];
	for (int i = 0; i < TC; i++)
	{
		cin >> a >> b >> c;
		Mnum = max(max(a, b), c);
		if (Mnum == a)
		{
			if (a*a == b*b + c*c)
			{
				arr[i] = 1;
			}
			else
			{
				arr[i] = 0;
			}
		}
		else if (Mnum == b)
		{
			if (b*b == a*a + c*c)
			{
				arr[i] = 1;
			}
			else
			{
				arr[i] = 0;
			}
		}
		else if (Mnum == c)
		{
			if (c*c == b*b + a*a)
			{
				arr[i] = 1;
			}
			else
			{
				arr[i] = 0;
			}
		}
	}
	for(int i=0; i < TC; i++)
	{
		cout << "Scenario #" << i + 1 << ":" << endl;
		if (arr[i] == 1)
		{
			cout << "yes" << endl;
		}
		else if (arr[i] == 0)
		{
			cout << "no" << endl;
		}
		cout << endl;
	}
	return 0;
}