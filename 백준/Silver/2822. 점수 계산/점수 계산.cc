#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int point[8] = { 0, };
	int out[5] = { 0, };
	int result = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> point[i];
	}

	for (int j = 0; j < 5; j++)
	{
		int maxVal = *max_element(point, point + 8);
		for (int i = 0; i < 8 ; i++)
		{
			if (point[i] == maxVal)
			{
				out[j] = i + 1;
				point[i] = 0;
				result = result + maxVal;
			}
		}
			
	}
	sort(out, out + 5);
	cout << result << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << out[i] << " ";
	}
	
	return 0;
}