#include <iostream>

using namespace std;

int main() {

	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;

	if (A % C > 0)
	{
		A = A / C + 1;
	}
	else
	{
		A = A / C;
	}
	if (B % D > 0)
	{
		B = B / D + 1;
	}
	else
	{
		B = B / D;
	}
	cout << L - max(A, B) << endl;
	return 0;
}