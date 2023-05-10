#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int TC;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		string N;
		cin >> N;
		int front = 0;
		int back = 0;
		string Back;
		Back = N.substr(4, 7);
		front = (N[0] - 65) * pow(26, 2) + (N[1] - 65) * 26 + (N[2] - 65);
		back = stoi(Back);
		if (abs(front - back) <= 100)
		{
			cout << "nice" << endl;
		}
		else
		{
			cout << "not nice" << endl;
		}

	}
	return 0;
}