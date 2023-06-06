#include <iostream>
#include <string>
using namespace std;

int main() {
	string N;
	getline(cin, N);
	int count = 1;
	for (int i = 0; i < N.length(); i++)
	{
		if (N[i] == ' ')
		{
			count++;
		}
	}
	if (N[0] == ' ')
	{
		count--;
	}
	if (N[N.length() - 1] == ' ')
	{
		count--;
	}
	cout << count << endl;
	return 0;
}