#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		if (i % 10 == 9) {
			cout << input[i];
			cout << endl;
		}
		else
			cout << input[i];
	}
	return 0;
}