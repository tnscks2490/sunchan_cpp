#include <iostream>
#include <string>
using namespace std;

int main() {

	int N;
	string K;
	char k;
	cin >> N;
	int a;
	for (int i = 0; i < N; i++)
	{
		cin >> K;
		k = K[K.length() - 1];
		a = (int)k;
		if (a % 2 == 0)
		{
			cout << "even" << endl;
		}
		else
		{
			cout << "odd" << endl;
		}
		
	}
	return 0;
}