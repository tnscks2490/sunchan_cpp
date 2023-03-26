#include <iostream>

using namespace std;

int main() {
	int TC;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		int num;
		cin >> num;
		int index = 0;
		while (num > 0)
		{
			if (num % 2 == 1)
			{
				num = num / 2;
				cout << index << " ";
				index++;
			}
			else
			{
				num = num / 2;
				index++;
			}
		}
	}
	return 0;
}