#include <iostream>

// 65 A  90 Z

using namespace std;

int main() {

	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i]  == 'A')
		{
			input[i] = 'X';
		}
		else if (input[i] == 'B')
		{
			input[i] = 'Y';
		}
		else if (input[i] == 'C')
		{
			input[i] = 'Z';
		}
		else
		{
			input[i] = input[i] - 3;
		}
	}

	cout << input << endl;
	return 0;
}