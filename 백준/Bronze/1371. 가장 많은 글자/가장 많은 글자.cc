#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int letter[26] = { 0, };
	int max = 0;
	int maxnum = 0;
	string input="";
	while(getline(cin, input))
	{
		for (int j = 0; j < input.length(); j++)
		{
			if (input[j] >= 97 and input[j] <= 122)
			{
				letter[input[j] - 97]++;
			}
		}
	}
	max = max_element(letter, letter + 26) - letter;
	maxnum = *max_element(letter, letter + 26);
	for (int i = max; i < 26; i++)
	{
		if (letter[i] == maxnum)
		{
			cout << char(i + 97);
		}
	}
	return 0;
}