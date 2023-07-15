#include <iostream>
#include <string>
using namespace std;

int main() {

	string input;
	while (true)
	{
		int sum = 0;
		getline(cin, input);
		if (input[0] == '#')
		{
			break;
		}
		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] != ' ')
			{
				sum += (i + 1) * int(input[i] - 64);
			}
			
		}
		cout << sum << "\n";
	}
	return 0;
}