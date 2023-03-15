#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int num[1000] = { 0, };
	int count = 0, i = 1,tmp=0;
	int sum = 0;
	
	while (1)
	{
		for (int k = 0; k < i; k++)
		{
			num[count] = i;
			count++;
			if (count == 1000)
			{
				tmp = 1;
				break;
			}
		}
		i++;
		if (tmp == 1)
			break;
	}
		
	for (int o = a-1; o < b; o++)
	{
		sum = sum + num[o];
	}
	cout << sum << endl;


	return 0;
}