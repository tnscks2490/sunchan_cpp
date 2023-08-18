#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <int> v;
	int a;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	int sum = 0;
	int index = 0;
	while (true)
	{
		if (index > 10)
		{
			break;
		}
		if (sum > 100)
		{
			if (sum - 100 > 100- (sum - v[index - 1]))
			{
				sum = sum - v[index - 1];
				break;
			}
			else
			{
				break;
			}
		}
		else if (sum == 100)
		{
			break;
		}
		else
		{
			sum += v[index];
		}
		index++;
		
	}
	cout << sum << "\n";
	return 0;
}