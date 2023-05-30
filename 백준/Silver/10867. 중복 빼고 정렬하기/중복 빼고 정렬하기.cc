#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int num[2001] = { 0, };
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		if (a > 0)
		{
			num[a + 1000]++;
		}
		else if (a == 0)
		{
			num[1000]++;
		}
		else
		{
			num[a + 1000]++;
		}
		
	}
	for (int i = 0; i < 2001; i++)
	{
		if (num[i] > 0)
		{
			cout << i-1000 << " ";
		}
	}
	return 0;
}