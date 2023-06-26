#include <iostream>
#include <string>
using namespace std;

int main() {

	string input;
	int arr[26] = { 0, };
	while (true)
	{
		bool check = true;
		
		getline(cin, input);
		if (input == "*")
		{
			break;
		}
		for (int i = 0; i < 26; i++)
		{
			arr[i] = 0;
		}
		for (int i = 0; i < input.length(); i++)
		{
			arr[input[i] - 97]++;
		}
		for (int i = 0; i < 26; i++)
		{
			if (arr[i] == 0)
			{
				check = false;
			}
		}

		if (check == false)
		{
			cout << "N" << endl;
		}
		else
		{
			cout << "Y" << endl;
		}
	}
	return 0;
}