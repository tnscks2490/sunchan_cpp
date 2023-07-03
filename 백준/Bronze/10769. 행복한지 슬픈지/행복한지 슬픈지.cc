#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int happy = 0;
	int sad = 0;

	getline(cin, input);
	if (input.length() > 2)
	{
		for (int i = 2; i < input.length(); i++)
		{
			if (input[i] == ')' and input[i - 1] == '-' and input[i - 2] == ':')
			{
				happy++;
			}
			else if (input[i] == '(' and input[i - 1] == '-' and input[i - 2] == ':')
			{
				sad++;
			}
		}
		if (happy == 0 and sad == 0)
		{
			cout << "none" << endl;
		}
		else if (happy > sad)
		{
			cout << "happy" << endl;
		}
		else if (happy < sad)
		{
			cout << "sad" << endl;
		}
		else if (happy == sad)
		{
			cout << "unsure" << endl;
		}
	}
	else
	{
		cout << "none" << endl;
	}
	
	


	return 0;
}