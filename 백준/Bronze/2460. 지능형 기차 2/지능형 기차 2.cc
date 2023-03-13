#include <iostream>

using namespace std;

int main() {
	int train[2][10] = { (0,0), };
	int result[11] = {0,};
	int output = 0;
	for (int i = 0; i < 10; i++)
	{
		int a, b;
		cin >> a >> b;
		train[0][i] = a;
		train[1][i] = b;
	}

	for (int j = 0; j < 10; j++)
	{
		result[j+1] = result[j] + train[1][j] - train[0][j];
		if (output < result[j])
		{
			output = result[j];
		}
	}
	cout << output << endl;
	

	return 0;
}