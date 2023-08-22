#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

	string N;
	cin >> N;
	
	if (N.length() == 1)
	{
		cout << stoi(N) << "\n";
	}
	else
	{
		int sum = 0;
		for (int i = 0; i < N.length() - 1; i++)
		{
			sum += (9 * pow(10, i)) * (i + 1);
		}
		string a;
		for (int i = 0; i < N.length() - 1; i++)
		{
			a += "9";
		}

		sum += (stoi(N) - stoi(a)) * N.length();
		cout << sum << endl;
	}
	
	return 0;
}