#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;
	for (int i = N; i > 0; i--)
	{
		for (int j = N; j-i>0; j--)
		{
			cout << " ";
		}
		for (int k = i; k > 0; k--)
		{
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}