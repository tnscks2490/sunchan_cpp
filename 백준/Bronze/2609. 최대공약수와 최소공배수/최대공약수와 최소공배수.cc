#include <iostream>
#include <algorithm>
using namespace std;

int get_max(int a, int b);
int get_min(int a, int b);
int main() {

	int N, M;
	cin >> N >> M;
	cout << get_max(N, M) << endl;
	cout << get_min(N, M) << endl;
	return 0;
}

int get_max(int N, int M)
{
	int range = min(M, N);
	int tmp = 1;

	for (int i = 1; i <= range; i++)
	{
		if (N % i == 0 and M % i == 0)
		{
			tmp = i;
		}
	}
	return tmp;
}

int get_min(int N, int M)
{
	int small = min(M, N);
	int big = max(M, N);

	int s = small;
	int b = big;
	while (s != b)
	{
		if (s < b)
		{
			s += small;
		}
		else
		{
			b = b += big;
		}
	}
	return s;
}