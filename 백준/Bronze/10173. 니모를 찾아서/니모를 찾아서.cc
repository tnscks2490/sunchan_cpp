#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	while (true)
	{
		string input;
		int small = 0;
		getline(cin, input);
		if (input == "EOI")
		{
			break;
		}
		else
		{
			for (int i = 0; i < input.size(); i++) {
				input[i] = tolower(input[i]);
			}
			small = input.find("nemo");
			if (small >= 0 and small < 80)
			{
				cout << "Found" << endl;
			}
			else
			{
				cout << "Missing" << endl;
			}
		}
		
	}
	return 0;
}