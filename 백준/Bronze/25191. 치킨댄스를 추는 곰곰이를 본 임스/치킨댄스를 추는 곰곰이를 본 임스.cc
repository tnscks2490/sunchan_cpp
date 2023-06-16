#include <iostream>

using namespace std;
int main() {

	int N, A, B;
	cin >> N;
	cin >> A >> B;
	A = A / 2;
	int count = 0;
	while (true)
	{
		if (B > 0)
		{
			B--;
			count++;
		}
		if (A > 0)
		{
			A--;
			count++;
		}

		if (A <= 0 and B <= 0)
		{
			break;
		}
	}
	if (N < count)
	{
		cout << N << endl;
	}
	else
	{
		cout << count << endl;
	}
	
	return 0;
}