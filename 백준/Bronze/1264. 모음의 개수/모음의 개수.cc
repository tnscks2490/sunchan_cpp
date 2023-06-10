#include <iostream>
#include <string>
using namespace std;

int main() {

	string input;
	while (true)
	{
		int count = 0;
		getline(cin, input);
		if (input == "#")
		{
			break;
		}
		else {
			for (int i = 0; i < input.length(); i++)
			{
				if (input[i] == 'a' or input[i] == 'e' or input[i] == 'i' or input[i] == 'o' or input[i] == 'u')
				{
					count++;
				}
				else if (input[i] == 'A' or input[i] == 'E' or input[i] == 'I' or input[i] == 'O' or input[i] == 'U')
				{
					count++;
				}
			}
			cout << count << endl;
		}
		
	}
	return 0;
}