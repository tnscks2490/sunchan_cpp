#include <iostream>
#include <string>
using namespace std;

int main() {

	string a;
	for (int j = 0; j < 3; j++)
	{
		cin >> a;
		int tmp = 1;
		int count = 1;
		for (int i = 0; i < 7; i++)
		{
			if (a[i] == a[i + 1])
			{
				count++;
			}
			else {
				if (tmp < count)
				{
					tmp = count;
				}
				count = 1;
			}
		}
		if (count > tmp)
		{
			cout << count << endl;
		}
		else
		{
			cout << tmp << endl;
		}
	}

	return 0;
}