#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	int sub = 0;
	for (int i = 0; i < N; i++)
	{
		int s, a;
		cin >> s >> a;
		sub += a % s;
	}
	cout << sub << endl;
	return 0;
}