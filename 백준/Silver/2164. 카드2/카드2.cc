#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	int N;
	cin >> N;
	int count = 1;
	while (true)
	{
		if (N % 2 == 1)
		{
			break;
		}
		N = N / 2;
		count *= 2;
	}
	if (N == 1)
	{
		cout << 1 * count;
	}
	else
	{
		queue <int> q;
		for (int i = 0; i < N; i++)
		{
			q.push(i + 1);
		}
		while (true)
		{
			q.pop();

			if (q.size() == 1)
				break;

			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
		cout << q.front() * count << "\n";
	}
	

	return 0;
}