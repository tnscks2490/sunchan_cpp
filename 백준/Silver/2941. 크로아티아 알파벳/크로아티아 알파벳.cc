#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	string s;
	cin >> s;
	int index = 0;
	int sum = 0;
	while (true)
	{
		if (index >= s.length())
		{
			break;
		}
		if (s[index] == 'c')
		{
			if (s[index + 1] == '=')
			{
				sum++;
				index++;
			}
			else if (s[index + 1] == '-')
			{
				sum++;
				index++;
			}
			else
			{
				sum++;
			}
		}
		else if (s[index] == 'd')
		{
			if (s[index + 1] == 'z' and s[index + 2] == '=')
			{
				sum++;
				index += 2;
			}
			else if (s[index + 1] == '-')
			{
				sum++;
				index++;
			}
			else
			{
				sum++;
			}
		}
		else if (s[index] == 'l')
		{
			if (s[index+1] == 'j')
			{
				sum++;
				index++;
			}
			else
			{
				sum++;
			}
		}
		else if (s[index] == 'n')
		{
			if (s[index + 1] == 'j')
			{
				sum++;
				index++;
			}
			else {
				sum++;
			}
		}
		else if (s[index] == 's')
		{
			if (s[index + 1] == '=')
			{
				sum++;
				index++;
			}
			else
			{
				sum++;
			}
		}
		else if (s[index] == 'z')
		{
			if (s[index + 1] == '=')
			{
				sum++;
				index++;
			}
			else
			{
				sum++;
			}
		}
		else
		{
			sum++;
		}
		index++;
	}
	cout << sum;
}