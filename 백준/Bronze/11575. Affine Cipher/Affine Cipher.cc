#include <iostream>

using namespace std;

int main() {

	
	int TC;
	cin >> TC;
	for (int i = 0; i < TC; i++)
	{
		int a, b;
		cin >> a >> b;
		string input;
		cin >> input;
		for (int i = 0; i < input.length(); i++)
		{
			input[i] = ((a * (input[i]-65) + b) % 26) + 65;
		}
		cout << input << endl;;
	}


	return 0;
}