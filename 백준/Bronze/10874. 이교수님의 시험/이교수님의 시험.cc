#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int a;
	
	for (int i = 0; i < N; i++)
	{
		bool trigger = true;
		for (int j = 0; j < 10; j++)
		{
			cin >> a;
			if (a != (j % 5) + 1)
			{
				trigger = false;
			}
		}
		if (trigger)
		{
			cout << i + 1 << "\n";
		}
	}
	
	return 0;
}