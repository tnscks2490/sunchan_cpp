#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int TC,n,m;
	cin >> TC;
	int count;
	for (int i = 0; i < TC; i++)
	{
		count = 0;
		cin >> n >> m;
		for (int j = 2; j < n; j++)
		{
			int b2 = pow(j, 2);
			for (int k = 1; k < j; k++)
			{
				int a2 = pow(k, 2);
				if (((a2 + b2 + m) % (j*k)) == 0)
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
	
	return 0;
}