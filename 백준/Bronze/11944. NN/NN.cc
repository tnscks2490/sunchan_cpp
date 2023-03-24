#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	string N = to_string(a);
	char* output = new char[b];
	if (N.length() * a > b)
	{
		for (int i = 0; i < b; i++)
		{
			output[i] = N[i % N.length()];
		}

		for (int i = 0; i < b; i++)
		{
			cout << output[i];
		}
	}
	else
	{
		for (int i = 0; i < b; i++)
		{
			output[i] = N[i % N.length()];
		}

		for (int i = 0; i < N.length()*a; i++)
		{
			cout << output[i];
		}
	}
	

	return 0;
}