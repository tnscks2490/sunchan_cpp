#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int point[5][4] = { (0,0,0,0), };
	int sum[5] = { 0, };
	for (int i = 0; i < 5; i++)
	{
		cin >> point[i][0] >> point[i][1] >> point[i][2] >> point[i][3];
		sum[i] = point[i][0] + point[i][1] +point[i][2] +point[i][3];
	}
	int max = *max_element(begin(sum), end(sum));
	for (int i = 0; i < 5; i++)
	{
		if (max == sum[i])
			cout << i+1 << " " << sum[i] << endl;
	}
	
	return 0;
}